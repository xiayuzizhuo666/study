#include <iostream>
#include <stdio.h>
using namespace std;

//int main()
//{
//    int a[11] = { 0 };  // 初始化数组为0
//    int t;
//
//    // 读取5个数字
//    for (int i = 0; i < 5; i++) // 外部循环次数应为5
//    {
//        scanf_s("%d", &t);
//        if (t >= 0 && t <= 10) { // 确保输入在0到10之间
//            a[t]++;
//        }
//        else {
//            cout << "输入错误，请输入0到10之间的数字。" << endl;
//            i--; // 如果输入错误，保持循环次数
//        }
//    }
//
//    // 输出结果
//    for (int i = 0; i <= 10; i++)
//    {
//        for (int j = 0; j < a[i]; j++) // 从0到a[i]的次数
//        {
//            printf("%d", i);
//        }
//    }
//
//    system("pause"); 
//    return 0;
//}

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int book[1001] = { 0 }; // 初始化数组为0
    int j, t, n;

    printf("请输入你想输入的数字个数: ");
    scanf_s("%d", &n); // 读取 n 只需一次

    // 读取 n 个数字
    for (int i = 0; i < n; i++) // 外层循环应使用 n
    {
        scanf_s("%d", &t);
        if (t >= 0 && t <= 1000) // 确保输入在0到1000之间
        {
            book[t]++;
        }
        else
        {
            cout << "输入错误，请输入0到1000之间的数字。" << endl;
            i--; // 如果输入错误，保持循环次数
        }
    }

    // 输出结果
    for (int i = 1000; i >= 0; i--)
    {
        for (j = 0; j < book[i]; j++) // 这里是 j < book[i]
        {
            printf_s("%d ", i);
        }
    }

    system("pause"); // 更正拼写
    return 0;
}
