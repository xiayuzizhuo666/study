#include <iostream>
#include <vector>
using namespace std;

int knapsack01(vector<int>& weights, vector<int>& values, int capacity) {
    int n = weights.size();
    // 创建动态规划表，多一行一列用于初始状态
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // 从第一个物品开始填表
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= capacity; w++) {
            // 当前物品的重量和价值（注意索引偏移）
            int current_weight = weights[i - 1];
            int current_value = values[i - 1];

            if (current_weight > w) {
                // 装不下：继承上一行结果
                dp[i][w] = dp[i - 1][w];
            }
            else {
                // 装得下：比较装和不装哪个更赚
                dp[i][w] = max(
                    dp[i - 1][w],  // 不装
                    current_value + dp[i - 1][w - current_weight]  // 装
                );
            }
        }
    }

    // 返回右下角的最终结果
    return dp[n][capacity];
}

int main() {
    // 示例数据（旧手机、破铁锅、废书本）
    vector<int> weights = { 1, 3, 2 };
    vector<int> values = { 30, 40, 20 };
    int capacity = 5;

    int result = knapsack01(weights, values, capacity);
    cout << "最大价值：" << result << " 元" << endl;  // 输出：70

    return 0;
}