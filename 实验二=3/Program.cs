using System;

namespace 实验二_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("请输出一个数字");
            int x = Convert.ToInt32 (Console.ReadLine());

            Console.Write("请输出一个数字");
            int y = Convert.ToInt32(Console.ReadLine());

            Console.Write("请输出你要执行的操作(+ - * /)");
            string flag = Console.ReadLine();
            switch (flag) {
                case "+":
                    Console.WriteLine($"{ x}+{ y}={x + y}");//加法
                    break;
                case "-":
                    Console.WriteLine($"{ x}-{ y}={x - y}");//减法
                    break;
                case "*":
                    Console.WriteLine($"{ x}*{ y}={x * y}");//乘法
                    break;
                case "/":
                    if (y != 0)
                    {
                        Console.WriteLine($"{ x}/{ y}={x / y}");
                    }//除法
                    else 
                    {
                        Console.WriteLine("非法输入！");//零不能做分母
                    }
                    break;
                default:
                    Console.WriteLine("非法的运算符！");
                    break;

            }

        }
    }
}
