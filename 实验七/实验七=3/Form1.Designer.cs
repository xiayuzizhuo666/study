using System;

namespace 实验七_3
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;
        private System.Windows.Forms.TextBox txtName;
        private System.Windows.Forms.TextBox txtAge;
        private System.Windows.Forms.TextBox txtChinese;
        private System.Windows.Forms.TextBox txtMath;
        private System.Windows.Forms.TextBox txtEnglish;
        private System.Windows.Forms.Button btnPrimary;
        private System.Windows.Forms.Button btnMiddle;
        private System.Windows.Forms.Button btnCollege;
        private System.Windows.Forms.TextBox txtOutput;
        private System.Windows.Forms.Label lblName;
        private System.Windows.Forms.Label lblAge;
        private System.Windows.Forms.Label lblChinese;
        private System.Windows.Forms.Label lblMath;
        private System.Windows.Forms.Label lblEnglish;

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
            this.txtName = new System.Windows.Forms.TextBox();
            this.txtAge = new System.Windows.Forms.TextBox();
            this.txtChinese = new System.Windows.Forms.TextBox();
            this.txtMath = new System.Windows.Forms.TextBox();
            this.txtEnglish = new System.Windows.Forms.TextBox();
            this.btnPrimary = new System.Windows.Forms.Button();
            this.btnMiddle = new System.Windows.Forms.Button();
            this.btnCollege = new System.Windows.Forms.Button();
            this.txtOutput = new System.Windows.Forms.TextBox();
            this.lblName = new System.Windows.Forms.Label();
            this.lblAge = new System.Windows.Forms.Label();
            this.lblChinese = new System.Windows.Forms.Label();
            this.lblMath = new System.Windows.Forms.Label();
            this.lblEnglish = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // txtName
            // 
            this.txtName.Location = new System.Drawing.Point(120, 20);
            this.txtName.Name = "txtName";
            this.txtName.Size = new System.Drawing.Size(150, 28);
            this.txtName.TabIndex = 0;
            // 
            // txtAge
            // 
            this.txtAge.Location = new System.Drawing.Point(120, 60);
            this.txtAge.Name = "txtAge";
            this.txtAge.Size = new System.Drawing.Size(150, 28);
            this.txtAge.TabIndex = 1;
            // 
            // txtChinese
            // 
            this.txtChinese.Location = new System.Drawing.Point(120, 100);
            this.txtChinese.Name = "txtChinese";
            this.txtChinese.Size = new System.Drawing.Size(150, 28);
            this.txtChinese.TabIndex = 2;
            // 
            // txtMath
            // 
            this.txtMath.Location = new System.Drawing.Point(120, 140);
            this.txtMath.Name = "txtMath";
            this.txtMath.Size = new System.Drawing.Size(150, 28);
            this.txtMath.TabIndex = 3;
            // 
            // txtEnglish
            // 
            this.txtEnglish.Location = new System.Drawing.Point(120, 180);
            this.txtEnglish.Name = "txtEnglish";
            this.txtEnglish.Size = new System.Drawing.Size(150, 28);
            this.txtEnglish.TabIndex = 4;
            // 
            // btnPrimary
            // 
            this.btnPrimary.Location = new System.Drawing.Point(30, 240);
            this.btnPrimary.Name = "btnPrimary";
            this.btnPrimary.Size = new System.Drawing.Size(100, 30);
            this.btnPrimary.TabIndex = 5;
            this.btnPrimary.Text = "小学生";
            this.btnPrimary.UseVisualStyleBackColor = true;
            this.btnPrimary.Click += new System.EventHandler(this.btnPrimary_Click);
            // 
            // btnMiddle
            // 
            this.btnMiddle.Location = new System.Drawing.Point(150, 240);
            this.btnMiddle.Name = "btnMiddle";
            this.btnMiddle.Size = new System.Drawing.Size(100, 30);
            this.btnMiddle.TabIndex = 6;
            this.btnMiddle.Text = "中学生";
            this.btnMiddle.UseVisualStyleBackColor = true;
            this.btnMiddle.Click += new System.EventHandler(this.btnMiddle_Click);
            // 
            // btnCollege
            // 
            this.btnCollege.Location = new System.Drawing.Point(270, 240);
            this.btnCollege.Name = "btnCollege";
            this.btnCollege.Size = new System.Drawing.Size(100, 30);
            this.btnCollege.TabIndex = 7;
            this.btnCollege.Text = "大学生";
            this.btnCollege.UseVisualStyleBackColor = true;
            this.btnCollege.Click += new System.EventHandler(this.btnCollege_Click);
            // 
            // txtOutput
            // 
            this.txtOutput.Location = new System.Drawing.Point(30, 290);
            this.txtOutput.Multiline = true;
            this.txtOutput.Name = "txtOutput";
            this.txtOutput.ReadOnly = true;
            this.txtOutput.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtOutput.Size = new System.Drawing.Size(340, 150);
            this.txtOutput.TabIndex = 8;
            // 
            // lblName
            // 
            this.lblName.AutoSize = true;
            this.lblName.Location = new System.Drawing.Point(30, 23);
            this.lblName.Name = "lblName";
            this.lblName.Size = new System.Drawing.Size(44, 18);
            this.lblName.TabIndex = 9;
            this.lblName.Text = "姓名";
            // 
            // lblAge
            // 
            this.lblAge.AutoSize = true;
            this.lblAge.Location = new System.Drawing.Point(30, 63);
            this.lblAge.Name = "lblAge";
            this.lblAge.Size = new System.Drawing.Size(44, 18);
            this.lblAge.TabIndex = 10;
            this.lblAge.Text = "年龄";
            // 
            // lblChinese
            // 
            this.lblChinese.AutoSize = true;
            this.lblChinese.Location = new System.Drawing.Point(30, 103);
            this.lblChinese.Name = "lblChinese";
            this.lblChinese.Size = new System.Drawing.Size(80, 18);
            this.lblChinese.TabIndex = 11;
            this.lblChinese.Text = "语文/必修";
            // 
            // lblMath
            // 
            this.lblMath.AutoSize = true;
            this.lblMath.Location = new System.Drawing.Point(30, 143);
            this.lblMath.Name = "lblMath";
            this.lblMath.Size = new System.Drawing.Size(80, 18);
            this.lblMath.TabIndex = 12;
            this.lblMath.Text = "数学/选修";
            // 
            // lblEnglish
            // 
            this.lblEnglish.AutoSize = true;
            this.lblEnglish.Location = new System.Drawing.Point(30, 183);
            this.lblEnglish.Name = "lblEnglish";
            this.lblEnglish.Size = new System.Drawing.Size(44, 18);
            this.lblEnglish.TabIndex = 13;
            this.lblEnglish.Text = "英语";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(400, 450);
            this.Controls.Add(this.lblEnglish);
            this.Controls.Add(this.lblMath);
            this.Controls.Add(this.lblChinese);
            this.Controls.Add(this.lblAge);
            this.Controls.Add(this.lblName);
            this.Controls.Add(this.txtOutput);
            this.Controls.Add(this.btnCollege);
            this.Controls.Add(this.btnMiddle);
            this.Controls.Add(this.btnPrimary);
            this.Controls.Add(this.txtEnglish);
            this.Controls.Add(this.txtMath);
            this.Controls.Add(this.txtChinese);
            this.Controls.Add(this.txtAge);
            this.Controls.Add(this.txtName);
            this.Name = "Form1";
            this.Text = "学生成绩计算";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        private void BtnCollege_Click(object sender, EventArgs e)
        {
            throw new NotImplementedException();
        }

        private void BtnMiddle_Click(object sender, EventArgs e)
        {
            throw new NotImplementedException();
        }

        private void BtnPrimary_Click(object sender, EventArgs e)
        {
            throw new NotImplementedException();
        }


    }
}
