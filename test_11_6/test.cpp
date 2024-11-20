#include <iostream>
#include <stdio.h>

using namespace std;

//int main()
//{
//    int a[100], i, j, t, n;
//    scanf_s("%d", &n); // 修正输入格式
//    for (i = 0; i < n; i++) // 从0开始
//        scanf_s("%d", &a[i]); // 修正输入数组索引
//
//    // 冒泡排序
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - 1 - i; j++) // 每次减少已排序的元素
//        {
//            if (a[j] < a[j + 1])
//            {
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//        printf_s("%d ", a[i]); // 考虑格式化输出
//
//    system("pause");
//    return 0;
//}

int a[101], n;

void quicksort(int left, int right)
{
    int i, j, t, temp;
    if (left >= right) // 这个条件应为大于等于
        return;

    temp = a[left];
    i = left;
    j = right;
    while (i < j)
    {
        while (a[j] >= temp && i < j)
        {
            j--;
        }
        while (a[i] <= temp && i < j)
        {
            i++;
        }
        if (i < j) // 交换
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i] = temp;
    quicksort(left, i - 1);
    quicksort(i + 1, right);
}

int main()
{
    int i;
    printf("请输入元素个数: ");
    scanf_s("%d", &n); // 输入数字个数

    printf("请输入 %d 个数字:\n", n);
    for (i = 0; i < n; i++) // 边界改为小于 n
    {
        scanf_s("%d", &a[i]);
    }

    quicksort(0, n - 1); // 在所有数字输入完成后调用排序

    printf("排序后的结果是:\n");
    for (i = 0; i < n; i++) // 输出循环同样应修改
    {
        printf_s("%d ", a[i]); // 输出后加空格
    }

    system("pause"); 
    return 0;
}