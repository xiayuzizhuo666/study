#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int WordLength(const string& str) {
    if (str.empty()) return 0;
    int length = 0;
    bool wordStart = false;//是否开始计数
    for (int i = str.size() - 1; i >= 0; --i)//从后往前遍历
    {
        if (!wordStart && str[i] != ' ') {
            wordStart = true;//开始计数
        }
        if (wordStart && str[i] != ' ') {
            ++length;
        }
        else if (wordStart && str[i] == ' ') {
            break;
        }
    }
    return length;
}
int CountWords(const string& str) {
    if (str.empty()) return 0; 

    int count = 0; 
    bool inWord = false; 

  
    for (char c : str) {
        if (c != ' ') { 
            if (!inWord) { // 只有在单词中时才增加计数
                inWord = true; // 现在在单词中
                count++;
            }
        }
        else {
            inWord = false; // 遇到空格，表示当前不在一个单词中
        }
    }
    return count; 
}

int main() {
    string str;
    getline(cin, str); 
    int length = WordLength(str);

    cout <<  length << endl; // 输出长度

    return 0;
}
