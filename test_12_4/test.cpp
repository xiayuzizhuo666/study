//#include<iostream>
//using namespace std;
//int main() {
//	while (1) {
//		int n;
//		cin >> n;
//		for (int t = 1; t <= n; t++)
//		{
//			for (int i = 1; i <= n - t; i++)
//				cout << " ";
//			for (int i = 1; i <= 2 * t - 1; i++)
//				cout << "*";
//			for (int i = 1; i <= n - t; i++)
//				cout << " ";
//			cout << endl;
//
//		}
//		for (int i = 1; i <= n - 1; i++)
//			cout << " ";
//		cout << "|";
//		for (int i = 1; i <= n - 1; i++)
//			cout << " ";
//		cout << endl;
//		for (int i = 1; i <= n - 1; i++)
//			cout << " ";
//		cout << "|";
//		for (int i = 1; i <= n - 1; i++)
//			cout << " ";
//		cout << endl;
//		cout << "Merry Christmas" << endl;
//	};
//}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;

    int num = 1;
    int len = s1.size();
    for (int i = 0; i < len; i++)
    {
        if ((i + 1 < len) && s1[i] == s1[i + 1])
        {
            num++;
        }
        else
        { // �������ȣ�����ǰ��ĸ�����´���
            s2 += s1[i];
            if (num > 1)              // �����ͬ��ĸ����1��������������
                s2 += to_string(num); // to_string()������ת�ַ���
            num = 1;                  // ��һ����ͬ��������Ϊ1
        }
    }

    int l1 = s1.size(), l2 = s2.size();
    if (l1 > l2)
        cout << s2;
    else
        cout << "NO";
    return 0;
}