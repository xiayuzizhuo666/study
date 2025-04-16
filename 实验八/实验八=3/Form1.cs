using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace 实验八_3
{
    // 学生基类（抽象类）
    public abstract class Student
    {
        public string StuNo { get; set; }
        public string StuName { get; set; }
        public string StuSex { get; set; }
        public int StuAge { get; set; }

        public abstract string StudyBehavior();
    }

    // 小学生类
    public class Pupil : Student
    {
        public override string StudyBehavior() => "正在学习语文、数学、英语";
    }

    // 中学生类
    public class MiddleStudent : Student
    {
        public override string StudyBehavior() => "正在备战中考：全科复习";
    }

    // 大学生类
    public class CollegeStudent : Student
    {
        public override string StudyBehavior() => "正在进行专业课题研究";
    }

    // 泛型班级类
    public class Grade<T> where T : Student
    {
        private readonly List<T> _students = new List<T>();

        public void AddStudent(T student)
        {
            if (_students.Any(s => s.StuNo == student.StuNo))
                throw new ArgumentException($"学号 {student.StuNo} 已存在");

            _students.Add(student);
        }

        public string GetAllInfo()
        {
            var sb = new StringBuilder();
            foreach (var s in _students)
            {
                sb.AppendLine($"【{s.GetType().Name}】");
                sb.AppendLine($"学号：{s.StuNo}");
                sb.AppendLine($"姓名：{s.StuName}");
                sb.AppendLine($"性别：{s.StuSex}");
                sb.AppendLine($"年龄：{s.StuAge}");
                sb.AppendLine($"学习状态：{s.StudyBehavior()}");
                sb.AppendLine("----------------------");
            }
            return sb.ToString();
        }
    }

    public partial class Form1 : Form
    {
        private readonly Grade<Student> _grade = new Grade<Student>();

        public Form1()
        {
            InitializeComponent();
            // 绑定按钮事件
            btnAddPrimarySchoolStudent.Click += BtnPupil_Click;
            btnAddMiddleSchoolStudent.Click += BtnMiddle_Click;
            btnAddUniversityStudent.Click += BtnCollege_Click;
            btnDisplay.Click += BtnShowAll_Click;
        }

        private void AddStudent<T>(TextBox no, TextBox name, TextBox sex, TextBox age) where T : Student, new()
        {
            try
            {
                var student = new T
                {
                    StuNo = no.Text.Trim(),
                    StuName = name.Text.Trim(),
                    StuSex = sex.Text.Trim(),
                    StuAge = int.Parse(age.Text.Trim())
                };

                _grade.AddStudent(student);
                rtbOutput.AppendText($"[{DateTime.Now:HH:mm:ss}] 添加成功：{student.StuName}\n");
            }
            catch (FormatException)
            {
                MessageBox.Show("年龄必须为有效数字", "输入错误", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            catch (ArgumentException ex)
            {
                MessageBox.Show(ex.Message, "数据错误", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            catch (Exception ex)
            {
                MessageBox.Show($"系统错误：{ex.Message}", "操作失败", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        #region 事件处理方法
        private void BtnPupil_Click(object sender, EventArgs e)
        {
            AddStudent<Pupil>(txtStudentId, txtName, txtGender, txtAge);
        }

        private void BtnMiddle_Click(object sender, EventArgs e)
        {
            AddStudent<MiddleStudent>(txtStudentId, txtName, txtGender, txtAge);
        }

        private void BtnCollege_Click(object sender, EventArgs e)
        {
            AddStudent<CollegeStudent>(txtStudentId, txtName, txtGender, txtAge);
        }

        private void BtnShowAll_Click(object sender, EventArgs e)
        {
            rtbOutput.Text = _grade.GetAllInfo();
        }
        #endregion
    }
}