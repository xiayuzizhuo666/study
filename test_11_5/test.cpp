#include <iostream>

// �������������ڼ���һ�������ڲ�ͬ�����µ�1�ĸ���
int func(int num, int base)
{
    int sum = 0; // ��ʼ��1�ĸ���Ϊ0
    while (num > 0) // �����ִ���0ʱѭ��
    {
        sum += num % base; // ���㵱ǰ���� �����λ��1
        num /= base; // ȥ����ǰ���� �µ����λ
    }
    return sum; // ����1���ܸ���
}

int main()
{
    int count = 0; // ��ʼ��������Ϊ0
    for (int i = 1; i < 1000000000; i++) // ��1ѭ����10�ڣ�������10�ڣ�
    {
        if (func(i, 2) == func(i, 8)) // ������ֵĶ����Ʊ�ʾ�Ͱ˽��Ʊ�ʾ��1�ĸ�����ͬ
        {
            count++; // ��������1
            if (count == 23) // ����ҵ��˵�23������������
            {
                std::cout << i << std::endl; // ����������
                break; 
            }
        }
    }
    return 0; 
}

