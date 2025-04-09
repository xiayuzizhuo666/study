using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("加法计算器");
        Console.WriteLine("------------");

        // 读取用户输入
        Console.Write("请输入被加数：");
        int num1 = int.Parse(Console.ReadLine());

        Console.Write("请输入加数：");
        int num2 = int.Parse(Console.ReadLine());

        // 创建Adder实例
        Adder adder = new Adder(num1, num2);

        // 计算并显示结果
        Console.WriteLine($"\n计算结果：{adder.Number1} + {adder.Number2} = {adder.Sum()}");
    }
}