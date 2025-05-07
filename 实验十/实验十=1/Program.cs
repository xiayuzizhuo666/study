using System;

namespace 实验十_1
{
    class Program
    {
        delegate int Add(int x, int y);

        static int sum(int x, int y)
        {
            return x + y;
        }

        static void Main(string[] args)
        {
            try
            {
                int num1, num2;
                Console.WriteLine("请输入第一个整数：");
                num1 = int.Parse(Console.ReadLine());
                Console.WriteLine("请输入第二个整数：");
                num2 = int.Parse(Console.ReadLine());

                Add add = new Add(sum);

                Console.WriteLine("sum = " + add(num1, num2));
                Console.ReadKey();

            }
            catch(Exception e) {
                Console.WriteLine(e.Message);
                Console.ReadKey();

            }
        }
    }
}
