#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool wordBreak(const string& s, const unordered_set<string>& wordDict) {
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true; // ���ַ������Ա����

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            // ��� s[j, i) ��һ�����Ƿ����ֵ���
            if (dp[j] && wordDict.find(s.substr(j, i - j)) != wordDict.end()) {
                dp[i] = true;
                break; // �ҵ����Բ�ֵ������ֱ���˳�
                //find() ������һ��ģ�庯����������ָ����Χ�ڲ�����Ŀ��Ԫ��ֵ��ȵĵ�һ��Ԫ�ء�
                // �����������������������Ϊ�������ֱ��ʾ������Χ����ʼ�ͽ���λ��
                //substr()��C++���Ժ�������Ҫ�����Ǹ������ַ�����Ҫ���ָ��λ�ÿ�ʼ��������ָ���ĳ��ȡ�
            }
        }
    }

    return dp[n]; // ���������ַ����Ƿ���Ա����
}

int main() {
    string s = "leetcode";
    unordered_set<string> wordDict = { "leet", "code" };
    //unordered_set ���ڴ洢Ψһ��Ԫ�ؼ��ϣ�����֤Ԫ�ص����򣬵��ṩ����Ĳ��ҡ������ɾ������
    //һ������
    if (wordBreak(s, wordDict)) {
        cout << "�ַ������Ա���֡�" << endl;
    }
    else {
        cout << "�ַ������ܱ���֡�" << endl;
    }

    return 0;
}
