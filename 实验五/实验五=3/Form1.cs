using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验五_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void GetMessage_Click(object sender, EventArgs e)
        {
            Student stu = new Student(stuNo.Text,stuName.Text, stuSex.Text,Convert.ToInt32(stuAge.Text), stuSpecialty.Text);
            count.Text = stu.GetMessage();

        }
    }
}
