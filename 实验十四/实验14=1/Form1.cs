using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验14_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            // 初始化照片点击事件
            this.pictureBox1.DoubleClick += (sender, e) =>
            {
                OpenFileDialog dialog = new OpenFileDialog
                {
                    Filter = "图片文件|*.jpg;*.png;*.bmp"
                };
                if (dialog.ShowDialog() == DialogResult.OK)
                {
                    pictureBox1.Image = Image.FromFile(dialog.FileName);
                }
            };
        }
    }
}
