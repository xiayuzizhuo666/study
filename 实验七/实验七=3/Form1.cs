using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace 实验七_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnPrimary_Click(object sender, EventArgs e)
        {
            try
            {
                var student = new PrimaryStudent(
                    txtName.Text,
                    int.Parse(txtAge.Text),
                    double.Parse(txtChinese.Text),
                    double.Parse(txtMath.Text)
                );
                ShowResult(student);
            }
            catch (Exception ex)
            {
                MessageBox.Show("输入数据有误！");
            }
        }

        private void btnMiddle_Click(object sender, EventArgs e)
        {
            try
            {
                var student = new MiddleStudent(
                    txtName.Text,
                    int.Parse(txtAge.Text),
                    double.Parse(txtChinese.Text),
                    double.Parse(txtMath.Text),
                    double.Parse(txtEnglish.Text)
                );
                ShowResult(student);
            }
            catch (Exception ex)
            {
                MessageBox.Show("输入数据有误！");
            }
        }

        private void btnCollege_Click(object sender, EventArgs e)
        {
            try
            {
                var student = new CollegeStudent(
                    txtName.Text,
                    int.Parse(txtAge.Text),
                    double.Parse(txtChinese.Text),
                    double.Parse(txtMath.Text)
                );
                ShowResult(student);
            }
            catch (Exception ex)
            {
                MessageBox.Show("输入数据有误！");
            }
        }

        private void ShowResult(Student student)
        {
            txtOutput.AppendText($"总人数：{Student.Count}\r\n类型：{student.StudentType}\r\n姓名：{student.Name}\r\n平均分：{student.CalculateAverage():F2}\r\n\r\n");
        }
    }

    public abstract class Student
    {
        private static int count;
        public static int Count => count;

        private string name;
        private int age;

        public string Name => name;
        public int Age => age;
        public abstract string StudentType { get; }

        protected Student(string name, int age)
        {
            this.name = name;
            this.age = age;
            count++;
        }

        public abstract double CalculateAverage();
    }

    public class PrimaryStudent : Student
    {
        private double chinese;
        private double math;

        public override string StudentType => "小学生";

        public PrimaryStudent(string name, int age, double chinese, double math) : base(name, age)
        {
            this.chinese = chinese;
            this.math = math;
        }

        public override double CalculateAverage() => (chinese + math) / 2;
    }

    public class MiddleStudent : Student
    {
        private double chinese;
        private double math;
        private double english;

        public override string StudentType => "中学生";

        public MiddleStudent(string name, int age, double chinese, double math, double english) : base(name, age)
        {
            this.chinese = chinese;
            this.math = math;
            this.english = english;
        }

        public override double CalculateAverage() => (chinese + math + english) / 3;
    }

    public class CollegeStudent : Student
    {
        private double required;
        private double elective;

        public override string StudentType => "大学生";

        public CollegeStudent(string name, int age, double required, double elective) : base(name, age)
        {
            this.required = required;
            this.elective = elective;
        }

        public override double CalculateAverage() => (required + elective) / 2;
    }
}