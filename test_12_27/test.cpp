//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//// ����ֵӳ��
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
//// ��������
//pair<int, int> findMaxFullHouse(int n, int max, const vector<int>& cards) {
//    // ͳ��ÿ������ֵ�ĳ��ִ���
//    map<int, int> count;
//    for (int card : cards) {
//        count[card]++;
//    }
//
//    vector<pair<int, int>> fullHouses; // �洢��Ч�ĺ�«���
//
//    // ����ÿ������ֵ��Ѱ�ҷ��������ĺ�«
//    for (auto it1 = count.begin(); it1 != count.end(); ++it1) {
//        if (it1->second < 3) continue; // ��Ҫ����������ͬ��
//
//        for (auto it2 = count.begin(); it2 != count.end(); ++it2) {
//            if (it1 == it2 || it2->second < 2) continue; // ��Ҫ�����Ҳ�ͬ
//
//            int a = it1->first; // ���ŵ�����ֵ
//            int b = it2->first; // ���ŵ�����ֵ
//            int sum = 3 * cardValue[a] + 2 * cardValue[b];
//
//            if (sum <= max) {
//                fullHouses.push_back({ a, b }); // �洢���������ĺ�«���
//            }
//        }
//    }
//
//    // ���û���ҵ����ʵĺ�«
//    if (fullHouses.empty()) {
//        return { 0, 0 };
//    }
//
//    // ���չ���Ժ�«����������ȱȽ� a��Ȼ��Ƚ� b
//    sort(fullHouses.rbegin(), fullHouses.rend(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
//        if (cardValue[p1.first] != cardValue[p2.first]) return cardValue[p1.first] < cardValue[p2.first]; // a �Ĵ�С
//        return cardValue[p1.second] < cardValue[p2.second]; // b �Ĵ�С
//        });
//
//    return fullHouses.front(); // �������ĺ�«
//}
//
//int main() {
//    cout << (findMaxFullHouse(9, 34, { 1, 1, 2, 2, 3, 3, 4, 5, 5 }) == make_pair(5, 8)) << endl; // ��� 1 (��ʾ true)
//    cout << (findMaxFullHouse(9, 37, { 9, 9, 9, 9, 6, 6, 6, 6, 13 }) == make_pair(6, 9)) << endl; // ��� 1
//    cout << (findMaxFullHouse(9, 40, { 1, 11, 13, 12, 7, 8, 11, 5, 6 }) == make_pair(0, 0)) << endl; // ��� 1
//    cout << (findMaxFullHouse(6, 50, { 13, 13, 13, 1, 1, 1 }) == make_pair(1, 13)) << endl; // ��� 1
//
//    return 0;
//}



//#include <iostream>
//#include <memory> // for std::unique_ptr
//#include <vector>
//
//using namespace std;
//
//// ���� Operation
//class Operation {
//public:
//    virtual double calculate(double a, double b) = 0; // ���麯��
//    virtual ~Operation() {}
//};
//
//// ������ Add
//class Add : public Operation {
//public:
//    double calculate(double a, double b) override {
//        return a + b;
//    }
//};
//
//// ������ Subtract
//class Subtract : public Operation {
//public:
//    double calculate(double a, double b) override {
//        return a - b;
//    }
//};
//
//// ������ Multiply
//class Multiply : public Operation {
//public:
//    double calculate(double a, double b) override {
//        return a * b;
//    }
//};
//
//// ������ Divide
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
//// ��������
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
//    // ʹ�ö�ִ̬�в���
//    vector<unique_ptr<Operation>> operations;
//    operations.push_back(make_unique<Add>());
//    operations.push_back(make_unique<Subtract>());
//    operations.push_back(make_unique<Multiply>());
//    operations.push_back(make_unique<Divide>());
//
//    // ��������
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
//    vector<int> dp(n, INT_MAX); // ��ʼ��dp����
//    dp[0] = data[0]; // ��һ��ֱ����ʳ��ķ���
//
//    // ��̬�滮����ÿһ�����С����
//    for (int i = 1; i < n; ++i) {
//        for (int j = max(0, i - k); j < i; ++j) {
//            dp[i] = min(dp[i], dp[j] + data[i] * (i - j));
//        }
//    }
//
//    // �������һ�����С����
//    return dp[n - 1];
//}
//
//int main() {
//    // ����ʾ��1
//    cout << (minimumCost(5, 2, { 1, 2, 3, 3, 2 }) == 9) << endl; // ��� 1 (��ʾ true)
//
//    // ʾ��2
//    cout << (minimumCost(6, 3, { 4, 1, 5, 2, 1, 3 }) == 9) << endl; // ��� 1
//
//    // ʾ��3
//    cout << (minimumCost(4, 1, { 3, 2, 4, 1 }) == 10) << endl; // ��� 1
//
//    return 0;
//}




#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int solution(int n, int k, const vector<int>& data) {
    // �������
    if (n != data.size() || k >= n) {
        return -1; // ����ѡ������������
    }

    deque<pair<int, int>> mins; // �洢�����Ͷ�Ӧ��ֵ
    int result = 0;

    for (int j = 0; j < n; ++j) {
        // �Ƴ��ȵ�ǰֵ�����Ŀ
        while (!mins.empty() && mins.back().second > data[j]) {
            mins.pop_back();
        }
        mins.emplace_back(j, data[j]); // ��ӵ�ǰֵ
        // �Ƴ����ڷ�Χ�ڵ�Ԫ��
        if (mins.front().first <= j - k) {
            mins.pop_front();
        }
        result += mins.front().second; // ��ӵ�ǰ��Сֵ�����
    }

    return result;
}

int main() {
    cout << (solution(5, 2, { 1, 2, 3, 3, 2 }) == 9) << endl; // ��� 1 (��ʾ true)
    cout << (solution(6, 3, { 4, 1, 5, 2, 1, 3 }) == 9) << endl; // ��� 1
    cout << (solution(4, 1, { 3, 2, 4, 1 }) == 10) << endl; // ��� 1

    return 0;
}
