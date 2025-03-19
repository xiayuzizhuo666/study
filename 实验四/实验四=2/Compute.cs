using System;
using System.Collections.Generic;
using System.Text;

namespace 实验四_2
{
    class Compute
    {
        private double num1;
        private double num2;

        public double Num1 {
            get;
            set;
        }
        public double Num2 {
            get;
            set;
        }

        public double Vul()
        {
            return this.Num1 * this.Num2;
        }
        public string Cel()
        {
            if (this.Num2 == 0)
            {
                return "输入数据有误";
            }
            else
            {
                return Convert.ToString(this.Num1 / this.Num2);
            }
        }
    }
}
