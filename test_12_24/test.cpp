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
    T key;  // 关键字
    T value;  // 值

public:
    // 类的构造函数
    Map(T k, T v) : key(k), value(v) { }

    // 获取key
    T getKey() const {
        return key;
    }

    // 获取value
    T getValue() const {
        return value;
    }

    // 设置value
    void setValue(T v) {
        value = v;
    }

    // 重载<运算符
    bool operator<(const Map<T>& other) const {
        return key < other.key;
    }
};
/********* End *********/


