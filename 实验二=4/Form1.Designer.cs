namespace 实验二_4
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
            this.chengji = new System.Windows.Forms.Label();
            this.fenshu = new System.Windows.Forms.TextBox();
            this.panduan = new System.Windows.Forms.Button();
            this.dengji = new System.Windows.Forms.Label();
            this.shuchu = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // chengji
            // 
            this.chengji.AutoSize = true;
            this.chengji.Location = new System.Drawing.Point(182, 80);
            this.chengji.Name = "chengji";
            this.chengji.Size = new System.Drawing.Size(41, 12);
            this.chengji.TabIndex = 0;
            this.chengji.Text = "成绩：";
            // 
            // fenshu
            // 
            this.fenshu.Location = new System.Drawing.Point(229, 77);
            this.fenshu.Name = "fenshu";
            this.fenshu.Size = new System.Drawing.Size(100, 21);
            this.fenshu.TabIndex = 1;
            // 
            // panduan
            // 
            this.panduan.Location = new System.Drawing.Point(383, 77);
            this.panduan.Name = "panduan";
            this.panduan.Size = new System.Drawing.Size(75, 23);
            this.panduan.TabIndex = 2;
            this.panduan.Text = "评级";
            this.panduan.UseVisualStyleBackColor = true;
            this.panduan.Click += new System.EventHandler(this.panduan_Click);
            // 
            // dengji
            // 
            this.dengji.AutoSize = true;
            this.dengji.Location = new System.Drawing.Point(182, 120);
            this.dengji.Name = "dengji";
            this.dengji.Size = new System.Drawing.Size(41, 12);
            this.dengji.TabIndex = 3;
            this.dengji.Text = "等级：";
            // 
            // shuchu
            // 
            this.shuchu.AutoSize = true;
            this.shuchu.Location = new System.Drawing.Point(261, 120);
            this.shuchu.Name = "shuchu";
            this.shuchu.Size = new System.Drawing.Size(0, 12);
            this.shuchu.TabIndex = 4;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.shuchu);
            this.Controls.Add(this.dengji);
            this.Controls.Add(this.panduan);
            this.Controls.Add(this.fenshu);
            this.Controls.Add(this.chengji);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label chengji;
        private System.Windows.Forms.TextBox fenshu;
        private System.Windows.Forms.Button panduan;
        private System.Windows.Forms.Label dengji;
        private System.Windows.Forms.Label shuchu;
    }
}

