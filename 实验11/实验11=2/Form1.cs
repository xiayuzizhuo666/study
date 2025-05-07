using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验11_2
{
    public partial class Form1 : Form
    {
        private TextBox txtDisplay;
        private double firstNumber;
        private string currentOperator;
        private bool isNewInput;

        public Form1()
        {
            InitializeComponent();
            CreateCalculatorInterface();
        }

        private void CreateCalculatorInterface()
        {
            // 显示框
            txtDisplay = new TextBox
            {
                Location = new Point(12, 12),
                Size = new Size(216, 25),
                Font = new Font("Microsoft YaHei", 12F),
                ReadOnly = true,
                TextAlign = HorizontalAlignment.Right
            };

            // 按钮布局
            string[] buttonLabels = {
                "7", "8", "9", "/",
                "4", "5", "6", "*",
                "1", "2", "3", "-",
                "0", "C", "=", "+"
            };

            for (int i = 0; i < 16; i++)
            {
                var btn = new Button
                {
                    Text = buttonLabels[i],
                    Size = new Size(50, 50),
                    Location = new Point(12 + (i % 4) * 54, 50 + (i / 4) * 56),
                    Font = new Font("Microsoft YaHei", 10.5F),
                    Tag = buttonLabels[i]
                };


                if (buttonLabels[i] == "0") btn.Width = 104;
                if (buttonLabels[i] == "C") btn.BackColor = Color.LightCoral;
                if (buttonLabels[i] == "=") btn.BackColor = Color.LightSkyBlue;

                btn.Click += (sender, e) =>
                {
                    var button = (Button)sender;
                    ProcessButtonClick(button.Tag.ToString());
                };

                Controls.Add(btn);
            }

            Controls.Add(txtDisplay);
        }

        private void ProcessButtonClick(string value)
        {
            if (char.IsDigit(value[0]) || value == ".")
            {
                if (isNewInput)
                {
                    txtDisplay.Text = "";
                    isNewInput = false;
                }
                txtDisplay.Text += value;
            }
            else if (value == "C")
            {
                txtDisplay.Text = "";
                firstNumber = 0;
                currentOperator = "";
            }
            else if (value == "=")
            {
                CalculateResult();
                isNewInput = true;
            }
            else  // 运算符
            {
                if (!string.IsNullOrEmpty(currentOperator))
                    CalculateResult();

                firstNumber = double.Parse(txtDisplay.Text);
                currentOperator = value;
                isNewInput = true;
            }
        }

        private void CalculateResult()
        {
            try
            {
                var secondNumber = double.Parse(txtDisplay.Text);
                switch (currentOperator)
                {
                    case "+": firstNumber += secondNumber; break;
                    case "-": firstNumber -= secondNumber; break;
                    case "*": firstNumber *= secondNumber; break;
                    case "/": firstNumber /= secondNumber; break;
                }
                txtDisplay.Text = firstNumber.ToString("G9");
            }
            catch (Exception ex)
            {
                MessageBox.Show($"计算错误: {ex.Message}", "错误",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            currentOperator = "";
        }
    }
}

