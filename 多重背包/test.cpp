//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Item {
//    int weight;
//    int value;
//};
//
//int multiKnapsack(vector<int>& weights, vector<int>& values, vector<int>& counts, int capacity) {
//    vector<Item> items;
//
//    // 二进制拆分
//    for (int i = 0; i < weights.size(); i++) {
//        int s = counts[i];
//        for (int k = 1; k <= s; k *= 2) {
//            items.push_back({ weights[i] * k, values[i] * k });
//            s -= k;
//        }
//        if (s > 0) {
//            items.push_back({ weights[i] * s, values[i] * s });
//        }
//    }
//
//    // 01背包求解
//    vector<int> dp(capacity + 1, 0);
//    for (auto& item : items) {
//        for (int w = capacity; w >= item.weight; w--) {
//            dp[w] = max(dp[w], item.value + dp[w - item.weight]);
//        }
//    }
//    return dp[capacity];
//}
//
//int main() {
//    vector<int> weights = { 2, 3, 1 };    // 单件重量
//    vector<int> values = { 4, 5, 2 };     // 单件价值
//    vector<int> counts = { 2, 1, 3 };     // 最大数量
//    int capacity = 6;//背包大小
//
//    cout << "最大价值：" << multiKnapsack(weights, values, counts, capacity); // 输出11
//    return 0;
//}



#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 苹果：重量1kg，价值2元，最多拿3个
    int weight = 1, value = 2, count = 3;
    int capacity = 4; // 背包容量4kg

    // 1. 二进制拆分苹果
    vector<int> new_weights, new_values;
    int s = count;
    for (int k = 1; k <= s; k *= 2) {
        new_weights.push_back(k * weight);  // 打包k个苹果
        new_values.push_back(k * value);
        s -= k;
    }
    if (s > 0) { // 处理剩余数量
        new_weights.push_back(s * weight);
        new_values.push_back(s * value);
    }

    // 拆分后的包裹：1个苹果（1kg,2元） + 2个苹果（2kg,4元）

    // 2. 01背包求解
    vector<int> dp(capacity + 1, 0);
    for (int i = 0; i < new_weights.size(); i++) {
        for (int w = capacity; w >= new_weights[i]; w--) {
            dp[w] = max(dp[w], new_values[i] + dp[w - new_weights[i]]);
        }
    }

    cout << "最大价值：" << dp[capacity]; // 输出6元
    return 0;
}