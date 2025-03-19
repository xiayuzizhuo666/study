using System;

namespace 实验四_3
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
            this.components = new System.ComponentModel.Container();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.textBox4 = new System.Windows.Forms.TextBox();
            this.name = new System.Windows.Forms.Label();
            this.no = new System.Windows.Forms.Label();
            this.sex = new System.Windows.Forms.Label();
            this.score = new System.Windows.Forms.Label();
            this.cout = new System.Windows.Forms.Label();
            this.button2 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(179, 58);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 21);
            this.textBox1.TabIndex = 0;
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(61, 4);
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(179, 85);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(100, 21);
            this.textBox2.TabIndex = 2;
            // 
            // textBox3
            // 
            this.textBox3.Location = new System.Drawing.Point(179, 112);
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(100, 21);
            this.textBox3.TabIndex = 3;
            // 
            // textBox4
            // 
            this.textBox4.Location = new System.Drawing.Point(179, 139);
            this.textBox4.Name = "textBox4";
            this.textBox4.Size = new System.Drawing.Size(100, 21);
            this.textBox4.TabIndex = 4;
            // 
            // name
            // 
            this.name.AutoSize = true;
            this.name.Location = new System.Drawing.Point(115, 61);
            this.name.Name = "name";
            this.name.Size = new System.Drawing.Size(41, 12);
            this.name.TabIndex = 7;
            this.name.Text = "姓名：";
            // 
            // no
            // 
            this.no.AutoSize = true;
            this.no.Location = new System.Drawing.Point(115, 88);
            this.no.Name = "no";
            this.no.Size = new System.Drawing.Size(41, 12);
            this.no.TabIndex = 8;
            this.no.Text = "学号：";
            // 
            // sex
            // 
            this.sex.AutoSize = true;
            this.sex.Location = new System.Drawing.Point(115, 115);
            this.sex.Name = "sex";
            this.sex.Size = new System.Drawing.Size(41, 12);
            this.sex.TabIndex = 9;
            this.sex.Text = "性别：";
            // 
            // score
            // 
            this.score.AutoSize = true;
            this.score.Location = new System.Drawing.Point(115, 142);
            this.score.Name = "score";
            this.score.Size = new System.Drawing.Size(41, 12);
            this.score.TabIndex = 10;
            this.score.Text = "成绩：";
            // 
            // cout
            // 
            this.cout.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.cout.Location = new System.Drawing.Point(341, 58);
            this.cout.Name = "cout";
            this.cout.Size = new System.Drawing.Size(210, 165);
            this.cout.TabIndex = 12;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(144, 166);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(114, 32);
            this.button2.TabIndex = 14;
            this.button2.Text = "显示";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.cout);
            this.Controls.Add(this.score);
            this.Controls.Add(this.sex);
            this.Controls.Add(this.no);
            this.Controls.Add(this.name);
            this.Controls.Add(this.textBox4);
            this.Controls.Add(this.textBox3);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.textBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        private void button_Click(object sender, EventArgs e)
        {
            throw new NotImplementedException();
        }

        #endregion

        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.TextBox textBox4;
        private System.Windows.Forms.Label name;
        private System.Windows.Forms.Label no;
        private System.Windows.Forms.Label sex;
        private System.Windows.Forms.Label score;
        private System.Windows.Forms.Label cout;
        private System.Windows.Forms.Button button2;
    }
}

