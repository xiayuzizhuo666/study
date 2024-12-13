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
        { // 如果不相等，将当前字母加在新串后
            s2 += s1[i];
            if (num > 1)              // 如果相同字母大于1，则加上这个数字
                s2 += to_string(num); // to_string()将数字转字符串
            num = 1;                  // 下一个相同长度重置为1
        }
    }

    int l1 = s1.size(), l2 = s2.size();
    if (l1 > l2)
        cout << s2;
    else
        cout << "NO";
    return 0;
}