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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.txtAge = new System.Windows.Forms.TextBox();
            this.txtGender = new System.Windows.Forms.TextBox();
            this.txtName = new System.Windows.Forms.TextBox();
            this.txtStudentId = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.btnDisplay = new System.Windows.Forms.Button();
            this.btnAddUniversityStudent = new System.Windows.Forms.Button();
            this.btnAddMiddleSchoolStudent = new System.Windows.Forms.Button();
            this.btnAddPrimarySchoolStudent = new System.Windows.Forms.Button();
            this.rtbOutput = new System.Windows.Forms.RichTextBox();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.txtAge);
            this.groupBox1.Controls.Add(this.txtGender);
            this.groupBox1.Controls.Add(this.txtName);
            this.groupBox1.Controls.Add(this.txtStudentId);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(18, 18);
            this.groupBox1.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Padding = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.groupBox1.Size = new System.Drawing.Size(420, 240);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "学生基本信息";
            // 
            // txtAge
            // 
            this.txtAge.Location = new System.Drawing.Point(150, 180);
            this.txtAge.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.txtAge.Name = "txtAge";
            this.txtAge.Size = new System.Drawing.Size(223, 28);
            this.txtAge.TabIndex = 3;
            // 
            // txtGender
            // 
            this.txtGender.Location = new System.Drawing.Point(150, 128);
            this.txtGender.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.txtGender.Name = "txtGender";
            this.txtGender.Size = new System.Drawing.Size(223, 28);
            this.txtGender.TabIndex = 2;
            // 
            // txtName
            // 
            this.txtName.Location = new System.Drawing.Point(150, 75);
            this.txtName.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.txtName.Name = "txtName";
            this.txtName.Size = new System.Drawing.Size(223, 28);
            this.txtName.TabIndex = 1;
            // 
            // txtStudentId
            // 
            this.txtStudentId.Location = new System.Drawing.Point(150, 22);
            this.txtStudentId.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.txtStudentId.Name = "txtStudentId";
            this.txtStudentId.Size = new System.Drawing.Size(223, 28);
            this.txtStudentId.TabIndex = 0;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(30, 184);
            this.label4.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(44, 18);
            this.label4.TabIndex = 3;
            this.label4.Text = "年龄";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(30, 132);
            this.label3.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(44, 18);
            this.label3.TabIndex = 2;
            this.label3.Text = "性别";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(30, 80);
            this.label2.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(44, 18);
            this.label2.TabIndex = 1;
            this.label2.Text = "姓名";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(30, 27);
            this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(44, 18);
            this.label1.TabIndex = 0;
            this.label1.Text = "学号";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.btnDisplay);
            this.groupBox2.Controls.Add(this.btnAddUniversityStudent);
            this.groupBox2.Controls.Add(this.btnAddMiddleSchoolStudent);
            this.groupBox2.Controls.Add(this.btnAddPrimarySchoolStudent);
            this.groupBox2.Location = new System.Drawing.Point(450, 18);
            this.groupBox2.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Padding = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.groupBox2.Size = new System.Drawing.Size(300, 240);
            this.groupBox2.TabIndex = 1;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "基本操作";
            // 
            // btnDisplay
            // 
            this.btnDisplay.Location = new System.Drawing.Point(30, 180);
            this.btnDisplay.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.btnDisplay.Name = "btnDisplay";
            this.btnDisplay.Size = new System.Drawing.Size(240, 34);
            this.btnDisplay.TabIndex = 3;
            this.btnDisplay.Text = "显示";
            this.btnDisplay.UseVisualStyleBackColor = true;
            // 
            // btnAddUniversityStudent
            // 
            this.btnAddUniversityStudent.Location = new System.Drawing.Point(30, 128);
            this.btnAddUniversityStudent.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.btnAddUniversityStudent.Name = "btnAddUniversityStudent";
            this.btnAddUniversityStudent.Size = new System.Drawing.Size(240, 34);
            this.btnAddUniversityStudent.TabIndex = 2;
            this.btnAddUniversityStudent.Text = "添加大学生";
            this.btnAddUniversityStudent.UseVisualStyleBackColor = true;
            // 
            // btnAddMiddleSchoolStudent
            // 
            this.btnAddMiddleSchoolStudent.Location = new System.Drawing.Point(30, 75);
            this.btnAddMiddleSchoolStudent.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.btnAddMiddleSchoolStudent.Name = "btnAddMiddleSchoolStudent";
            this.btnAddMiddleSchoolStudent.Size = new System.Drawing.Size(240, 34);
            this.btnAddMiddleSchoolStudent.TabIndex = 1;
            this.btnAddMiddleSchoolStudent.Text = "添加中学生";
            this.btnAddMiddleSchoolStudent.UseVisualStyleBackColor = true;
            // 
            // btnAddPrimarySchoolStudent
            // 
            this.btnAddPrimarySchoolStudent.Location = new System.Drawing.Point(30, 22);
            this.btnAddPrimarySchoolStudent.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.btnAddPrimarySchoolStudent.Name = "btnAddPrimarySchoolStudent";
            this.btnAddPrimarySchoolStudent.Size = new System.Drawing.Size(240, 34);
            this.btnAddPrimarySchoolStudent.TabIndex = 0;
            this.btnAddPrimarySchoolStudent.Text = "添加小学生";
            this.btnAddPrimarySchoolStudent.UseVisualStyleBackColor = true;
            // 
            // rtbOutput
            // 
            this.rtbOutput.Location = new System.Drawing.Point(18, 270);
            this.rtbOutput.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.rtbOutput.Name = "rtbOutput";
            this.rtbOutput.Size = new System.Drawing.Size(730, 298);
            this.rtbOutput.TabIndex = 2;
            this.rtbOutput.Text = "";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(768, 588);
            this.Controls.Add(this.rtbOutput);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.Name = "Form1";
            this.Text = "学生信息管理系统";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox txtAge;
        private System.Windows.Forms.TextBox txtGender;
        private System.Windows.Forms.TextBox txtName;
        private System.Windows.Forms.TextBox txtStudentId;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button btnDisplay;
        private System.Windows.Forms.Button btnAddUniversityStudent;
        private System.Windows.Forms.Button btnAddMiddleSchoolStudent;
        private System.Windows.Forms.Button btnAddPrimarySchoolStudent;
        private System.Windows.Forms.RichTextBox rtbOutput;
    

}

}
