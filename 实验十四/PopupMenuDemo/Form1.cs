using System;
using System.Drawing;
using System.Windows.Forms;

namespace PopupMenuDemo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            SetupMenuEvents();
            ApplyCustomStyle();
        }

        private void SetupMenuEvents()
        {
            // 绑定菜单事件
            menuItem1.Click += (sender, e) =>
                MessageBox.Show("新建文件操作", "提示", MessageBoxButtons.OK, MessageBoxIcon.Information);

            menuItem2.Click += (sender, e) => Application.Exit();
        }

        private void ApplyCustomStyle()
        {
            // 自定义窗体样式
            this.SetStyle(ControlStyles.OptimizedDoubleBuffer |
                        ControlStyles.ResizeRedraw |
                        ControlStyles.AllPaintingInWmPaint, true);
        }

        protected override void OnPaint(PaintEventArgs e)
        {
            // 绘制红色背景
            using (var brush = new SolidBrush(Color.Red))
            {
                e.Graphics.FillRectangle(brush, ClientRectangle);
            }
            base.OnPaint(e);
        }

        protected override void OnMouseDown(MouseEventArgs e)
        {
            base.OnMouseDown(e);
            // 右键点击时显示菜单
            if (e.Button == MouseButtons.Right)
            {
                contextMenuStrip1.Show(this, e.Location);
            }
        }
    }
}