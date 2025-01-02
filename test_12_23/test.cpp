//#pragma once
//#include <iostream>
//using namespace std;
//
///********* Begin *********/
//template <typename T>
//T getSum(T a, T b) {
//    return a + b;
//}
///********* End *********/
//
//int main() {
//    // 测试代码，实际使用时不需要
//    int inputType;
//    cin >> inputType;
//    if (inputType == 0) { // 整数
//        int a, b, result;
//        cin >> a >> b;
//        result = getSum(a, b);
//        cout << "input is integer:" << endl;
//        cout << result << endl;
//    }
//    else if (inputType == 1) { // 浮点数
//        float a, b, result;
//        cin >> a >> b;
//        result = getSum(a, b);
//        cout << "input is float:" << endl;
//        cout << result << endl;
//    }
//    return 0;
//}


//#pragma once
//#include <iostream>
//#include <map>
//using namespace std;
//
///********* Begin *********/
//template<typename T>
//class Map {
//private:
//    map<T, T> data;
//
//public:
//    // 插入或更新元素
//    void insert(const T& key, const T& value) {
//        data[key] = value;
//    }
//
//    // 获取元素
//    T get(const T& key) {
//        return data[key];
//    }
//
//    // 删除元素
//    void remove(const T& key) {
//        data.erase(key);
//    }
//
//    // 检查元素是否存在
//    bool contains(const T& key) {
//        return data.find(key) != data.end();
//    }
//
//    // 获取Map的大小
//    size_t size() const {
//        return data.size();
//    }
//
//    // 重载<运算符
//    bool operator<(const Map<T>& other) const {
//        return data < other.data;
//    }
//};
///********* End *********/
//
//int main() {
//    // 测试代码，实际使用时不需要
//    int aKey, bKey;
//    cin >> aKey >> bKey;
//    Map<int> a, b;
//    a.insert(aKey, aKey);
//    b.insert(bKey, bKey);
//    cout << aKey << endl;
//    cout << bKey << endl;
//    if (a < b) {
//        cout << 1 << endl;
//    }
//    else {
//        cout << 0 << endl;
//    }
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
///********* Begin *********/
//template <class T>
//class Map {
//private:
//    T key;  // 关键字
//    T value;  // 值
//
//public:
//    // 类的构造函数
//    Map(T k, T v) : key(k), value(v) { }
//
//    // 获取key
//    T getKey() const {
//        return key;
//    }
//
//    // 获取value
//    T getValue() const {
//        return value;
//    }
//
//    // 设置value
//    void setValue(T v) {
//        value = v;
//    }
//
//    // 重载<运算符
//    bool operator<(const Map<T>& other) const {
//        return key < other.key;
//    }
//};
///********* End *********/
//
//int main() {
//    int aKey, bKey;
//    cin >> aKey >> bKey;
//    Map<int> a(aKey, aKey);
//    Map<int> b(bKey, bKey);
//    cout << a.getKey() << endl;
//    cout << b.getKey() << endl;
//    if (a < b) {
//        cout << 1 << endl;
//    }
//    else {
//        cout << 0 << endl;
//    }
//    return 0;
//}


