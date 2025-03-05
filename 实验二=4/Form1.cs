using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验二_4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void panduan_Click(object sender, EventArgs e)
        {
            if (double.TryParse(fenshu.Text, out double grade))
            {
                int flag = (int)grade / 10;
                switch (flag)
                {
                    case 10:
                    case 9:
                        shuchu.Text = "优秀";
                        break;
                    case 8:
                    case 7:
                        shuchu.Text = "优秀";
                        break;
                    case 6:
                        shuchu.Text = "合格";
                        break;
                    default:
                        shuchu.Text = "不合格";
                        break;
                }
            }
            else 
            {
                shuchu.Text = "非法输入！";
            }


        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
