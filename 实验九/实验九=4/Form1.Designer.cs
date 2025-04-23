using System;

namespace 实验九_4
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
            this.txt = new System.Windows.Forms.Label();
            this.count = new System.Windows.Forms.Label();
            this.textBox = new System.Windows.Forms.TextBox();
            this.button = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // txt
            // 
            this.txt.AutoSize = true;
            this.txt.Location = new System.Drawing.Point(23, 20);
            this.txt.Name = "txt";
            this.txt.Size = new System.Drawing.Size(167, 12);
            this.txt.TabIndex = 0;
            this.txt.Text = "请输入n个整数，用逗号分隔：";
            // 
            // count
            // 
            this.count.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.count.Location = new System.Drawing.Point(25, 83);
            this.count.Name = "count";
            this.count.Size = new System.Drawing.Size(378, 126);
            this.count.TabIndex = 1;
            // 
            // textBox
            // 
            this.textBox.Location = new System.Drawing.Point(25, 45);
            this.textBox.Name = "textBox";
            this.textBox.Size = new System.Drawing.Size(287, 21);
            this.textBox.TabIndex = 2;
            this.textBox.TextChanged += new System.EventHandler(this.textBox_TextChanged);
            // 
            // button
            // 
            this.button.Location = new System.Drawing.Point(328, 45);
            this.button.Name = "button";
            this.button.Size = new System.Drawing.Size(75, 23);
            this.button.TabIndex = 3;
            this.button.Text = "排序";
            this.button.UseVisualStyleBackColor = true;
            this.button.Click += new System.EventHandler(this.button_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(438, 235);
            this.Controls.Add(this.button);
            this.Controls.Add(this.textBox);
            this.Controls.Add(this.count);
            this.Controls.Add(this.txt);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        private void textBox_TextChanged(object sender, EventArgs e)
        {
            Console.WriteLine("请输入数据");
        }

        #endregion

        private System.Windows.Forms.Label txt;
        private System.Windows.Forms.Label count;
        private System.Windows.Forms.TextBox textBox;
        private System.Windows.Forms.Button button;
    }
}

