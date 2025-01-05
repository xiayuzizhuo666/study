//#include <iostream>
//#include <vector>
//
//int solution(std::vector<int> cards) {
//    int uniqueNumber = 0;
//    for (int card : cards) {
//        uniqueNumber ^= card; // �����п�Ƭ���ֽ������
//    }
//    return uniqueNumber; // ����Ψһ������
//}
//
//int main() {
//    // Add your test cases here
//    std::vector<int> cards1 = { 1, 1, 2, 2, 3, 3, 4, 5, 5 };
//    std::vector<int> cards2 = { 0, 1, 0, 1, 2 };
//    std::vector<int> cards3 = { 7, 3, 3, 7, 10 };
//
//    std::cout << "Test case 1: " << solution(cards1) << std::endl; // Ӧ����� 4
//    std::cout << "Test case 2: " << solution(cards2) << std::endl; // Ӧ����� 2
//    std::cout << "Test case 3: " << solution(cards3) << std::endl; // Ӧ����� 10
//
//    return 0;
//}





#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

std::string solution(const std::string& s) {
    // �ҵ�С�����λ��
    std::size_t dotPosition = s.find('.');
    std::string integerPart;
    std::string decimalPart;

    // �����������ֺ�С������
    if (dotPosition != std::string::npos) {
        integerPart = s.substr(0, dotPosition);
        decimalPart = s.substr(dotPosition); // ����С���㼰��������
    }
    else {
        integerPart = s;
    }

    // ȥ��ǰ����
    integerPart.erase(0, integerPart.find_first_not_of('0'));
    // ������������������������Ϊ�գ���ֵΪ '0'
    if (integerPart.empty()) {
        integerPart = "0";
    }

    // ���������ָ�ʽ��Ϊ��ǧ��λ���ַ���
    std::stringstream formatted;
    for (std::size_t i = 0; i < integerPart.size(); ++i) {
        if (i > 0 && (integerPart.size() - i) % 3 == 0) {
            formatted << ','; // ÿ��λ��һ��ǧ��λ����
        }
        formatted << integerPart[i]; // �����ǰ����
    }

    // ������С�����֣�����У�
    if (!decimalPart.empty()) {
        formatted << decimalPart;
    }

    return formatted.str(); // ���ظ�ʽ������ַ���
}

int main() {
    std::cout << (solution("1294512.12412") == "1,294,512.12412") << std::endl;
    std::cout << (solution("0000123456789.99") == "123,456,789.99") << std::endl;
    std::cout << (solution("987654321") == "987,654,321") << std::endl;

    return 0;
}
