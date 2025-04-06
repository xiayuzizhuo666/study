using System;
using System.Globalization;

namespace BirthdayCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime today = DateTime.Today;
            Console.WriteLine("请输入生日（格式：YYYY-MM-DD）：");

            // 读取并验证输入
            if (!DateTime.TryParseExact(Console.ReadLine(), "yyyy-MM-dd",
                CultureInfo.InvariantCulture, DateTimeStyles.None, out DateTime inputDate))
            {
                Console.WriteLine("格式错误，请按示例输入：2023-02-03");
                return;
            }

            try
            {
                // 生成今年生日对象
                DateTime thisYearBirthday = new DateTime(today.Year, inputDate.Month, inputDate.Day);

                // 计算下一次生日
                DateTime nextBirthday = thisYearBirthday < today ?
                    thisYearBirthday.AddYears(1) :
                    thisYearBirthday;

                // 计算日期差
                TimeSpan span = nextBirthday - today;

                // 结果输出
                if (span.Days == 0)
                {
                    Console.WriteLine("今天是你的生日！");
                }
                else if (nextBirthday.Year == today.Year)
                {
                    Console.WriteLine($"距离生日还有 {span.Days} 天");
                }
                else
                {
                    Console.WriteLine($"生日已过，下次还有 {span.Days} 天");
                }

                Console.WriteLine($"生日是 {GetChineseWeekday(nextBirthday.DayOfWeek)}");
            }
            catch (ArgumentOutOfRangeException)
            {
                Console.WriteLine("无效日期（如2月29日非闰年）");
            }
        }

        // 将星期枚举转为中文
        static string GetChineseWeekday(DayOfWeek day)
        {
            string[] weekdays = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };
            return weekdays[(int)day];
        }
    }
}