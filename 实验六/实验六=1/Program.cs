using System;

namespace 实验六_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rd = new Random();
            int num = rd.Next(0, 10);
            int count = 3;
            Console.WriteLine("现在你有{0}次机会猜0到9之间的数", count);

            while (count > 0)
            {
                Console.Write("请输入猜测：");
                string input = Console.ReadLine();

                if (!int.TryParse(input, out int guess))
                {
                    Console.WriteLine("错误：请输入整数！");
                    continue;
                }

                if (guess == num)
                {
                    Console.WriteLine("恭喜！答案是{0}", num);
                    break;
                }
                else
                {
                    count--;
                    if (count == 0)
                    {
                        Console.WriteLine("机会用完！答案是{0}", num);
                        break;
                    }
                    else if (guess > num)
                    {
                        Console.WriteLine("猜大了，剩余{0}次", count);
                    }
                    else
                    {
                        Console.WriteLine("猜小了，剩余{0}次", count);
                    }
                }
            }
            Console.ReadKey();  
        }
    }
}