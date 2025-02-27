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
//    // �����Ʋ��
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
//    // 01�������
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
//    vector<int> weights = { 2, 3, 1 };    // ��������
//    vector<int> values = { 4, 5, 2 };     // ������ֵ
//    vector<int> counts = { 2, 1, 3 };     // �������
//    int capacity = 6;//������С
//
//    cout << "����ֵ��" << multiKnapsack(weights, values, counts, capacity); // ���11
//    return 0;
//}



#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ƻ��������1kg����ֵ2Ԫ�������3��
    int weight = 1, value = 2, count = 3;
    int capacity = 4; // ��������4kg

    // 1. �����Ʋ��ƻ��
    vector<int> new_weights, new_values;
    int s = count;
    for (int k = 1; k <= s; k *= 2) {
        new_weights.push_back(k * weight);  // ���k��ƻ��
        new_values.push_back(k * value);
        s -= k;
    }
    if (s > 0) { // ����ʣ������
        new_weights.push_back(s * weight);
        new_values.push_back(s * value);
    }

    // ��ֺ�İ�����1��ƻ����1kg,2Ԫ�� + 2��ƻ����2kg,4Ԫ��

    // 2. 01�������
    vector<int> dp(capacity + 1, 0);
    for (int i = 0; i < new_weights.size(); i++) {
        for (int w = capacity; w >= new_weights[i]; w--) {
            dp[w] = max(dp[w], new_values[i] + dp[w - new_weights[i]]);
        }
    }

    cout << "����ֵ��" << dp[capacity]; // ���6Ԫ
    return 0;
}