#include <iostream>
#include <stdio.h>
using namespace std;

//int main()
//{
//    int a[11] = { 0 };  // ��ʼ������Ϊ0
//    int t;
//
//    // ��ȡ5������
//    for (int i = 0; i < 5; i++) // �ⲿѭ������ӦΪ5
//    {
//        scanf_s("%d", &t);
//        if (t >= 0 && t <= 10) { // ȷ��������0��10֮��
//            a[t]++;
//        }
//        else {
//            cout << "�������������0��10֮������֡�" << endl;
//            i--; // ���������󣬱���ѭ������
//        }
//    }
//
//    // ������
//    for (int i = 0; i <= 10; i++)
//    {
//        for (int j = 0; j < a[i]; j++) // ��0��a[i]�Ĵ���
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
    int book[1001] = { 0 }; // ��ʼ������Ϊ0
    int j, t, n;

    printf("������������������ָ���: ");
    scanf_s("%d", &n); // ��ȡ n ֻ��һ��

    // ��ȡ n ������
    for (int i = 0; i < n; i++) // ���ѭ��Ӧʹ�� n
    {
        scanf_s("%d", &t);
        if (t >= 0 && t <= 1000) // ȷ��������0��1000֮��
        {
            book[t]++;
        }
        else
        {
            cout << "�������������0��1000֮������֡�" << endl;
            i--; // ���������󣬱���ѭ������
        }
    }

    // ������
    for (int i = 1000; i >= 0; i--)
    {
        for (j = 0; j < book[i]; j++) // ������ j < book[i]
        {
            printf_s("%d ", i);
        }
    }

    system("pause"); // ����ƴд
    return 0;
}
