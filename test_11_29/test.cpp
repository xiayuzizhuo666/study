//#include<iostream>
//using namespace std;
//int main()
//{
//    long long a, b, c;
//    long long i = 0;
//    cin >> a >> b;
//    for (int j = a; j <= b; j++)
//    {
//        c = j;
//        while (c != 0)
//        {
//            if (c % 10 == 2) i++;
//            c /= 10;
//        }
//    }
//    cout << i;
//    return 0;
//}
////��ͳ��ĳ��������Χ [L,R],[L, R] �����������У�����2���ֵĴ�����


//#include <iostream>//NO,1
//using namespace std;
//int main()
//{
//	cout << 999 * 26 / 24 << endl;
//	return 0;
//}
#include <iostream>//No.2
#include <cmath>
using namespace std;

int main() {
    double a, b; 
    int n;       
    cin >> a >> b; 

    double distance = sqrt(a * a + b * b); 

    cin >> n;
    for (int i = 0; i < n; i++) {
        double c;
        cin >> c; 
        if (c <= distance) {
            cout << "YES" << endl; // ��� c С�ڵ��ھ���
        }
        else {
            cout << "NO" << endl; // ��� c ���ھ���
        }
    }

    return 0;
}//�������̫����
