#include <iostream>
using namespace std;

class person {
public:
    int m_A;
    int m_B;

    // 重载 + 操作符
    // 使用友元函数，使其能访问私有成员
    friend person operator+(const person& p1, const person& p2) {
        person temp;
        temp.m_A = p1.m_A + p2.m_A;
        temp.m_B = p1.m_B + p2.m_B;
        return temp;
    }
};

int main() {
    person p1;
    p1.m_A = 10;
    p1.m_B = 10;

    person p2;
    p2.m_A = 20;
    p2.m_B = 30;

    // 使用重载的 + 操作符
    person p3 = p1 + p2;

    cout << "p3.m_A: " << p3.m_A << ", p3.m_B: " << p3.m_B << endl;  // 输出结果

    return 0;
}
