//#include <iostream>
//using namespace std;
//
//int solution(int n) {
//    int matches = 0; // 记录比赛配对的次数
//
//    while (n > 1) { // 只要有超过一支队伍，继续比赛
//        if (n % 2 == 0) { // 当前队伍数为偶数
//            matches += n / 2; // 进行 n / 2 场比赛
//            n = n / 2; // 晋级到下一轮的队伍数
//        }
//        else { // 当前队伍数为奇数
//            matches += (n - 1) / 2; // 进行 (n - 1) / 2 场比赛
//            n = (n - 1) / 2 + 1; // 晋级到下一轮的队伍数
//        }
//    }
//
//    return matches; // 返回总的配对次数
//}
//
//int main() {
//    cout << (solution(7) == 6) << endl;   // 输出应为true
//    cout << (solution(14) == 13) << endl; // 输出应为true
//    cout << (solution(1) == 0) << endl;   // 输出应为true
//
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//string solution(string s, int k) {
//    // 定义字符映射规则
//    string mapStr = "bcabca"; // 'a' -> "bc", 'b' -> "ca", 'c' -> "ab"
//
//    // 循环进行k轮变换
//    for (int i = 0; i < k; ++i) {
//        string newString = "";
//        for (char ch : s) {
//            if (ch == 'a') {
//                newString += "bc";
//            }
//            else if (ch == 'b') {
//                newString += "ca";
//            }
//            else if (ch == 'c') {
//                newString += "ab";
//            }
//        }
//        s = newString; // 更新字符串为新的结果
//    }
//
//    return s; // 返回最终结果
//}
//
//int main() {
//    cout << (solution("abc", 2) == "caababbcbcca") << endl; // 输出应为true
//    cout << (solution("abca", 3) == "abbcbccabccacaabcaababbcabbcbcca") << endl; // 输出应为true
//    cout << (solution("cba", 1) == "abcabc") << endl; // 输出应为true
//    return 0;
//}
//
//
//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//
//int solution(int n, std::vector<int> nums) {
//    // 使用集合来存储不同的分数
//    set<int> uniqueScores(nums.begin(), nums.end()); // 去重
//
//    // 判断不同的分数数量
//    if (uniqueScores.size() >= 3) {
//        // 若有三个或更多不同的分数，返回第三大的分数
//        auto it = uniqueScores.rbegin(); // 反向迭代器，获得从大到小的顺序
//        ++it; // 第三大的分数，迭代器向前移动两步
//        ++it; // 再向前移动一步
//        return *it; // 返回当前分数
//    }
//    else {
//        // 不同的分数只有两个或更少，返回最大的分数
//        return *uniqueScores.rbegin(); // 直接返回最大分数
//    }
//}
//
//int main() {
//    std::cout << (solution(3, { 3, 2, 1 }) == 1) << std::endl; // 输出应为true
//    std::cout << (solution(2, { 1, 2 }) == 2) << std::endl; // 输出应为true
//    std::cout << (solution(4, { 2, 2, 3, 1 }) == 1) << std::endl; // 输出应为true
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//std::string solution(const std::string& s) {
//    std::string result; // 创建一个新的字符串用于保存结果
//
//    // 遍历输入字符串的每个字符
//    for (char ch : s) {
//        if (ch == 'a') {
//            result += "%100"; // 如果是 'a'，添加 "%100"
//        }
//        else {
//            result += ch; // 否则添加原字符
//        }
//    }
//
//    return result; // 返回替换后的字符串
//}
//
//int main() {
//    std::cout << (solution("abcdwa") == "%100bcdw%100") << std::endl; // 输出应为true
//    std::cout << (solution("banana") == "b%100n%100n%100") << std::endl; // 输出应为true
//    std::cout << (solution("apple") == "%100pple") << std::endl; // 输出应为true
//    return 0;
//}


#include <iostream>
#include <vector>

int solution(std::vector<int> A) {
    int n = A.size();
    int liarsCount = 0;

    for (int i = 0; i < n; ++i) {
        int lessEqualCount = 0; // 小于等于该分数的学生数量
        int greaterCount = 0;   // 大于该分数的学生数量

        for (int j = 0; j < n; ++j) {
            if (A[j] <= A[i]) {
                lessEqualCount++; // 统计小于等于的数量
            }
            if (A[j] > A[i]) {
                greaterCount++; // 统计大于的数量
            }
        }

        // 判断是否说谎
        if (lessEqualCount > greaterCount) {
            liarsCount++; // 增加说谎的学生数量
        }
    }

    return liarsCount; // 返回说谎学生的数量
}

int main() {
    // 添加测试用例
    std::cout << (solution({ 100, 100, 100 }) == 3) << std::endl;
    std::cout << (solution({ 2, 1, 3 }) == 2) << std::endl;
    std::cout << (solution({ 30, 1, 30, 30 }) == 3) << std::endl;
    std::cout << (solution({ 19, 27, 73, 55, 88 }) == 3) << std::endl;
    std::cout << (solution({ 19, 27, 73, 55, 88, 88, 2, 17, 22 }) == 5) << std::endl;
    return 0;
}
