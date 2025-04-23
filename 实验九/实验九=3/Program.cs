using System;
using System.Collections.Generic;

namespace 实验九_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Dictionary<int, string> myDic = new Dictionary<int, string>();
            myDic.Add(Convert.ToInt32(Console.ReadLine()), Convert.ToString(Console.ReadLine()));
            myDic.Add(Convert.ToInt32(Console.ReadLine()), Convert.ToString(Console.ReadLine()));
            myDic.Add(Convert.ToInt32(Console.ReadLine()), Convert.ToString(Console.ReadLine()));
            foreach (KeyValuePair<int, string> kvp in myDic)
            {
                Console.WriteLine("Key = {0},Value = {1}", kvp.Key, kvp.Value);
            }
        }
    }
}
