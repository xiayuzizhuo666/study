#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int WordLength(const string& str) {
    if (str.empty()) return 0;
    int length = 0;
    bool wordStart = false;//�Ƿ�ʼ����
    for (int i = str.size() - 1; i >= 0; --i)//�Ӻ���ǰ����
    {
        if (!wordStart && str[i] != ' ') {
            wordStart = true;//��ʼ����
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
            if (!inWord) { // ֻ���ڵ�����ʱ�����Ӽ���
                inWord = true; // �����ڵ�����
                count++;
            }
        }
        else {
            inWord = false; // �����ո񣬱�ʾ��ǰ����һ��������
        }
    }
    return count; 
}

int main() {
    string str;
    getline(cin, str); 
    int length = WordLength(str);

    cout <<  length << endl; // �������

    return 0;
}
