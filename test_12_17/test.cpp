#include <iostream>
using namespace std;

// ����Operation����
class Operation {
public:
    // ���캯�������ڳ�ʼ�����ݳ�Ա
    Operation(int a, int b) : numA(a), numB(b) {}

    // ��ȡnumA��ֵ
    int getNumA() {
        return numA;
    }

    // ��ȡnumB��ֵ
    int getNumB() {
        return numB;
    }

    // ���麯�������ڷ��ؼ����������������о���ʵ��
    virtual double result() = 0;

private:
    int numA, numB;
};

// Add�࣬����ʵ�ּӷ����㣬������Operation��
class Add : public Operation {
public:
    Add(int a, int b) : Operation(a, b) {}
    double result() override {
        return getNumA() + getNumB();
    }
};

// Sub�࣬����ʵ�ּ������㣬������Operation��
class Sub : public Operation {
public:
    Sub(int a, int b) : Operation(a, b) {}
    double result() override {
        return getNumA() - getNumB();
    }
};

// Mul�࣬����ʵ�ֳ˷����㣬������Operation��
class Mul : public Operation {
public:
    Mul(int a, int b) : Operation(a, b) {}
    double result() override {
        return getNumA() * getNumB();
    }
};

// Div�࣬����ʵ�ֳ������㣬������Operation��
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

    // ʹ��Add����мӷ����㲢������
    oper = new Add(a, b);
    cout << "Add result is " << oper->result() << endl;
    delete oper;

    // ʹ��Sub����м������㲢������
    oper = new Sub(a, b);
    cout << "Sub result is " << oper->result() << endl;
    delete oper;

    // ʹ��Mul����г˷����㲢������
    oper = new Mul(a, b);
    cout << "Mul result is " << oper->result() << endl;
    delete oper;

    // ʹ��Div����г������㲢������
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