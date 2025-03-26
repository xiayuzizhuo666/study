using System;

namespace 实验五_1
{
    class Program
    {
        private static int Main(string[] args)
        {
            Console.WriteLine("比较两个数（请输入“1”）");
            Console.WriteLine("比较三个数（请输入“2”）");
            Console.WriteLine("比较任意数（请输入“3”）");
            while (true)
            {
                Console.WriteLine("请选择模式：");
                int sole = Convert.ToInt32(Console.ReadLine());
                if (sole == 1)
                {
                    Console.WriteLine("开始比较，请输入两个数");
                    int num1 = Convert.ToInt32(Console.ReadLine());
                    int num2 = Convert.ToInt32(Console.ReadLine());
                    FindNumber fd = new FindNumber();
                    int max = fd.GetMax(num1, num2);
                    Console.WriteLine("最大值是" + max);
                }
                if (sole == 2)
                {
                    Console.WriteLine("开始比较，请输入三个数");
                    int num1 = Convert.ToInt32(Console.ReadLine());
                    int num2 = Convert.ToInt32(Console.ReadLine());
                    int num3 = Convert.ToInt32(Console.ReadLine());
                    FindNumber fd = new FindNumber();
                    int max = fd.GetMax(num1, num2, num3);
                    Console.WriteLine("最大值是" + max);

                }
                if (sole == 3)
                {
                    Console.WriteLine("请输入需要比较多少个数？");
                    int n = Convert.ToInt32(Console.ReadLine());
                    Console.WriteLine("开始比较，请输入" + n + "个数：");

                    int[] arr = new int[n]; 
                    for (int i = 0; i < n; i++) 
                    {
                        Console.Write($"第{i + 1}个数: ");
                        arr[i] = Convert.ToInt32(Console.ReadLine());
                    }

                    FindNumber fd = new FindNumber();
                    int max = fd.GetMax(arr);
                    Console.WriteLine("最大值是：" + max);
                }

            }
        }

    }
}
