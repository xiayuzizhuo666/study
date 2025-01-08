//#include <iostream>
//using namespace std;
//
//int solution(int n) {
//    int matches = 0; // ��¼������ԵĴ���
//
//    while (n > 1) { // ֻҪ�г���һ֧���飬��������
//        if (n % 2 == 0) { // ��ǰ������Ϊż��
//            matches += n / 2; // ���� n / 2 ������
//            n = n / 2; // ��������һ�ֵĶ�����
//        }
//        else { // ��ǰ������Ϊ����
//            matches += (n - 1) / 2; // ���� (n - 1) / 2 ������
//            n = (n - 1) / 2 + 1; // ��������һ�ֵĶ�����
//        }
//    }
//
//    return matches; // �����ܵ���Դ���
//}
//
//int main() {
//    cout << (solution(7) == 6) << endl;   // ���ӦΪtrue
//    cout << (solution(14) == 13) << endl; // ���ӦΪtrue
//    cout << (solution(1) == 0) << endl;   // ���ӦΪtrue
//
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//string solution(string s, int k) {
//    // �����ַ�ӳ�����
//    string mapStr = "bcabca"; // 'a' -> "bc", 'b' -> "ca", 'c' -> "ab"
//
//    // ѭ������k�ֱ任
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
//        s = newString; // �����ַ���Ϊ�µĽ��
//    }
//
//    return s; // �������ս��
//}
//
//int main() {
//    cout << (solution("abc", 2) == "caababbcbcca") << endl; // ���ӦΪtrue
//    cout << (solution("abca", 3) == "abbcbccabccacaabcaababbcabbcbcca") << endl; // ���ӦΪtrue
//    cout << (solution("cba", 1) == "abcabc") << endl; // ���ӦΪtrue
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
//    // ʹ�ü������洢��ͬ�ķ���
//    set<int> uniqueScores(nums.begin(), nums.end()); // ȥ��
//
//    // �жϲ�ͬ�ķ�������
//    if (uniqueScores.size() >= 3) {
//        // ������������಻ͬ�ķ��������ص�����ķ���
//        auto it = uniqueScores.rbegin(); // �������������ôӴ�С��˳��
//        ++it; // ������ķ�������������ǰ�ƶ�����
//        ++it; // ����ǰ�ƶ�һ��
//        return *it; // ���ص�ǰ����
//    }
//    else {
//        // ��ͬ�ķ���ֻ����������٣��������ķ���
//        return *uniqueScores.rbegin(); // ֱ�ӷ���������
//    }
//}
//
//int main() {
//    std::cout << (solution(3, { 3, 2, 1 }) == 1) << std::endl; // ���ӦΪtrue
//    std::cout << (solution(2, { 1, 2 }) == 2) << std::endl; // ���ӦΪtrue
//    std::cout << (solution(4, { 2, 2, 3, 1 }) == 1) << std::endl; // ���ӦΪtrue
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//std::string solution(const std::string& s) {
//    std::string result; // ����һ���µ��ַ������ڱ�����
//
//    // ���������ַ�����ÿ���ַ�
//    for (char ch : s) {
//        if (ch == 'a') {
//            result += "%100"; // ����� 'a'����� "%100"
//        }
//        else {
//            result += ch; // �������ԭ�ַ�
//        }
//    }
//
//    return result; // �����滻����ַ���
//}
//
//int main() {
//    std::cout << (solution("abcdwa") == "%100bcdw%100") << std::endl; // ���ӦΪtrue
//    std::cout << (solution("banana") == "b%100n%100n%100") << std::endl; // ���ӦΪtrue
//    std::cout << (solution("apple") == "%100pple") << std::endl; // ���ӦΪtrue
//    return 0;
//}


#include <iostream>
#include <vector>

int solution(std::vector<int> A) {
    int n = A.size();
    int liarsCount = 0;

    for (int i = 0; i < n; ++i) {
        int lessEqualCount = 0; // С�ڵ��ڸ÷�����ѧ������
        int greaterCount = 0;   // ���ڸ÷�����ѧ������

        for (int j = 0; j < n; ++j) {
            if (A[j] <= A[i]) {
                lessEqualCount++; // ͳ��С�ڵ��ڵ�����
            }
            if (A[j] > A[i]) {
                greaterCount++; // ͳ�ƴ��ڵ�����
            }
        }

        // �ж��Ƿ�˵��
        if (lessEqualCount > greaterCount) {
            liarsCount++; // ����˵�ѵ�ѧ������
        }
    }

    return liarsCount; // ����˵��ѧ��������
}

int main() {
    // ��Ӳ�������
    std::cout << (solution({ 100, 100, 100 }) == 3) << std::endl;
    std::cout << (solution({ 2, 1, 3 }) == 2) << std::endl;
    std::cout << (solution({ 30, 1, 30, 30 }) == 3) << std::endl;
    std::cout << (solution({ 19, 27, 73, 55, 88 }) == 3) << std::endl;
    std::cout << (solution({ 19, 27, 73, 55, 88, 88, 2, 17, 22 }) == 5) << std::endl;
    return 0;
}
