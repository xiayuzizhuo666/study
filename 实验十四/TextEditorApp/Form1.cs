using System;
using System.Windows.Forms;

namespace TextEditorApp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            SetupEventHandlers();
            InitializeStatusBarTime();
        }

        private void SetupEventHandlers()
        {
            // 菜单事件
            newToolStripMenuItem.Click += NewDocument;
            openToolStripMenuItem.Click += OpenDocument;
            saveToolStripMenuItem.Click += SaveDocument;
            undoToolStripMenuItem.Click += UndoAction;

            // 工具栏事件
            toolStripButtonNew.Click += NewDocument;
            toolStripButtonOpen.Click += OpenDocument;
            toolStripButtonSave.Click += SaveDocument;
            toolStripButtonPrint.Click += PrintDocument;

            // 定时更新时间
            var timer = new Timer { Interval = 1000 };
            timer.Tick += (s, e) => toolStripStatusLabelTime.Text = DateTime.Now.ToString("yyyy/MM/dd HH:mm:ss");
            timer.Start();
        }

        private void NewDocument(object sender, EventArgs e)
        {
            textBoxMain.Clear();
        }

        private void OpenDocument(object sender, EventArgs e)
        {
            using (var dialog = new OpenFileDialog())
            {
                dialog.Filter = "文本文件|*.txt|所有文件|*.*";
                if (dialog.ShowDialog() == DialogResult.OK)
                {
                    textBoxMain.Text = System.IO.File.ReadAllText(dialog.FileName);
                }
            }
        }

        private void SaveDocument(object sender, EventArgs e)
        {
            using (var dialog = new SaveFileDialog())
            {
                dialog.Filter = "文本文件|*.txt|所有文件|*.*";
                if (dialog.ShowDialog() == DialogResult.OK)
                {
                    System.IO.File.WriteAllText(dialog.FileName, textBoxMain.Text);
                }
            }
        }

        private void UndoAction(object sender, EventArgs e)
        {
            if (textBoxMain.CanUndo)
            {
                textBoxMain.Undo();
                textBoxMain.ClearUndo();
            }
        }

        private void PrintDocument(object sender, EventArgs e)
        {
            MessageBox.Show("打印功能需连接打印机", "系统提示", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void InitializeStatusBarTime()
        {
            toolStripStatusLabelTime.Text = DateTime.Now.ToString("yyyy/MM/dd HH:mm:ss");
        }
    }
}