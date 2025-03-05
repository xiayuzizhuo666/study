using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验二_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void panduan_Click(object sender, EventArgs e)
        {
            /*int year = Convert.ToInt32 (yearBox.Text);


            bool flag = false;//定义一个旗帜，判断是否为闰年
            if (year / 400 == 0 || year / 4 == 0 && year / 100 != 0)
            {
                flag = true;//更新旗帜，是闰年
                shuchu.Text = flag ? $"{ year}年是闰年" : $"{ year}年不是闰年";
            }
            else
            {
                shuchu.Text = flag ? $"{ year}年是闰年" : $"{ year}年不是闰年";
            }*/

            //判断是否为整数年份
            if (int.TryParse(yearBox.Text, out int year)){

                bool flag = (year % 400 == 0 || year / 4 == 0 && year / 100 != 0);
                shuchu.Text = flag ? $"{ year}年是闰年" : $"{ year}年不是闰年";
            }
            else {
                //如果是非法输出，比如字符串
                shuchu.Text = "你输出的不是年份";
            }

        }
    }
}
