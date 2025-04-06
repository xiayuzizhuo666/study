using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验六_3
{
    public partial class Form1 : Form
    {
        private readonly Time _timer = new Time();

        public Form1()
        {
            InitializeComponent();
            UpdateTimeDisplay();
        }

        private void UpdateTimeDisplay()
        {
            hour.Text = _timer.Hour.ToString("D2");
            minute.Text = _timer.Minute.ToString("D2");
            second.Text = _timer.Second.ToString("D2");
        }

        private void buttonadd_Click(object sender, System.EventArgs e)
        {
            _timer.AddSecond();
            UpdateTimeDisplay();
        }
    }
}