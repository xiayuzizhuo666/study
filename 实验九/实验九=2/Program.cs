using System;
using System.Collections.Generic;
using System.Linq;

namespace 实验九_2
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> num = new List<int>() { };
            num.Add(Convert.ToInt32(Console.ReadLine()));
            num.Add(Convert.ToInt32(Console.ReadLine()));
            num.Add(Convert.ToInt32(Console.ReadLine()));
            num.Add(Convert.ToInt32(Console.ReadLine()));//可用循环输入
            int max = num.Max();
            int min = num.Min();
            /*for (int i = 0; i < num.Count; i++)
            {
                if (max < num[i])
                {
                    max = num[i];
                }
                if (min > num[i])
                {
                    min = num[i];
                }
            }*/
            Console.WriteLine("输入的数组中，最大值是{0}，最小值是{1}", max, min);
            Console.ReadKey();
        }
    }
}
