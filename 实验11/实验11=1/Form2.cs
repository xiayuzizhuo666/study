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
    public partial class Form2 : Form
    {
        public Form2(string myName, string myPwd)
        {
            InitializeComponent();
            InitializeDisplaySettings(myName, myPwd);
        }

        private void InitializeDisplaySettings(string name, string pwd)
        {
            this.Text = "注册结果";
            this.Size = new Size(300, 200);
            this.StartPosition = FormStartPosition.CenterParent;

            // 创建显示控件
            var lblShow = new Label
            {
                AutoSize = false,
                Size = new Size(250, 100),
                Location = new Point(20, 20),
                Text = $"注册信息：\n用户名：{name}\n密码：{pwd}",
                Font = new Font("微软雅黑", 10),
                ForeColor = Color.DimGray
            };

            Controls.Add(lblShow);
        }
    }
}
