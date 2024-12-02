#include <iostream>
#include <string>
using namespace std;

// ʵ�� strStr ����
int strStr(const string &haystack, const string &needle) {
    // ������������ needle Ϊ���ַ��������� 0
    if (needle.empty()) {//�� C++ ��׼���� std::string ���һ����Ա������
        //���ڼ���ַ����Ƿ�Ϊ�գ����䳤���Ƿ�Ϊ 0��
        // �ú�������һ������ֵ������ַ���Ϊ�գ��򷵻� true�����򷵻� false
        return 0;
    }

    int hLen = haystack.size();//��ȡ����
    int nLen = needle.size();

    // ���� haystack
    for (int i = 0; i <= hLen - nLen; i++) {
        // ��� s[j, i) ��һ�����Ƿ���� needle
        if (haystack.substr(i, nLen) == needle) {//�������ڴ��ַ�������ȡ���ַ�����
            //�����������������������ʼλ�ã�_off����Ҫ��ȡ���ַ�����_count����
            // ���δָ��_count��_count+_off������Դ�ַ����ĳ��ȣ������ַ�����������Դ�ַ����Ľ�β

            return i; // �ҵ� needle����������ʼ�±�
        }
    }

    return -1; // δ�ҵ� needle������ -1
}

int main() {

    string haystack;

    getline(cin, haystack); // ʹ�� getline ��ȡ��������


    string needle;

    getline(cin, needle);


    cout << strStr(haystack, needle) << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <sstream> // ���ڴ����ַ�����
using namespace std;

class Solution {
public:
    bool wordBreak(const string& s, const unordered_set<string>& wordDict) {
        int len_s = s.size();
        vector<bool> dp(len_s + 1, false);
        dp[0] = true; // ���ַ������Բ��

        // �����ַ���
        for (int i = 1; i <= len_s; i++) {
            for (int j = 0; j < i; j++) {
                // ���ǰ����Բ�ֲ��ҵ�ǰ�Ӵ����ֵ���
                if (dp[j] && wordDict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break; // �ҵ�һ����Ч��֣�ֱ���˳�
                }
            }
        }

        return dp[len_s]; // ���������ַ����Ƿ���Ա����
    }
};

void inputHandler(string& inputString, unordered_set<string>& wordDictionary) {
    // ���������ַ���
    cout << "������������ַ��� s: ";
    getline(cin, inputString); // ʹ�� getline ��ȡ��������

    // �����ֵ䵥�ʣ�ʹ�ÿո�ָ�
    cout << "�������ֵ��еĵ��ʣ��Կո�ָ�����";
    string wordLine;
    getline(cin, wordLine); // ʹ�� getline ��ȡ��������

    // ���ո�ָ�������ֵ䵥��
    stringstream ss(wordLine);
    string word;
    while (ss >> word) {
        wordDictionary.insert(word); // ��ÿ��������ӵ��ֵ���
    }
}

int main() {
    Solution solution;
    string inputString;
    unordered_set<string> wordDictionary;

    // ��ȡ�û�����
    inputHandler(inputString, wordDictionary);

    // ���� wordBreak ������������
    if (solution.wordBreak(inputString, wordDictionary)) {
        cout << "���: true" << endl; // ���Բ��
    }
    else {
        cout << "���: false" << endl; // ���ܲ��
    }

    return 0;
}
