namespace 实验八_3
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
            this.txtStuNo = new System.Windows.Forms.TextBox();
            this.txtName = new System.Windows.Forms.TextBox();
            this.txtGender = new System.Windows.Forms.TextBox();
            this.txtAge = new System.Windows.Forms.TextBox();
            this.btnAddPrimary = new System.Windows.Forms.Button();
            this.btnAddMiddle = new System.Windows.Forms.Button();
            this.btnAddCollege = new System.Windows.Forms.Button();
            this.btnDisplay = new System.Windows.Forms.Button();
            this.rtbOutput = new System.Windows.Forms.RichTextBox();
            this.SuspendLayout();

            // 
            // txtStuNo
            // 
            this.txtStuNo.Location = new System.Drawing.Point(120, 20);
            this.txtStuNo.Name = "txtStuNo";
            this.txtStuNo.Size = new System.Drawing.Size(150, 21);
            this.txtStuNo.TabIndex = 0;

            // 
            // txtName
            // 
            this.txtName.Location = new System.Drawing.Point(120, 50);
            this.txtName.Name = "txtName";
            this.txtName.Size = new System.Drawing.Size(150, 21);
            this.txtName.TabIndex = 1;

            // 
            // txtGender
            // 
            this.txtGender.Location = new System.Drawing.Point(120, 80);
            this.txtGender.Name = "txtGender";
            this.txtGender.Size = new System.Drawing.Size(150, 21);
            this.txtGender.TabIndex = 2;

            // 
            // txtAge
            // 
            this.txtAge.Location = new System.Drawing.Point(120, 110);
            this.txtAge.Name = "txtAge";
            this.txtAge.Size = new System.Drawing.Size(150, 21);
            this.txtAge.TabIndex = 3;

            // 
            // btnAddPrimary
            // 
            this.btnAddPrimary.Location = new System.Drawing.Point(300, 20);
            this.btnAddPrimary.Name = "btnAddPrimary";
            this.btnAddPrimary.Size = new System.Drawing.Size(120, 23);
            this.btnAddPrimary.TabIndex = 4;
            this.btnAddPrimary.Text = "添加小学生";
            this.btnAddPrimary.UseVisualStyleBackColor = true;

            // 
            // btnAddMiddle
            // 
            this.btnAddMiddle.Location = new System.Drawing.Point(300, 50);
            this.btnAddMiddle.Name = "btnAddMiddle";
            this.btnAddMiddle.Size = new System.Drawing.Size(120, 23);
            this.btnAddMiddle.TabIndex = 5;
            this.btnAddMiddle.Text = "添加中学生";
            this.btnAddMiddle.UseVisualStyleBackColor = true;

            // 
            // btnAddCollege
            // 
            this.btnAddCollege.Location = new System.Drawing.Point(300, 80);
            this.btnAddCollege.Name = "btnAddCollege";
            this.btnAddCollege.Size = new System.Drawing.Size(120, 23);
            this.btnAddCollege.TabIndex = 6;
            this.btnAddCollege.Text = "添加大学生";
            this.btnAddCollege.UseVisualStyleBackColor = true;

            // 
            // btnDisplay
            // 
            this.btnDisplay.Location = new System.Drawing.Point(300, 110);
            this.btnDisplay.Name = "btnDisplay";
            this.btnDisplay.Size = new System.Drawing.Size(120, 23);
            this.btnDisplay.TabIndex = 7;
            this.btnDisplay.Text = "显示全部";
            this.btnDisplay.UseVisualStyleBackColor = true;

            // 
            // rtbOutput
            // 
            this.rtbOutput.Location = new System.Drawing.Point(20, 150);
            this.rtbOutput.Name = "rtbOutput";
            this.rtbOutput.ReadOnly = true;
            this.rtbOutput.Size = new System.Drawing.Size(430, 200);
            this.rtbOutput.TabIndex = 8;
            this.rtbOutput.Text = "";

            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(480, 380);
            this.Controls.Add(this.rtbOutput);
            this.Controls.Add(this.btnDisplay);
            this.Controls.Add(this.btnAddCollege);
            this.Controls.Add(this.btnAddMiddle);
            this.Controls.Add(this.btnAddPrimary);
            this.Controls.Add(this.txtAge);
            this.Controls.Add(this.txtGender);
            this.Controls.Add(this.txtName);
            this.Controls.Add(this.txtStuNo);
            this.Controls.Add(new System.Windows.Forms.Label() { Text = "学号:", Location = new System.Drawing.Point(20, 20) });
            this.Controls.Add(new System.Windows.Forms.Label() { Text = "姓名:", Location = new System.Drawing.Point(20, 50) });
            this.Controls.Add(new System.Windows.Forms.Label() { Text = "性别:", Location = new System.Drawing.Point(20, 80) });
            this.Controls.Add(new System.Windows.Forms.Label() { Text = "年龄:", Location = new System.Drawing.Point(20, 110) });
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "Form1";
            this.Text = "学生信息管理系统";
            this.ResumeLayout(false);
            this.PerformLayout();
        }

        #endregion

        private System.Windows.Forms.TextBox txtStuNo;
        private System.Windows.Forms.TextBox txtName;
        private System.Windows.Forms.TextBox txtGender;
        private System.Windows.Forms.TextBox txtAge;
        private System.Windows.Forms.Button btnAddPrimary;
        private System.Windows.Forms.Button btnAddMiddle;
        private System.Windows.Forms.Button btnAddCollege;
        private System.Windows.Forms.Button btnDisplay;
        private System.Windows.Forms.RichTextBox rtbOutput;
    }
}