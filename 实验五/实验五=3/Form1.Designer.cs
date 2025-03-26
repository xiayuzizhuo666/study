namespace 实验五_3
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
            this.No = new System.Windows.Forms.Label();
            this.lblName = new System.Windows.Forms.Label(); // 修改控件变量名
            this.stuNo = new System.Windows.Forms.TextBox();
            this.stuName = new System.Windows.Forms.TextBox();
            this.count = new System.Windows.Forms.Label();
            this.GetMessage = new System.Windows.Forms.Button();
            this.Sex = new System.Windows.Forms.Label();
            this.Age = new System.Windows.Forms.Label();
            this.Specialty = new System.Windows.Forms.Label();
            this.stuSex = new System.Windows.Forms.TextBox();
            this.stuAge = new System.Windows.Forms.TextBox();
            this.stuSpecialty = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // No
            // 
            this.No.AutoSize = true;
            this.No.Location = new System.Drawing.Point(63, 54);
            this.No.Name = "No";
            this.No.Size = new System.Drawing.Size(29, 12);
            this.No.TabIndex = 0;
            this.No.Text = "学号";
            // 
            // lblName
            // 
            this.lblName.AutoSize = true;
            this.lblName.Location = new System.Drawing.Point(63, 80);
            this.lblName.Name = "lblName";
            this.lblName.Size = new System.Drawing.Size(29, 12);
            this.lblName.TabIndex = 1;
            this.lblName.Text = "姓名";
            // 
            // stuNo
            // 
            this.stuNo.Location = new System.Drawing.Point(127, 51);
            this.stuNo.Name = "stuNo";
            this.stuNo.Size = new System.Drawing.Size(100, 21);
            this.stuNo.TabIndex = 2;
            // 
            // stuName
            // 
            this.stuName.Location = new System.Drawing.Point(127, 77);
            this.stuName.Name = "stuName";
            this.stuName.Size = new System.Drawing.Size(100, 21);
            this.stuName.TabIndex = 3;
            // 
            // count
            // 
            this.count.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.count.Location = new System.Drawing.Point(259, 24);
            this.count.Name = "count";
            this.count.Size = new System.Drawing.Size(157, 177);
            this.count.TabIndex = 4;
            // 
            // GetMessage
            // 
            this.GetMessage.Location = new System.Drawing.Point(76, 218);
            this.GetMessage.Name = "GetMessage";
            this.GetMessage.Size = new System.Drawing.Size(194, 26);
            this.GetMessage.TabIndex = 5;
            this.GetMessage.Text = "显示";
            this.GetMessage.UseVisualStyleBackColor = true;
            this.GetMessage.Click += new System.EventHandler(this.GetMessage_Click);
            // 
            // Sex
            // 
            this.Sex.AutoSize = true;
            this.Sex.Location = new System.Drawing.Point(63, 110);
            this.Sex.Name = "Sex";
            this.Sex.Size = new System.Drawing.Size(29, 12);
            this.Sex.TabIndex = 6;
            this.Sex.Text = "性别";
            // 
            // Age
            // 
            this.Age.AutoSize = true;
            this.Age.Location = new System.Drawing.Point(63, 143);
            this.Age.Name = "Age";
            this.Age.Size = new System.Drawing.Size(29, 12);
            this.Age.TabIndex = 7;
            this.Age.Text = "年龄";
            // 
            // Specialty
            // 
            this.Specialty.AutoSize = true;
            this.Specialty.Location = new System.Drawing.Point(63, 174);
            this.Specialty.Name = "Specialty";
            this.Specialty.Size = new System.Drawing.Size(29, 12);
            this.Specialty.TabIndex = 8;
            this.Specialty.Text = "专业";
            // 
            // stuSex
            // 
            this.stuSex.Location = new System.Drawing.Point(127, 107);
            this.stuSex.Name = "stuSex";
            this.stuSex.Size = new System.Drawing.Size(100, 21);
            this.stuSex.TabIndex = 9;
            // 
            // stuAge
            // 
            this.stuAge.Location = new System.Drawing.Point(127, 140);
            this.stuAge.Name = "stuAge";
            this.stuAge.Size = new System.Drawing.Size(100, 21);
            this.stuAge.TabIndex = 10;
            // 
            // stuSpecialty
            // 
            this.stuSpecialty.Location = new System.Drawing.Point(127, 171);
            this.stuSpecialty.Name = "stuSpecialty";
            this.stuSpecialty.Size = new System.Drawing.Size(100, 21);
            this.stuSpecialty.TabIndex = 11;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(520, 256);
            this.Controls.Add(this.stuSpecialty);
            this.Controls.Add(this.stuAge);
            this.Controls.Add(this.stuSex);
            this.Controls.Add(this.Specialty);
            this.Controls.Add(this.Age);
            this.Controls.Add(this.Sex);
            this.Controls.Add(this.GetMessage);
            this.Controls.Add(this.count);
            this.Controls.Add(this.stuName);
            this.Controls.Add(this.stuNo);
            this.Controls.Add(this.lblName); // 更新控件引用
            this.Controls.Add(this.No);
            this.Name = "Form1"; // 直接设置窗体名称
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label No;
        private System.Windows.Forms.Label lblName; // 更新变量名
        private System.Windows.Forms.TextBox stuNo;
        private System.Windows.Forms.TextBox stuName;
        private System.Windows.Forms.Label count;
        private System.Windows.Forms.Button GetMessage;
        private System.Windows.Forms.Label Sex;
        private System.Windows.Forms.Label Age;
        private System.Windows.Forms.Label Specialty;
        private System.Windows.Forms.TextBox stuSex;
        private System.Windows.Forms.TextBox stuAge;
        private System.Windows.Forms.TextBox stuSpecialty;
    }
}