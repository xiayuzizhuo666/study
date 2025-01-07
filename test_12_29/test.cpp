//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// �Զ�������ṹ��
//struct Participant {
//    string name;
//    int amount;
//    int index; // ���ڱ���ԭʼ˳��
//
//    // ���캯��
//    Participant(string n, int a, int i) : name(n), amount(a), index(i) {}
//};
//
//// ������
//bool compare(const Participant& a, const Participant& b) {
//    if (a.amount != b.amount) {
//        return a.amount > b.amount; // ������
//    }
//    return a.index < b.index; // ��������ͬ��ԭʼ˳������
//}
//
//// ���������
//vector<string> solution(int n, vector<string> s, vector<int> x) {
//    vector<Participant> participants;
//
//    // ��װ����
//    for (int i = 0; i < n; ++i) {
//        participants.emplace_back(s[i], x[i], i);
//    }
//
//    // ����
//    sort(participants.begin(), participants.end(), compare);
//
//    // ��ȡ����������
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
    // �ȶԺͽ�������
    sort(sums.begin(), sums.end());

    // ����Ŀ�������� n �ĺ�
    long long total_sum = 0;
    for (int sum : sums) {
        total_sum += sum;
    }

    // �Ӻ��������ԭʼ�����ܺ�
    // �ܺ�Ӧ���� (n-1) * (a_1 + a_2 + ... + a_n)
    // ԭʼ�����ܺ�ӦΪ total_sum / (n-1)
    if (total_sum % (n - 1) != 0) {
        return "Impossible";
    }

    long long original_total = total_sum / (n - 1);

    // �ҵ���һ���� s1 = a1 + a2�� s2 = a1 + a3��... s_(n-1) = a2 + a3
    // s_n ��������
    vector<int> original_numbers(n);
    original_numbers[0] = (original_total - sums[0]) / 2; // a1 = (sum1 + sum2 + ... + sum_n) / 2 - s1
    original_numbers[1] = sums[0] - original_numbers[0]; // a2 = s1 - a1

    // ͨ�� a1 �� a2 �Ƶ���������
    for (int i = 2; i < n; i++) {
        // a3 = s3 - a1
        original_numbers[i] = sums[i - 1] - original_numbers[0];
    }

    // ���������
    sort(original_numbers.begin(), original_numbers.end());

    // �����ת���ַ������
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
