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
//    // ���Դ��룬ʵ��ʹ��ʱ����Ҫ
//    int inputType;
//    cin >> inputType;
//    if (inputType == 0) { // ����
//        int a, b, result;
//        cin >> a >> b;
//        result = getSum(a, b);
//        cout << "input is integer:" << endl;
//        cout << result << endl;
//    }
//    else if (inputType == 1) { // ������
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
//    // ��������Ԫ��
//    void insert(const T& key, const T& value) {
//        data[key] = value;
//    }
//
//    // ��ȡԪ��
//    T get(const T& key) {
//        return data[key];
//    }
//
//    // ɾ��Ԫ��
//    void remove(const T& key) {
//        data.erase(key);
//    }
//
//    // ���Ԫ���Ƿ����
//    bool contains(const T& key) {
//        return data.find(key) != data.end();
//    }
//
//    // ��ȡMap�Ĵ�С
//    size_t size() const {
//        return data.size();
//    }
//
//    // ����<�����
//    bool operator<(const Map<T>& other) const {
//        return data < other.data;
//    }
//};
///********* End *********/
//
//int main() {
//    // ���Դ��룬ʵ��ʹ��ʱ����Ҫ
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
//    T key;  // �ؼ���
//    T value;  // ֵ
//
//public:
//    // ��Ĺ��캯��
//    Map(T k, T v) : key(k), value(v) { }
//
//    // ��ȡkey
//    T getKey() const {
//        return key;
//    }
//
//    // ��ȡvalue
//    T getValue() const {
//        return value;
//    }
//
//    // ����value
//    void setValue(T v) {
//        value = v;
//    }
//
//    // ����<�����
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


