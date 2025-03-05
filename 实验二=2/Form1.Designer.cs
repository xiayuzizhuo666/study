namespace 实验二_2
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.labelyear = new System.Windows.Forms.Label();
            this.yearBox = new System.Windows.Forms.TextBox();
            this.panduan = new System.Windows.Forms.Button();
            this.shuchu = new System.Windows.Forms.RichTextBox();
            this.SuspendLayout();
            // 
            // labelyear
            // 
            this.labelyear.AutoSize = true;
            this.labelyear.Location = new System.Drawing.Point(218, 90);
            this.labelyear.Name = "labelyear";
            this.labelyear.Size = new System.Drawing.Size(41, 12);
            this.labelyear.TabIndex = 0;
            this.labelyear.Text = "年份：";
            // 
            // yearBox
            // 
            this.yearBox.Location = new System.Drawing.Point(295, 87);
            this.yearBox.Name = "yearBox";
            this.yearBox.Size = new System.Drawing.Size(100, 21);
            this.yearBox.TabIndex = 1;
            // 
            // panduan
            // 
            this.panduan.Location = new System.Drawing.Point(448, 87);
            this.panduan.Name = "panduan";
            this.panduan.Size = new System.Drawing.Size(75, 23);
            this.panduan.TabIndex = 2;
            this.panduan.Text = "判断";
            this.panduan.UseVisualStyleBackColor = true;
            this.panduan.Click += new System.EventHandler(this.panduan_Click);
            // 
            // shuchu
            // 
            this.shuchu.Location = new System.Drawing.Point(206, 143);
            this.shuchu.Name = "shuchu";
            this.shuchu.Size = new System.Drawing.Size(317, 96);
            this.shuchu.TabIndex = 3;
            this.shuchu.Text = "";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.shuchu);
            this.Controls.Add(this.panduan);
            this.Controls.Add(this.yearBox);
            this.Controls.Add(this.labelyear);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labelyear;
        private System.Windows.Forms.TextBox yearBox;
        private System.Windows.Forms.Button panduan;
        private System.Windows.Forms.RichTextBox shuchu;
    }
}

