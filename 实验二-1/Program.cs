using System;

namespace 实验二
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.Write("请输入一个数字：");//输出x
            double x= Convert.ToDouble( Console.ReadLine());

            Console.Write("请输入一个数字：");//输出y
            double y = Convert.ToDouble(Console.ReadLine());

            double xy = x + y;//求和

            Console.WriteLine("sum =" + xy);
            Console.ReadKey();
        }
    }
}
