using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验四_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            cout.Text = "欢迎访问学生管理系统!";
        }



        private void button2_Click(object sender, EventArgs e)
        {



            string no = textBox2.Text;

            string name = textBox1.Text;

            string sex = textBox3.Text;

            double score = Convert.ToDouble(textBox4.Text);
            Stu stu = new Stu(no, name, sex, score);
            cout.Text = string.Format("学号：{0}\n姓名：{1}\n性别：{2}\n期末分数：{3}", stu.No, stu.Name, stu.Sex, stu.Score);
        }


    }
}
