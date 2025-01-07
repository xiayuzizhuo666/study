//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// 自定义排序结构体
//struct Participant {
//    string name;
//    int amount;
//    int index; // 用于保持原始顺序
//
//    // 构造函数
//    Participant(string n, int a, int i) : name(n), amount(a), index(i) {}
//};
//
//// 排序函数
//bool compare(const Participant& a, const Participant& b) {
//    if (a.amount != b.amount) {
//        return a.amount > b.amount; // 按金额降序
//    }
//    return a.index < b.index; // 如果金额相同按原始顺序升序
//}
//
//// 主解决方案
//vector<string> solution(int n, vector<string> s, vector<int> x) {
//    vector<Participant> participants;
//
//    // 封装数据
//    for (int i = 0; i < n; ++i) {
//        participants.emplace_back(s[i], x[i], i);
//    }
//
//    // 排序
//    sort(participants.begin(), participants.end(), compare);
//
//    // 提取排序后的名字
//    vector<string> result;
//    for (const auto& p : participants) {
//        result.push_back(p.name);
//    }
//
//    return result;
//}
//
//int main() {
//    cout << (solution(4, { "a", "b", "c", "d" }, { 1, 2, 2, 1 }) == vector<string>{"b", "c", "a", "d"}) << endl;
//    cout << (solution(3, { "x", "y", "z" }, { 100, 200, 200 }) == vector<string>{"y", "z", "x"}) << endl;
//    cout << (solution(5, { "m", "n", "o", "p", "q" }, { 50, 50, 30, 30, 20 }) == vector<string>{"m", "n", "o", "p", "q"}) << endl;
//    return 0;
//}



#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

std::string solution(int n, std::vector<int> sums) {
    // 先对和进行排序
    sort(sums.begin(), sums.end());

    // 计算目标数个数 n 的和
    long long total_sum = 0;
    for (int sum : sums) {
        total_sum += sum;
    }

    // 从和中推算出原始数的总和
    // 总和应该是 (n-1) * (a_1 + a_2 + ... + a_n)
    // 原始数的总和应为 total_sum / (n-1)
    if (total_sum % (n - 1) != 0) {
        return "Impossible";
    }

    long long original_total = total_sum / (n - 1);

    // 找到第一个和 s1 = a1 + a2， s2 = a1 + a3，... s_(n-1) = a2 + a3
    // s_n 代表最大和
    vector<int> original_numbers(n);
    original_numbers[0] = (original_total - sums[0]) / 2; // a1 = (sum1 + sum2 + ... + sum_n) / 2 - s1
    original_numbers[1] = sums[0] - original_numbers[0]; // a2 = s1 - a1

    // 通过 a1 和 a2 推导出其他数
    for (int i = 2; i < n; i++) {
        // a3 = s3 - a1
        original_numbers[i] = sums[i - 1] - original_numbers[0];
    }

    // 将结果排序
    sort(original_numbers.begin(), original_numbers.end());

    // 将结果转成字符串输出
    string result;
    for (int i = 0; i < n; i++) {
        result += to_string(original_numbers[i]) + (i == n - 1 ? "" : " ");
    }

    return result;
}

int main() {
    std::vector<int> sums1 = { 1269, 1160, 1663 };
    std::vector<int> sums2 = { 1, 1, 1 };
    std::vector<int> sums3 = { 226, 223, 225, 224, 227, 229, 228, 226, 225, 227 };
    std::vector<int> sums4 = { -1, 0, -1, -2, 1, 0, -1, 1, 0, -1 };
    std::vector<int> sums5 = { 79950, 79936, 79942, 79962, 79954, 79972, 79960, 79968, 79924, 79932 };

    std::cout << (solution(3, sums1) == "383 777 886") << std::endl;
    std::cout << (solution(3, sums2) == "Impossible") << std::endl;
    std::cout << (solution(5, sums3) == "111 112 113 114 115") << std::endl;
    std::cout << (solution(5, sums4) == "-1 -1 0 0 1") << std::endl;
    std::cout << (solution(5, sums5) == "39953 39971 39979 39983 39989") << std::endl;

    return 0;
}
