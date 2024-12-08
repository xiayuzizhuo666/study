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
////请统计某个给定范围 [L,R],[L, R] 的所有整数中，数字2出现的次数。


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
            cout << "YES" << endl; // 如果 c 小于等于距离
        }
        else {
            cout << "NO" << endl; // 如果 c 大于距离
        }
    }

    return 0;
}//今天的题太简单了
