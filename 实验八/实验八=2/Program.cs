using System;

namespace 实验八_2
{
    interface IComputer1
    {
        double Add(double a, double b);
    }

    interface IComputer2
    {
        //double Add();
        double Add(double a, double b, double c);
    }

    public class Computer : IComputer1, IComputer2
    {
        /*
        public double num1, num2, num3;

        public Computer(double a, double b, double c)
        {
            num1 = a;
            num2 = b;
            num3 = c;
        }
        */
        public double Add(double a, double b)
        {
            return a + b;
        }

        /*
        public double Add()
         {
             return num1 + num2 + num3;
         }
        */
        public double Add(double a, double b, double c)
        {
            return a + b + c;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Computer add1 = new Computer();
            Computer add2 = new Computer();

            Console.WriteLine("输入“4，5”");
            Console.WriteLine("两个数的和: " + add1.Add(4, 5));

            Console.WriteLine("输入“1，2，3”");
            Console.WriteLine("三个数的和: " + add2.Add(1,2,3));   
        }
    }
}
