#include <iostream>
#include <stdio.h>

using namespace std;

//int main()
//{
//    int a[100], i, j, t, n;
//    scanf_s("%d", &n); // ���������ʽ
//    for (i = 0; i < n; i++) // ��0��ʼ
//        scanf_s("%d", &a[i]); // ����������������
//
//    // ð������
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - 1 - i; j++) // ÿ�μ����������Ԫ��
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
//        printf_s("%d ", a[i]); // ���Ǹ�ʽ�����
//
//    system("pause");
//    return 0;
//}

int a[101], n;

void quicksort(int left, int right)
{
    int i, j, t, temp;
    if (left >= right) // �������ӦΪ���ڵ���
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
        if (i < j) // ����
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
    printf("������Ԫ�ظ���: ");
    scanf_s("%d", &n); // �������ָ���

    printf("������ %d ������:\n", n);
    for (i = 0; i < n; i++) // �߽��ΪС�� n
    {
        scanf_s("%d", &a[i]);
    }

    quicksort(0, n - 1); // ����������������ɺ��������

    printf("�����Ľ����:\n");
    for (i = 0; i < n; i++) // ���ѭ��ͬ��Ӧ�޸�
    {
        printf_s("%d ", a[i]); // �����ӿո�
    }

    system("pause"); 
    return 0;
}