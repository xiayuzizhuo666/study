//#include <iostream>
//using namespace std;
///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
//
//int main()
//{
//    int n=100;
//    /************* Begin ************/
//    int count = 0;
//    for (int n = 100; n < 1000; n++)
//    {
//        int hundreds = n / 100; // 百位
//        int tens = (n / 10) % 10; // 十位
//        int units = n % 10; // 个位
//        if (hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == n) 
//            {
//                cout << n << endl; // 输出水仙花数
//                count++; // 计数
//            }
//        }
//        /************* End ************/
//        cout << "100-1000的水仙花数有：" << count << "个";
//        return 0;
//
//    }



//#include <iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
///************* Begin ************/
///*补充所缺头文件*/
//int main()
//{
//    int den = 1, sign = 1;
//    double item = 1.0, pi = 0.0;
//    while (fabs(item) >= 1e-8)
//    {
//        pi = item;
//        den += 2;
//        sign = -sign;
//        item = sign / double(den);
//    }
//    cout << "pi = " << fixed << setprecision(7) << (pi * 4) << endl;
//
//    /************* End ************/
//    return 0;
//}
//


//#include <iostream>
//#include <cmath>
//#include<iomanip>
//using namespace std;
///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
///************* Begin ************/
///*补充所缺头文件*/
//
//
//int main()
//{
//
//	double sum = 0, solo = 1;
//	int i = 1;
//	while (fabs(i / solo) > 1e-8)
//	{
//		sum = sum + i / solo;
//		solo = solo + 2;
//		i = -i;
//	}
//	cout << fixed << setprecision(7) << "pi = " << 4 * sum;
//
//	/************* End ************/
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
//
//int main() {
//    /************* Begin ************/
//    int f1 = 1, f2 = 1, f3 = 1, f = 0; // 初始化前3年的母牛数量
//    cout << setw(6) << f1 << setw(6) << f2 << setw(6) << f3; // 输出第1年、第2年和第3年
//
//    for (int i = 4; i <= 20; i++) { // 从第4年开始
//        f = f1 + f3; // 当前年 = 前一年 + 三年前
//        cout << setw(6) << f; // 输出当前年的母牛数量
//
//        // 更新变量
//        f1 = f2; // 更新f1为前一年
//        f2 = f3; // 更新f2为当前年
//        f3 = f;  // 更新f3为当前年
//
//        if (i % 4 == 0) {
//            cout << endl; // 每4个数换行
//        }
//    }
//    /************* End ************/
//    return 0;
//}

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
//
//int main()
//{
//    /************* Begin ************/
//    int n, i, j, c = 0;
//    cout << "请输入>1的正整数n：";
//    cin >> n;
//    for (i = 2; i <= n; i++) {
//        bool panduan = true;
//        // 检查i是否为素数
//        for (j = 2; j  <= sqrt(i); j++) {
//            if (i % j == 0) {
//                panduan = false; 
//                break;
//            }
//        }
//        if (panduan) {
//            cout << setw(5)<< i ; // 输出素数
//            c++;
//            if (c % 5 == 0) {  
//                cout << endl;
//            }
//        }
//    }
//    /************* End ************/
//    return 0;
//}

#include <iostream>
#include <iomanip>
using namespace std;
/*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/

int main()
{
    /************* Begin ************/
    int i, j;
    cout << setw(5) << "|";
    for (int j = 1; j <= 9; j++)
        cout << setw(4) << j;
    cout << "\n----|------------------------------------\n";
    for (int i = 1; i <= 9; i++)
    {
        cout << i << setw(4) << "|";
        for (int j = 1; j <= i; j++) {
            cout << setw(4) << j * i;
        }
        cout << endl;
    }
    /************* End ************/
    return 0;
}



//#include <iostream>
//#include <iomanip>
//using namespace std;
///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
//
//int main()
//{
//    /************* Begin ************/
//    int i, j;
//    cout << setw(5) << "|";
//    for (int j = 1; j <= 9; j++)  
//        cout << setw(4) << j;
//    cout << "\n----|------------------------------------\n";
//
//    for (int i = 1; i <= 9; i++)  
//    {
//        cout << i << setw(4) << "|";
//        for (int j = 1; j <= 9; j++)  
//        {
//            if (j >= i)  
//                cout << setw(4) << j * i;
//            else  
//                cout << setw(4) << " ";
//        }
//        cout << endl;
//    }
//    /************* End ************/
//    return 0;
//}
