//#include <iostream>
//using namespace std;
//void inputArray(int a[], int len);
//void outputArray(int a[], int len);
//int main()
//{
//    int a[10];
//    inputArray(a, 10); // �ӿ���̨��������10������
//    outputArray(a, 10); // �������Ԫ���������
//    return 0;
//}
//
//// ���������������inputArray��outputArray���������Ķ��塣
//// ���������������͵�������ǰ��Ĵ����и�����
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