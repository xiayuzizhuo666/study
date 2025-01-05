//#include <iostream>
//#include <vector>
//
//int solution(std::vector<int> cards) {
//    int uniqueNumber = 0;
//    for (int card : cards) {
//        uniqueNumber ^= card; // 对所有卡片数字进行异或
//    }
//    return uniqueNumber; // 返回唯一的数字
//}
//
//int main() {
//    // Add your test cases here
//    std::vector<int> cards1 = { 1, 1, 2, 2, 3, 3, 4, 5, 5 };
//    std::vector<int> cards2 = { 0, 1, 0, 1, 2 };
//    std::vector<int> cards3 = { 7, 3, 3, 7, 10 };
//
//    std::cout << "Test case 1: " << solution(cards1) << std::endl; // 应该输出 4
//    std::cout << "Test case 2: " << solution(cards2) << std::endl; // 应该输出 2
//    std::cout << "Test case 3: " << solution(cards3) << std::endl; // 应该输出 10
//
//    return 0;
//}





#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

std::string solution(const std::string& s) {
    // 找到小数点的位置
    std::size_t dotPosition = s.find('.');
    std::string integerPart;
    std::string decimalPart;

    // 分离整数部分和小数部分
    if (dotPosition != std::string::npos) {
        integerPart = s.substr(0, dotPosition);
        decimalPart = s.substr(dotPosition); // 包括小数点及其后的内容
    }
    else {
        integerPart = s;
    }

    // 去掉前导零
    integerPart.erase(0, integerPart.find_first_not_of('0'));
    // 处理特殊情况：如果整数部分为空，赋值为 '0'
    if (integerPart.empty()) {
        integerPart = "0";
    }

    // 将整数部分格式化为带千分位的字符串
    std::stringstream formatted;
    for (std::size_t i = 0; i < integerPart.size(); ++i) {
        if (i > 0 && (integerPart.size() - i) % 3 == 0) {
            formatted << ','; // 每三位加一个千分位逗号
        }
        formatted << integerPart[i]; // 输出当前数字
    }

    // 最后加上小数部分（如果有）
    if (!decimalPart.empty()) {
        formatted << decimalPart;
    }

    return formatted.str(); // 返回格式化后的字符串
}

int main() {
    std::cout << (solution("1294512.12412") == "1,294,512.12412") << std::endl;
    std::cout << (solution("0000123456789.99") == "123,456,789.99") << std::endl;
    std::cout << (solution("987654321") == "987,654,321") << std::endl;

    return 0;
}
