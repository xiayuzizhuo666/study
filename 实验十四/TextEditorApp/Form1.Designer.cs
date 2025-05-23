using System.Windows.Forms;
using System;

namespace TextEditorApp
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;

        // 菜单相关
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem newToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem openToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem saveToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem editToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem undoToolStripMenuItem;

        // 工具栏
        private System.Windows.Forms.ToolStrip toolStrip1;
        private System.Windows.Forms.ToolStripButton toolStripButtonNew;
        private System.Windows.Forms.ToolStripButton toolStripButtonOpen;
        private System.Windows.Forms.ToolStripButton toolStripButtonSave;
        private System.Windows.Forms.ToolStripButton toolStripButtonPrint;

        // 状态栏
        private System.Windows.Forms.StatusStrip statusStrip1;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabelVersion;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabelName;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabelTime;

        // 编辑区
        private System.Windows.Forms.TextBox textBoxMain;

        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        private void InitializeComponent()
        {
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.newToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.openToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.saveToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.editToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.undoToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStrip1 = new System.Windows.Forms.ToolStrip();
            this.toolStripButtonNew = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonOpen = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonSave = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonPrint = new System.Windows.Forms.ToolStripButton();
            this.statusStrip1 = new System.Windows.Forms.StatusStrip();
            this.toolStripStatusLabelVersion = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusLabelName = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusLabelTime = new System.Windows.Forms.ToolStripStatusLabel();
            this.textBoxMain = new System.Windows.Forms.TextBox();
            this.menuStrip1.SuspendLayout();
            this.toolStrip1.SuspendLayout();
            this.statusStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.GripMargin = new System.Windows.Forms.Padding(2, 2, 0, 2);
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(24, 24);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem,
            this.editToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 38);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(800, 36);
            this.menuStrip1.TabIndex = 0;
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.newToolStripMenuItem,
            this.openToolStripMenuItem,
            this.saveToolStripMenuItem});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(62, 28);
            this.fileToolStripMenuItem.Text = "文件";
            // 
            // newToolStripMenuItem
            // 
            this.newToolStripMenuItem.Name = "newToolStripMenuItem";
            this.newToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.N)));
            this.newToolStripMenuItem.Size = new System.Drawing.Size(215, 34);
            this.newToolStripMenuItem.Text = "新建";
            // 
            // openToolStripMenuItem
            // 
            this.openToolStripMenuItem.Name = "openToolStripMenuItem";
            this.openToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.O)));
            this.openToolStripMenuItem.Size = new System.Drawing.Size(215, 34);
            this.openToolStripMenuItem.Text = "打开";
            // 
            // saveToolStripMenuItem
            // 
            this.saveToolStripMenuItem.Name = "saveToolStripMenuItem";
            this.saveToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.S)));
            this.saveToolStripMenuItem.Size = new System.Drawing.Size(215, 34);
            this.saveToolStripMenuItem.Text = "保存";
            // 
            // editToolStripMenuItem
            // 
            this.editToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.undoToolStripMenuItem});
            this.editToolStripMenuItem.Name = "editToolStripMenuItem";
            this.editToolStripMenuItem.Size = new System.Drawing.Size(62, 28);
            this.editToolStripMenuItem.Text = "编辑";
            // 
            // undoToolStripMenuItem
            // 
            this.undoToolStripMenuItem.Name = "undoToolStripMenuItem";
            this.undoToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.Z)));
            this.undoToolStripMenuItem.Size = new System.Drawing.Size(211, 34);
            this.undoToolStripMenuItem.Text = "撤销";
            // 
            // toolStrip1
            // 
            this.toolStrip1.ImageScalingSize = new System.Drawing.Size(24, 24);
            this.toolStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripButtonNew,
            this.toolStripButtonOpen,
            this.toolStripButtonSave,
            this.toolStripButtonPrint});
            this.toolStrip1.Location = new System.Drawing.Point(0, 0);
            this.toolStrip1.Name = "toolStrip1";
            this.toolStrip1.Size = new System.Drawing.Size(800, 38);
            this.toolStrip1.TabIndex = 1;
            // 
            // toolStripButtonNew
            // 
            this.toolStripButtonNew.Name = "toolStripButtonNew";
            this.toolStripButtonNew.Size = new System.Drawing.Size(34, 20);
            this.toolStripButtonNew.ToolTipText = "新建";
            // 
            // toolStripButtonOpen
            // 
            this.toolStripButtonOpen.Name = "toolStripButtonOpen";
            this.toolStripButtonOpen.Size = new System.Drawing.Size(34, 20);
            this.toolStripButtonOpen.ToolTipText = "打开";
            // 
            // toolStripButtonSave
            // 
            this.toolStripButtonSave.Name = "toolStripButtonSave";
            this.toolStripButtonSave.Size = new System.Drawing.Size(34, 20);
            this.toolStripButtonSave.ToolTipText = "保存";
            // 
            // toolStripButtonPrint
            // 
            this.toolStripButtonPrint.Name = "toolStripButtonPrint";
            this.toolStripButtonPrint.Size = new System.Drawing.Size(34, 20);
            this.toolStripButtonPrint.ToolTipText = "打印";
            // 
            // statusStrip1
            // 
            this.statusStrip1.ImageScalingSize = new System.Drawing.Size(24, 24);
            this.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripStatusLabelVersion,
            this.toolStripStatusLabelName,
            this.toolStripStatusLabelTime});
            this.statusStrip1.Location = new System.Drawing.Point(0, 465);
            this.statusStrip1.Name = "statusStrip1";
            this.statusStrip1.Size = new System.Drawing.Size(800, 35);
            this.statusStrip1.TabIndex = 2;
            // 
            // toolStripStatusLabelVersion
            // 
            this.toolStripStatusLabelVersion.Name = "toolStripStatusLabelVersion";
            this.toolStripStatusLabelVersion.Size = new System.Drawing.Size(72, 28);
            this.toolStripStatusLabelVersion.Text = "版本1.0";
            // 
            // toolStripStatusLabelName
            // 
            this.toolStripStatusLabelName.BorderSides = System.Windows.Forms.ToolStripStatusLabelBorderSides.Left;
            this.toolStripStatusLabelName.Name = "toolStripStatusLabelName";
            this.toolStripStatusLabelName.Size = new System.Drawing.Size(50, 28);
            this.toolStripStatusLabelName.Text = "张三";
            // 
            // toolStripStatusLabelTime
            // 
            this.toolStripStatusLabelTime.BorderSides = System.Windows.Forms.ToolStripStatusLabelBorderSides.Left;
            this.toolStripStatusLabelTime.Name = "toolStripStatusLabelTime";
            this.toolStripStatusLabelTime.Size = new System.Drawing.Size(197, 28);
            this.toolStripStatusLabelTime.Text = "2025/05/23 17:56:18";
            // 
            // textBoxMain
            // 
            this.textBoxMain.Dock = System.Windows.Forms.DockStyle.Fill;
            this.textBoxMain.Location = new System.Drawing.Point(0, 0);
            this.textBoxMain.Multiline = true;
            this.textBoxMain.Name = "textBoxMain";
            this.textBoxMain.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.textBoxMain.Size = new System.Drawing.Size(800, 500);
            this.textBoxMain.TabIndex = 3;
            // 
            // Form1
            // 
            this.ClientSize = new System.Drawing.Size(800, 500);
            this.Controls.Add(this.menuStrip1);
            this.Controls.Add(this.toolStrip1);
            this.Controls.Add(this.statusStrip1);
            this.Controls.Add(this.textBoxMain);
            this.Name = "Form1";
            this.Text = "文本编辑器";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.toolStrip1.ResumeLayout(false);
            this.toolStrip1.PerformLayout();
            this.statusStrip1.ResumeLayout(false);
            this.statusStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }
    }
}