using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;
using System.Xml.Linq;

namespace 实验八_3
{
    public partial class Form1 : Form
    {
        private readonly Grade<Student> _grade = new Grade<Student>();

        public Form1()
        {
            InitializeComponent();
            btnAddPrimary.Click += (s, e) => AddStudent<PrimaryStudent>();
            btnAddMiddle.Click += (s, e) => AddStudent<MiddleStudent>();
            btnAddCollege.Click += (s, e) => AddStudent<CollegeStudent>();
            btnDisplay.Click += (s, e) => rtbOutput.Text = _grade.GetAllInfo();
        }

        private void AddStudent<T>() where T : Student, new()
        {
            try
            {
                var student = new T
                {
                    StuNo = txtStuNo.Text.Trim(),
                    Name = txtName.Text.Trim(),
                    Gender = txtGender.Text.Trim(),
                    Age = int.Parse(txtAge.Text.Trim())
                };

                _grade.AddStudent(student);
                rtbOutput.AppendText($"[{DateTime.Now:HH:mm:ss}] 添加成功：{student.Name}\n");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "操作失败", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
    }
}
