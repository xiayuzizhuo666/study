namespace PopupMenuDemo
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;

        // 弹出菜单相关控件
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem menuItem1;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
        private System.Windows.Forms.ToolStripMenuItem menuItem2;

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
            this.components = new System.ComponentModel.Container();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.menuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.menuItem2 = new System.Windows.Forms.ToolStripMenuItem();
            this.contextMenuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(24, 24);
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.menuItem1,
            this.toolStripSeparator1,
            this.menuItem2});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.ShowImageMargin = false;
            this.contextMenuStrip1.Size = new System.Drawing.Size(128, 70);
            // 
            // menuItem1
            // 
            this.menuItem1.Name = "menuItem1";
            this.menuItem1.Size = new System.Drawing.Size(127, 30);
            this.menuItem1.Text = "新建文件";
            // 
            // toolStripSeparator1
            // 
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            this.toolStripSeparator1.Size = new System.Drawing.Size(124, 6);
            // 
            // menuItem2
            // 
            this.menuItem2.Name = "menuItem2";
            this.menuItem2.Size = new System.Drawing.Size(127, 30);
            this.menuItem2.Text = "退出程序";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Red;
            this.ClientSize = new System.Drawing.Size(400, 400);
            this.ContextMenuStrip = this.contextMenuStrip1;
            this.DoubleBuffered = true;
            this.Name = "Form1";
            this.Text = "弹出式菜单";
            this.contextMenuStrip1.ResumeLayout(false);
            this.ResumeLayout(false);

        }
    }
}