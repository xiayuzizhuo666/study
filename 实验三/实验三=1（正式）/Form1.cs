using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验三_1_正式_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button_Click(object sender, EventArgs e)
        {
            string userName = textBox1.Text;
            Regex regex = new Regex(@"^[A-Za-z]{6,}$");
            if (regex.IsMatch(userName))
            {
                MessageBox.Show("用户名格式正确！");
            }
            else
            {
                MessageBox.Show("用户名格式错误！");
            }
            return;

            string email = textBox2.Text;
            regex = new Regex(@"^(\w)+(\.\w+)*@(\w)+((\.\w+)+)$");
            if (regex.IsMatch(email))
            {
                MessageBox.Show("邮箱格式正确！");
            }
            else
            {
                MessageBox.Show("邮箱格式错误！");
            }
            return;

            string userPwd = textBox3.Text;
            if (userPwd.Length >= 6 && userPwd.Length <= 14)
            {
                MessageBox.Show("密码格式正确！密码长度符合要求！");
            }
            else
            {
                MessageBox.Show("密码格式错误！密码长度符合不要求！");
            }
            return;

            if (textBox3.Text == textBox4.Text)
            {
                MessageBox.Show("两次输入的密码一致！");
            }
            else
            {
                MessageBox.Show("两次输入的密码不一致！");
                return;
            }
        }
    }
}
