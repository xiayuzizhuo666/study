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

namespace 实验三_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void btnCheck_Click(object sender, EventArgs e)
        {
            string email = txtEmail.Text;
            Regex rgx = new Regex(@"^(\w)+(\.\w+)*@(\w)+((\.\w+)+)$");
            if (rgx.IsMatch(email))
            {
                lblShow.Text = "输入：" + txtEmail.Text + "邮箱格式正确！";
            }
            else
            {
                lblShow.Text = "输出：" + txtEmail.Text + "邮箱格式不正确";
            }
        }
    }
}
