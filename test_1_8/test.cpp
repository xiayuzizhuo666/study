//#include <iostream>
//using namespace std;
//
//bool isDigit(char c) {                //第1空
//    return (c >= '0' && c <= '9') ? 1 : 0;
//}
//int main() {
//    char ch;
//    while (cin.get(ch) && ch != '\n')    //第2空
//        if (isDigit(ch))  cout << ch << "是数字\n";   //第3空
//        else
//            cout << ch << "不是数字\n";    //第4空
//}

//#include <iostream>
//using namespace std;
//
//int findMax(int arr[], int size) {
//    int maxValue = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (arr[i] > maxValue) {
//            maxValue = arr[i];
//        }
//    }
//    return maxValue;
//}
//
//
//int findMin(int arr[], int size) {
//    int minValue = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (arr[i] < minValue) {
//            minValue = arr[i];
//        }
//    }
//    return minValue;
//}
//
//int main() {
//    int arr[10];
//
//    for (int i = 0; i < 10; i++) {
//        cin >> arr[i];
//    }
//
//    int max = findMax(arr, 10);
//    int min = findMin(arr, 10);
//
//    cout << "max=" << max << endl;
//    cout << "min=" << min << endl;
//
//    return 0;
//}



#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n;
    cin >> n;
    /**********  Begin  **********/
    for (int i = 100; i <= n; i++) {
        int hundreds = i / 100; // 百位数
        int tens = (i / 10) % 10; // 十位数
        int units = i % 10; // 个位数

        if (hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == i) {
            cout << i << endl;
            count++;
        }
    }
    /**********  End  **********/

// 输出水仙花数的总数
    cout << "100-" << n << "的水仙花数有：" << count << "个" << endl;
    return 0;
}