using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验三_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        const int Max = 5;
        static int num = 0;
        int[] array1 = new int[Max];
        int[] array2 = new int[Max];
        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            array1[num] = Convert.ToInt32(textBox1.Text);
            label2.Text += string.Format("\n添加第{0}个数组元素成功，元素值是：{1}",num, textBox1.Text);
            num++;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Array.Copy(array1, array2, num);
            label2.Text = "数组array2的原始元素分别是：";
            for (int i = 0; i < array2.Length; i++)
            {
                label2.Text += "" + array2[i];
            }
            label2.Text += "\n数组array2排序后的元素分别是：”";
            Array.Sort(array2);
            for (int i = 0; i < array2.Length; i++)
            {
                label2.Text = "" + array2[i];
            }
            label2.Text += "\n数组array2元素反转：";
            Array.Reverse(array2);
            for (int i = 0; i < array2.Length; i++)
            {
                label2.Text += "" + array2[i];
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int index = Array.IndexOf(array2, Convert.ToInt32(textBox1));
            if (index == -1)
            {
                label2.Text += "\n数组array2中不存在要查找的元素：" + textBox1.Text;

            }
            else
            {
                label2.Text += string.Format("\n{0}是数组array2反转后的第{1}元素", textBox1.Text,index);
            }
        }
    }
}
