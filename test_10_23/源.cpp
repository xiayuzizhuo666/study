#include <iostream>
using namespace std;

// ����׳˵ĺ���
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
        sum += factorial(i); // ����1!, 3!, 5!, 7!, 9!���ۼ�
    }
    // End

    cout << "sum = " << sum << endl; // ������
    return 0;
}
