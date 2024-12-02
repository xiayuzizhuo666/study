#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool wordBreak(const string& s, const unordered_set<string>& wordDict) {
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true; // 空字符串可以被拆分

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            // 检查 s[j, i) 这一部分是否在字典中
            if (dp[j] && wordDict.find(s.substr(j, i - j)) != wordDict.end()) {
                dp[i] = true;
                break; // 找到可以拆分的情况，直接退出
                //find() 函数是一个模板函数，用于在指定范围内查找与目标元素值相等的第一个元素。
                // 这个函数接受两个迭代器作为参数，分别表示搜索范围的起始和结束位置
                //substr()是C++语言函数，主要功能是复制子字符串，要求从指定位置开始，并具有指定的长度。
            }
        }
    }

    return dp[n]; // 返回整个字符串是否可以被拆分
}

int main() {
    string s = "leetcode";
    unordered_set<string> wordDict = { "leet", "code" };
    //unordered_set 用于存储唯一的元素集合，不保证元素的排序，但提供更快的查找、插入和删除操作
    //一种容器
    if (wordBreak(s, wordDict)) {
        cout << "字符串可以被拆分。" << endl;
    }
    else {
        cout << "字符串不能被拆分。" << endl;
    }

    return 0;
}
