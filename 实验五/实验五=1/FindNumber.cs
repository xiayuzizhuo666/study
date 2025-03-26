using System;
using System.Collections.Generic;
using System.Text;

namespace 实验五_1
{
    class FindNumber
    {
        public int GetMax(int num1, int num2)
        {
            return num1 > num2 ? num1 : num2;
        }
        public int GetMax(int num1, int num2,int num3)
        {
            int max = num1;
            if (num2 > max)
            {
                max = num2;
            }
            if (num3 > max)
            {
                max = num3;
            }
            return max;
        }
        public int GetMax(int[] arr)
        {
            int max = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                if (max < arr[i])
                {
                    max = arr[i];
                }
            }
            return max;
        }
    }
}
