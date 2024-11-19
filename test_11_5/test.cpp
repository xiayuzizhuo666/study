#include <iostream>

// 函数声明，用于计算一个数字在不同进制下的1的个数
int func(int num, int base)
{
    int sum = 0; // 初始化1的个数为0
    while (num > 0) // 当数字大于0时循环
    {
        sum += num % base; // 计算当前进制 下最低位的1
        num /= base; // 去掉当前进制 下的最低位
    }
    return sum; // 返回1的总个数
}

int main()
{
    int count = 0; // 初始化计数器为0
    for (int i = 1; i < 1000000000; i++) // 从1循环到10亿（不包括10亿）
    {
        if (func(i, 2) == func(i, 8)) // 如果数字的二进制表示和八进制表示中1的个数相同
        {
            count++; // 计数器加1
            if (count == 23) // 如果找到了第23个这样的数字
            {
                std::cout << i << std::endl; // 输出这个数字
                break; 
            }
        }
    }
    return 0; 
}

