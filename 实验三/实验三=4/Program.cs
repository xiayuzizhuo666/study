using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        Console.WriteLine("请输入10个整数（用空格或逗号分隔）：");

        while (true)
        {
            try
            {
                // 读取输入并分割成字符串数组
                string[] inputs = Console.ReadLine()
                    .Split(new[] { ' ', ',' }, StringSplitOptions.RemoveEmptyEntries);

                // 验证输入数量
                if (inputs.Length != 10)
                {
                    Console.WriteLine("错误：必须输入正好10个数字，请重新输入：");
                    continue;
                }

                // 转换并验证数字
                List<int> numbers = new List<int>();
                foreach (string input in inputs)
                {
                    if (int.TryParse(input, out int num))
                    {
                        numbers.Add(num);
                    }
                    else
                    {
                        Console.WriteLine($"错误：'{input}' 不是有效整数，请重新输入全部数字：");
                        numbers.Clear();
                        break;
                    }
                }

                // 处理有效输入
                if (numbers.Count == 10)
                {
                    // 计算统计值
                    int max = numbers.Max();
                    int min = numbers.Min();
                    int sum = numbers.Sum();
                    double average = Math.Round(numbers.Average(), 2);
                    
                    // 输出结果
                    Console.WriteLine("\n统计结果：");
                    Console.WriteLine($"最大值：{max}");
                    Console.WriteLine($"最小值：{min}");
                    Console.WriteLine($"总和：{sum}");
                    Console.WriteLine($"平均值：{average.ToString("0.00")}");
                    break;
                }
            }
            catch (OverflowException)
            {
                Console.WriteLine("错误：输入的数字超出整数范围（-2,147,483,648 到 2,147,483,647），请重新输入：");
            }
        }

        Console.WriteLine("\n按任意键退出...");
        Console.ReadKey();
    }
}
