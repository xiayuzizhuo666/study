#include <iostream>
using namespace std;

// 定义Operation父类
class Operation {
public:
    // 构造函数，用于初始化数据成员
    Operation(int a, int b) : numA(a), numB(b) {}

    // 获取numA的值
    int getNumA() {
        return numA;
    }

    // 获取numB的值
    int getNumB() {
        return numB;
    }

    // 纯虚函数，用于返回计算结果，在派生类中具体实现
    virtual double result() = 0;

private:
    int numA, numB;
};

// Add类，用于实现加法运算，派生自Operation类
class Add : public Operation {
public:
    Add(int a, int b) : Operation(a, b) {}
    double result() override {
        return getNumA() + getNumB();
    }
};

// Sub类，用于实现减法运算，派生自Operation类
class Sub : public Operation {
public:
    Sub(int a, int b) : Operation(a, b) {}
    double result() override {
        return getNumA() - getNumB();
    }
};

// Mul类，用于实现乘法运算，派生自Operation类
class Mul : public Operation {
public:
    Mul(int a, int b) : Operation(a, b) {}
    double result() override {
        return getNumA() * getNumB();
    }
};

// Div类，用于实现除法运算，派生自Operation类
class Div : public Operation {
public:
    Div(int a, int b) : Operation(a, b) {}
    double result() override {
        if (getNumB() == 0) {
            cout << "division is 0" << endl;
            return 0;
        }
        return static_cast<double>(getNumA()) / getNumB();
    }
};

int main() {
    Operation* oper;
    int a, b;
    cin >> a >> b;

    // 使用Add类进行加法运算并输出结果
    oper = new Add(a, b);
    cout << "Add result is " << oper->result() << endl;
    delete oper;

    // 使用Sub类进行减法运算并输出结果
    oper = new Sub(a, b);
    cout << "Sub result is " << oper->result() << endl;
    delete oper;

    // 使用Mul类进行乘法运算并输出结果
    oper = new Mul(a, b);
    cout << "Mul result is " << oper->result() << endl;
    delete oper;

    // 使用Div类进行除法运算并输出结果
    oper = new Div(a, b);
    if (oper->getNumB() == 0) {
        cout << "Div result is division is 0" << endl;
    }
    else {
        cout << "Div result is " << oper->result() << endl;
    }
    delete oper;

    return 0;
}