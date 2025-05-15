namespace 实验十二_2
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;

        private System.Windows.Forms.ListBox listBoxAvailableCourses;
        private System.Windows.Forms.ListBox listBoxSelectedCourses;
        private System.Windows.Forms.Button buttonAddCourse;
        private System.Windows.Forms.Button buttonAddAllCourses;
        private System.Windows.Forms.Button buttonRemoveCourse;
        private System.Windows.Forms.Button buttonRemoveAllCourses;
        private System.Windows.Forms.Label labelAvailableCourses;
        private System.Windows.Forms.Label labelSelectedCourses;

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
            this.listBoxAvailableCourses = new System.Windows.Forms.ListBox();
            this.listBoxSelectedCourses = new System.Windows.Forms.ListBox();
            this.buttonAddCourse = new System.Windows.Forms.Button();
            this.buttonAddAllCourses = new System.Windows.Forms.Button();
            this.buttonRemoveCourse = new System.Windows.Forms.Button();
            this.buttonRemoveAllCourses = new System.Windows.Forms.Button();
            this.labelAvailableCourses = new System.Windows.Forms.Label();
            this.labelSelectedCourses = new System.Windows.Forms.Label();
            this.SuspendLayout();

            // listBoxAvailableCourses
            this.listBoxAvailableCourses.FormattingEnabled = true;
            this.listBoxAvailableCourses.ItemHeight = 12;
            this.listBoxAvailableCourses.Location = new System.Drawing.Point(25, 40);
            this.listBoxAvailableCourses.Size = new System.Drawing.Size(220, 340);
            this.listBoxAvailableCourses.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;

            // listBoxSelectedCourses
            this.listBoxSelectedCourses.FormattingEnabled = true;
            this.listBoxSelectedCourses.ItemHeight = 12;
            this.listBoxSelectedCourses.Location = new System.Drawing.Point(385, 40);
            this.listBoxSelectedCourses.Size = new System.Drawing.Size(220, 340);
            this.listBoxSelectedCourses.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;

            // buttonAddCourse
            this.buttonAddCourse.Font = new System.Drawing.Font("Wingdings", 9F);
            this.buttonAddCourse.Text = "è";
            this.buttonAddCourse.Size = new System.Drawing.Size(36, 23);
            this.buttonAddCourse.Location = new System.Drawing.Point(265, 140);
            this.buttonAddCourse.Click += new System.EventHandler(this.buttonAddCourse_Click);

            // buttonAddAllCourses
            this.buttonAddAllCourses.Font = new System.Drawing.Font("Wingdings", 9F);
            this.buttonAddAllCourses.Text = "ê";
            this.buttonAddAllCourses.Size = new System.Drawing.Size(36, 23);
            this.buttonAddAllCourses.Location = new System.Drawing.Point(265, 175);
            this.buttonAddAllCourses.Click += new System.EventHandler(this.buttonAddAllCourses_Click);

            // buttonRemoveCourse
            this.buttonRemoveCourse.Font = new System.Drawing.Font("Wingdings", 9F);
            this.buttonRemoveCourse.Text = "ç";
            this.buttonRemoveCourse.Size = new System.Drawing.Size(36, 23);
            this.buttonRemoveCourse.Location = new System.Drawing.Point(265, 210);
            this.buttonRemoveCourse.Click += new System.EventHandler(this.buttonRemoveCourse_Click);

            // buttonRemoveAllCourses
            this.buttonRemoveAllCourses.Font = new System.Drawing.Font("Wingdings", 9F);
            this.buttonRemoveAllCourses.Text = "é";
            this.buttonRemoveAllCourses.Size = new System.Drawing.Size(36, 23);
            this.buttonRemoveAllCourses.Location = new System.Drawing.Point(265, 245);
            this.buttonRemoveAllCourses.Click += new System.EventHandler(this.buttonRemoveAllCourses_Click);

            // labelAvailableCourses
            this.labelAvailableCourses.AutoSize = true;
            this.labelAvailableCourses.Location = new System.Drawing.Point(25, 20);
            this.labelAvailableCourses.Text = "可选课程列表";

            // labelSelectedCourses
            this.labelSelectedCourses.AutoSize = true;
            this.labelSelectedCourses.Location = new System.Drawing.Point(385, 20);
            this.labelSelectedCourses.Text = "已选课程列表";

            // Form1
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(630, 410);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "课程管理系统";
            this.Controls.Add(this.labelAvailableCourses);
            this.Controls.Add(this.labelSelectedCourses);
            this.Controls.Add(this.listBoxAvailableCourses);
            this.Controls.Add(this.listBoxSelectedCourses);
            this.Controls.Add(this.buttonAddCourse);
            this.Controls.Add(this.buttonAddAllCourses);
            this.Controls.Add(this.buttonRemoveCourse);
            this.Controls.Add(this.buttonRemoveAllCourses);
            this.ResumeLayout(false);
            this.PerformLayout();
        }
    }
}