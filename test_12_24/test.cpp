#pragma once
#include <iostream>
using namespace std;

/********* Begin *********/
template <typename T>
T getSum(T a, T b) {
    return a + b;
}
/********* End *********/

#include <iostream>
#include <string>
using namespace std;

/********* Begin *********/
template <class T>
class Map {
private:
    T key;  // �ؼ���
    T value;  // ֵ

public:
    // ��Ĺ��캯��
    Map(T k, T v) : key(k), value(v) { }

    // ��ȡkey
    T getKey() const {
        return key;
    }

    // ��ȡvalue
    T getValue() const {
        return value;
    }

    // ����value
    void setValue(T v) {
        value = v;
    }

    // ����<�����
    bool operator<(const Map<T>& other) const {
        return key < other.key;
    }
};
/********* End *********/


