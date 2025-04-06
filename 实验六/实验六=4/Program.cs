using System;

namespace 实验六_4
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 0;
            int y = 0;
            Console.WriteLine("请输入两个数进行交换");
            Console.Write("x = ");
            x = Convert.ToInt32(Console.ReadLine());
            Console.Write("y = ");
            y = Convert.ToInt32(Console.ReadLine());

            Swper sp = new Swper();
            string result = sp.Swap(ref x, ref y); // 获取返回的字符串
            Console.WriteLine(result);            // 输出交换结果

            Console.ReadKey();
        }
    }
}