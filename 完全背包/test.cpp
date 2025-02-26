#include <iostream>
#include <vector>
using namespace std;

int unboundedKnapsack(vector<int>& weights, vector<int>& values, int capacity) {
    vector<int> dp(capacity + 1, 0);

    for (int i = 0; i < weights.size(); i++) {
        // ��ȫ�����������������
        for (int w = weights[i]; w <= capacity; w++) {
            dp[w] = max(dp[w], values[i] + dp[w - weights[i]]);
        }
    }
    return dp[capacity];
}

int main() {
    vector<int> weights = { 1, 3 };
    vector<int> values = { 5, 10 };
    int capacity = 5;
    cout << "����ֵ��" << unboundedKnapsack(weights, values, capacity); // ���25
    return 0;
}