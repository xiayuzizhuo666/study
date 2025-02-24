#include <iostream>
#include <vector>
using namespace std;

int knapsack01(vector<int>& weights, vector<int>& values, int capacity) {
    int n = weights.size();
    // ������̬�滮����һ��һ�����ڳ�ʼ״̬
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // �ӵ�һ����Ʒ��ʼ���
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= capacity; w++) {
            // ��ǰ��Ʒ�������ͼ�ֵ��ע������ƫ�ƣ�
            int current_weight = weights[i - 1];
            int current_value = values[i - 1];

            if (current_weight > w) {
                // װ���£��̳���һ�н��
                dp[i][w] = dp[i - 1][w];
            }
            else {
                // װ���£��Ƚ�װ�Ͳ�װ�ĸ���׬
                dp[i][w] = max(
                    dp[i - 1][w],  // ��װ
                    current_value + dp[i - 1][w - current_weight]  // װ
                );
            }
        }
    }

    // �������½ǵ����ս��
    return dp[n][capacity];
}

int main() {
    // ʾ�����ݣ����ֻ��������������鱾��
    vector<int> weights = { 1, 3, 2 };
    vector<int> values = { 30, 40, 20 };
    int capacity = 5;

    int result = knapsack01(weights, values, capacity);
    cout << "����ֵ��" << result << " Ԫ" << endl;  // �����70

    return 0;
}