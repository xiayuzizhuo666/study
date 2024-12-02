#include <iostream>
#include <string>
using namespace std;

// 实现 strStr 函数
int strStr(const string &haystack, const string &needle) {
    // 特殊情况：如果 needle 为空字符串，返回 0
    if (needle.empty()) {//是 C++ 标准库中 std::string 类的一个成员函数，
        //用于检查字符串是否为空，即其长度是否为 0。
        // 该函数返回一个布尔值：如果字符串为空，则返回 true，否则返回 false
        return 0;
    }

    int hLen = haystack.size();//获取长度
    int nLen = needle.size();

    // 遍历 haystack
    for (int i = 0; i <= hLen - nLen; i++) {
        // 检查 s[j, i) 这一部分是否等于 needle
        if (haystack.substr(i, nLen) == needle) {//函数用于从字符串中提取子字符串。
            //这个函数接受两个参数：起始位置（_off）和要提取的字符数（_count）。
            // 如果未指定_count或_count+_off超出了源字符串的长度，则子字符串将延续到源字符串的结尾

            return i; // 找到 needle，返回其起始下标
        }
    }

    return -1; // 未找到 needle，返回 -1
}

int main() {

    string haystack;

    getline(cin, haystack); // 使用 getline 读取整行输入


    string needle;

    getline(cin, needle);


    cout << strStr(haystack, needle) << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <sstream> // 用于处理字符串流
using namespace std;

class Solution {
public:
    bool wordBreak(const string& s, const unordered_set<string>& wordDict) {
        int len_s = s.size();
        vector<bool> dp(len_s + 1, false);
        dp[0] = true; // 空字符串可以拆分

        // 遍历字符串
        for (int i = 1; i <= len_s; i++) {
            for (int j = 0; j < i; j++) {
                // 如果前面可以拆分并且当前子串在字典中
                if (dp[j] && wordDict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break; // 找到一个有效拆分，直接退出
                }
            }
        }

        return dp[len_s]; // 返回整个字符串是否可以被拆分
    }
};

void inputHandler(string& inputString, unordered_set<string>& wordDictionary) {
    // 输入待拆分字符串
    cout << "请输入待检查的字符串 s: ";
    getline(cin, inputString); // 使用 getline 读取整行输入

    // 输入字典单词，使用空格分隔
    cout << "请输入字典中的单词（以空格分隔）：";
    string wordLine;
    getline(cin, wordLine); // 使用 getline 读取整行输入

    // 按空格分割输入的字典单词
    stringstream ss(wordLine);
    string word;
    while (ss >> word) {
        wordDictionary.insert(word); // 将每个单词添加到字典中
    }
}

int main() {
    Solution solution;
    string inputString;
    unordered_set<string> wordDictionary;

    // 获取用户输入
    inputHandler(inputString, wordDictionary);

    // 调用 wordBreak 概括并输出结果
    if (solution.wordBreak(inputString, wordDictionary)) {
        cout << "输出: true" << endl; // 可以拆分
    }
    else {
        cout << "输出: false" << endl; // 不能拆分
    }

    return 0;
}
