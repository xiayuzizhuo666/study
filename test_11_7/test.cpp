#include <iostream>
using namespace std;

int main()
{
    int k;
    double Sn = 0.0; // ��ʼ����
    cout << "������һ�������� k (һ����1��15֮��): ";
    cin >> k;

    // ����Χ��飨��ѡ��
    if (k < 1 || k > 15) {
        cout << "������һ����Ч�� k ֵ����ΧӦ�� 1 �� 15 ֮�䡣" << endl;
        return 1; // �Ƿ����룬���ط���ֵ
    }

    int i; // ���������
    // ����ѭ����ֱ���ҵ����������� i
    for (i = 1; ; i++)
    {
        Sn += 1.0 / i; // �ۼӵ��ͼ���
        if (Sn > k) // ����Ƿ񳬹� k
        {
            break;
        }
    }
    cout << i << endl; // ������������� i
    return 0;
}
