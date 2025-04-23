using System;
using System.Collections.Generic;

namespace 实验九_1
{
    class Program
    {
        static void Main(string[] args)
        {
            List<string> list = new List<string>() { };
            list.Add("数学");
            list.Add("语文");
            list.Add("英语");
            foreach (string st in list)
            {
                Console.WriteLine("{0}\n", st.ToString());
            }
        }
    }
}
