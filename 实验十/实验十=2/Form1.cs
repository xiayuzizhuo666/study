using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验十_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int[] num = new int[10];
        delegate bool Compare(int x, int y);
        void SortArray(Compare compare)
        {
            for (int i = 0; i < num.Length; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    if (compare(num[i], num[j]))
                    {
                        int temp = num[i];
                        num[i] = num[j];
                        num[j] = temp;
                    }
                }
            }
        }
        bool Ascending(int x, int y) {
            return x < y;
        }
        bool Descending(int x, int y) {
            return x > y;
        }
        public void display() {
            txtTarget.Text = "";
            foreach (int array in num)
            {
                txtTarget.Text += array + "\r\n";
            }
        }

        private void btnCrateArray_Click(object sender, EventArgs e)
        {
            txtSource.Text = "";
            Random rm = new Random();
            for (int i = 0; i < num.Length; i++) {
                num[i] = rm.Next(10, 100);
                txtSource.Text += num[i] + "\r\n";

            }
        }

        private void btnAscSort_Click(object sender, EventArgs e)
        {
            SortArray(new Compare(Ascending));
            display();
        }

        private void btnDescSort_Click(object sender, EventArgs e)
        {
            SortArray(new Compare(Descending));
            display();
        }
    }
}
