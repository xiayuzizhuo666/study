using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验11_1
{
    public partial class Form1 : Form
    {
        private string randomCode;

        public Form1()
        {
            InitializeComponent();
            InitializeFormSettings();
            this.Load += Form1_Load;
            button2.Click += button2_Click;
        }


        private void InitializeFormSettings()
        {

            this.Text = "用户注册";
            this.StartPosition = FormStartPosition.CenterScreen;
            this.BackColor = Color.FromArgb(240, 240, 240);  
            this.FormBorderStyle = FormBorderStyle.FixedDialog;  


            pwd.UseSystemPasswordChar = true;
            confrimpwd.UseSystemPasswordChar = true;
            pwd.PasswordChar = '●';
            confrimpwd.PasswordChar = '●';


            lblshow.ForeColor = Color.Orange;  
            button1.BackColor = Color.FromArgb(0, 122, 204);  
            button1.ForeColor = Color.White;
            button1.FlatStyle = FlatStyle.Flat;  


            GenerateRandomCode();
        }

        // 生成随机验证码
        private void GenerateRandomCode()
        {
            const string chars = "ABCDEFGHJKLMNPQRSTUVWXYZ23456789";
            var random = new Random(Guid.NewGuid().GetHashCode());
            randomCode = new string(Enumerable.Repeat(chars, 5)
              .Select(s => s[random.Next(s.Length)]).ToArray());
            lblshow.Text = randomCode;
        }

        // 注册
        private void button1_Click(object sender, EventArgs e)
        {
            if (!ValidateInputs()) return;

            MessageBox.Show($"用户 {name.Text} 注册成功！",
                          "注册完成",
                          MessageBoxButtons.OK,
                          MessageBoxIcon.Information);

            ShowRegistrationDetails();
            ResetForm();
        }

        // 输入验证
        private bool ValidateInputs()
        {
            // 用户名验证
            if (string.IsNullOrWhiteSpace(name.Text))
            {
                ShowWarning("请输入用户名", name);
                return false;
            }

            // 密码长度验证
            if (pwd.Text.Length < 6)
            {
                ShowWarning("密码长度至少6位", pwd);
                return false;
            }

            // 密码一致验证
            if (pwd.Text != confrimpwd.Text)
            {
                ShowError("两次输入的密码不一致", confrimpwd);
                return false;
            }

            // 验证码校验
            if (textBox4.Text != randomCode)
            {
                ShowError("验证码错误，请重新输入", textBox4);
                textBox4.Clear();
                GenerateRandomCode();
                return false;
            }

            return true;
        }

        // 警告
        private void ShowWarning(string message, Control focusControl)
        {
            MessageBox.Show(message, "提示",
                          MessageBoxButtons.OK,
                          MessageBoxIcon.Warning);
            focusControl.Focus();
        }

        // 错误提示
        private void ShowError(string message, Control focusControl)
        {
            MessageBox.Show(message, "错误",
                          MessageBoxButtons.OK,
                          MessageBoxIcon.Error);
            confrimpwd.SelectAll();
            focusControl.Focus();
        }

        // 注册结果
        private void ShowRegistrationDetails()
        {
            using (var f2 = new Form2(name.Text, pwd.Text))
            {
                f2.ShowDialog();
            }
        }

        // 重置
        private void ResetForm()
        {
            name.Clear();
            pwd.Clear();
            confrimpwd.Clear();
            textBox4.Clear();
            GenerateRandomCode();
            name.Focus();
        }

        // 取消按钮
        private void button2_Click(object sender, EventArgs e)
        {
            ResetForm();
            this.Close();
        }

        // 窗体加载
        private void Form1_Load(object sender, EventArgs e)
        {
        }

        // 验证码双击
        private void lblshow_DoubleClick(object sender, EventArgs e)
        {
            GenerateRandomCode();
        }
    }
}