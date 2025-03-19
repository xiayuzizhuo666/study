using System;

namespace 实验四_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("欢迎访问学生管理系统!");

            Console.WriteLine("请输入你的学号:");
            string no = Console.ReadLine();
            Console.WriteLine("请输入你的姓名:");
            string name = Console.ReadLine();
            Console.WriteLine("请输入你的性别;");
            string sex = Console.ReadLine();
            Console.WriteLine("请输入你的期末分数:");
            double score = Convert.ToDouble(Console.ReadLine());
            Stu stu = new Stu(no, name, sex, score);
            Console.WriteLine("学号：{0}  姓名：{1}   性别：{2}    期末分数：{3}" ,stu.No, stu.Name, stu.Sex, stu.Score);
            Console.WriteLine("存储成功！退出程序！");
            Console.ReadKey();
        }
    }
}
