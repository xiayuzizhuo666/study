//#include <iostream>
//using namespace std;
//void inputArray(int a[], int len);
//void outputArray(int a[], int len);
//int main()
//{
//    int a[10];
//    inputArray(a, 10); // 从控制台依次输入10个整数
//    outputArray(a, 10); // 把数组的元素逆序输出
//    return 0;
//}
//
//// 在以下区域中添加inputArray和outputArray两个函数的定义。
//// 两个函数的声明和调用已在前面的代码中给出。
///********** Begin **********/
//void inputArray(int a[], int len)
//{
//    for (int j = 0; j < len; ++j) {
//        cin >> a[j];
//    }
//}
//void outputArray(int a[], int len)
//{
//    for (int j = len - 1; j >= 0; --j) {
//        cout << a[j] << " ";
//    }
//}
//
//
//
///**********  End  **********/


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string stringNum;
//    cin >> stringNum;
//
//    int sum = 0;
//    for (int i = 0; i < stringNum.length(); i++) {
//        sum += stringNum[i] - '0';
//    }
//
//    cout << sum << endl;
//
//    return 0;
//}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string stringNum;
    cin >> stringNum;

    int sum = 0;
    for (int i = 0; i < stringNum.length(); i++) {
        sum += stringNum[i] - '0';
    }

    cout << sum << endl;

    return 0;
}