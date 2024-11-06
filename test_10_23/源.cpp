#include <iostream>
using namespace std;

// 计算阶乘的函数
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int sum = 0;

    // Begin
    for (int i = 1; i <= 9; i += 2) {
        sum += factorial(i); // 计算1!, 3!, 5!, 7!, 9!并累加
    }
    // End

    cout << "sum = " << sum << endl; // 输出结果
    return 0;
}
