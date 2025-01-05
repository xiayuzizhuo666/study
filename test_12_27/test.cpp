//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//// 牌面值映射
//map<int, int> cardValue = {
//    {1, 14}, // A
//    {13, 13}, // K
//    {12, 12}, // Q
//    {11, 11}, // J
//    {10, 10},
//    {9, 9},
//    {8, 8},
//    {7, 7},
//    {6, 6},
//    {5, 5},
//    {4, 4},
//    {3, 3},
//    {2, 2}
//};
//
//// 函数声明
//pair<int, int> findMaxFullHouse(int n, int max, const vector<int>& cards) {
//    // 统计每种牌面值的出现次数
//    map<int, int> count;
//    for (int card : cards) {
//        count[card]++;
//    }
//
//    vector<pair<int, int>> fullHouses; // 存储有效的葫芦组合
//
//    // 遍历每种牌面值，寻找符合条件的葫芦
//    for (auto it1 = count.begin(); it1 != count.end(); ++it1) {
//        if (it1->second < 3) continue; // 需要至少三张相同牌
//
//        for (auto it2 = count.begin(); it2 != count.end(); ++it2) {
//            if (it1 == it2 || it2->second < 2) continue; // 需要两张且不同
//
//            int a = it1->first; // 三张的牌面值
//            int b = it2->first; // 两张的牌面值
//            int sum = 3 * cardValue[a] + 2 * cardValue[b];
//
//            if (sum <= max) {
//                fullHouses.push_back({ a, b }); // 存储符合条件的葫芦组合
//            }
//        }
//    }
//
//    // 如果没有找到合适的葫芦
//    if (fullHouses.empty()) {
//        return { 0, 0 };
//    }
//
//    // 按照规则对葫芦组合排序，优先比较 a，然后比较 b
//    sort(fullHouses.rbegin(), fullHouses.rend(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
//        if (cardValue[p1.first] != cardValue[p2.first]) return cardValue[p1.first] < cardValue[p2.first]; // a 的大小
//        return cardValue[p1.second] < cardValue[p2.second]; // b 的大小
//        });
//
//    return fullHouses.front(); // 返回最大的葫芦
//}
//
//int main() {
//    cout << (findMaxFullHouse(9, 34, { 1, 1, 2, 2, 3, 3, 4, 5, 5 }) == make_pair(5, 8)) << endl; // 输出 1 (表示 true)
//    cout << (findMaxFullHouse(9, 37, { 9, 9, 9, 9, 6, 6, 6, 6, 13 }) == make_pair(6, 9)) << endl; // 输出 1
//    cout << (findMaxFullHouse(9, 40, { 1, 11, 13, 12, 7, 8, 11, 5, 6 }) == make_pair(0, 0)) << endl; // 输出 1
//    cout << (findMaxFullHouse(6, 50, { 13, 13, 13, 1, 1, 1 }) == make_pair(1, 13)) << endl; // 输出 1
//
//    return 0;
//}



//#include <iostream>
//#include <memory> // for std::unique_ptr
//#include <vector>
//
//using namespace std;
//
//// 基类 Operation
//class Operation {
//public:
//    virtual double calculate(double a, double b) = 0; // 纯虚函数
//    virtual ~Operation() {}
//};
//
//// 派生类 Add
//class Add : public Operation {
//public:
//    double calculate(double a, double b) override {
//        return a + b;
//    }
//};
//
//// 派生类 Subtract
//class Subtract : public Operation {
//public:
//    double calculate(double a, double b) override {
//        return a - b;
//    }
//};
//
//// 派生类 Multiply
//class Multiply : public Operation {
//public:
//    double calculate(double a, double b) override {
//        return a * b;
//    }
//};
//
//// 派生类 Divide
//class Divide : public Operation {
//public:
//    double calculate(double a, double b) override {
//        if (b == 0) {
//            throw runtime_error("Cannot divide by zero");
//        }
//        return a / b;
//    }
//};
//
//// 运算器类
//class Calculator {
//public:
//    double performOperation(Operation* operation, double a, double b) {
//        return operation->calculate(a, b);
//    }
//};
//
//int main() {
//    Calculator calculator;
//
//    // 使用多态执行操作
//    vector<unique_ptr<Operation>> operations;
//    operations.push_back(make_unique<Add>());
//    operations.push_back(make_unique<Subtract>());
//    operations.push_back(make_unique<Multiply>());
//    operations.push_back(make_unique<Divide>());
//
//    // 测试运算
//    double a = 10;
//    double b = 5;
//
//    for (const auto& operation : operations) {
//        cout << "Result: " << calculator.performOperation(operation.get(), a, b) << endl;
//    }
//
//    return 0;
//}

//
//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//int minimumCost(int n, int k, const vector<int>& data) {
//    vector<int> dp(n, INT_MAX); // 初始化dp数组
//    dp[0] = data[0]; // 第一天直接买食物的费用
//
//    // 动态规划计算每一天的最小费用
//    for (int i = 1; i < n; ++i) {
//        for (int j = max(0, i - k); j < i; ++j) {
//            dp[i] = min(dp[i], dp[j] + data[i] * (i - j));
//        }
//    }
//
//    // 返回最后一天的最小费用
//    return dp[n - 1];
//}
//
//int main() {
//    // 测试示例1
//    cout << (minimumCost(5, 2, { 1, 2, 3, 3, 2 }) == 9) << endl; // 输出 1 (表示 true)
//
//    // 示例2
//    cout << (minimumCost(6, 3, { 4, 1, 5, 2, 1, 3 }) == 9) << endl; // 输出 1
//
//    // 示例3
//    cout << (minimumCost(4, 1, { 3, 2, 4, 1 }) == 10) << endl; // 输出 1
//
//    return 0;
//}




#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int solution(int n, int k, const vector<int>& data) {
    // 检查输入
    if (n != data.size() || k >= n) {
        return -1; // 或者选择其他错误处理
    }

    deque<pair<int, int>> mins; // 存储索引和对应的值
    int result = 0;

    for (int j = 0; j < n; ++j) {
        // 移除比当前值大的项目
        while (!mins.empty() && mins.back().second > data[j]) {
            mins.pop_back();
        }
        mins.emplace_back(j, data[j]); // 添加当前值
        // 移除不在范围内的元素
        if (mins.front().first <= j - k) {
            mins.pop_front();
        }
        result += mins.front().second; // 添加当前最小值到结果
    }

    return result;
}

int main() {
    cout << (solution(5, 2, { 1, 2, 3, 3, 2 }) == 9) << endl; // 输出 1 (表示 true)
    cout << (solution(6, 3, { 4, 1, 5, 2, 1, 3 }) == 9) << endl; // 输出 1
    cout << (solution(4, 1, { 3, 2, 4, 1 }) == 10) << endl; // 输出 1

    return 0;
}
