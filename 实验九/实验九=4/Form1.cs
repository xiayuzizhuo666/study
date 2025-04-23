using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验九_4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                ProcessInput();
            }
        }

        private void ProcessInput()
        {
            try
            {

                string[] strArray = textBox.Text.Split(new[] { ',' }, StringSplitOptions.RemoveEmptyEntries);


                int[] numArray = new int[strArray.Length];
                for (int i = 0; i < strArray.Length; i++)
                {
                    numArray[i] = Convert.ToInt32(strArray[i].Trim());
                }


                Array.Sort(numArray);


                count.Text = "排序结果：" + string.Join(", ", numArray);
            }
            catch (FormatException)
            {
                MessageBox.Show("输入包含非数字字符！请检查格式。", "输入错误", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            catch (OverflowException)
            {
                MessageBox.Show("存在超出整数范围的数字！", "数值溢出", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            catch (Exception ex)
            {
                MessageBox.Show($"发生未预期的错误：{ex.Message}", "系统错误", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void button_Click(object sender, EventArgs e)
        {
            ProcessInput();
        }
    }
    }

