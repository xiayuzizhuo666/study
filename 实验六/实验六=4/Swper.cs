using System;
using System.Collections.Generic;
using System.Text;

namespace 实验六_4
{
    class Swper
    {
        public string Swap(ref int x, ref int y)
        {
            string str = "";
            str += string.Format("\n被调用方法：交换前x = {0}, y = {1}", x, y);
            int temp = x;
            x = y;   
            y = temp; 

            str += string.Format("\n调用方法：交换后x = {0}, y = {1}", x, y);
            return str;
        }
    }
}