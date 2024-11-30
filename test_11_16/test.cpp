/********** Begin **********/
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int arr[10];
    int* ptr;


    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }


    ptr = arr + 9;
    for (int i = 0; i < 10; i++) {
        cout << *ptr << " ";
        ptr--;
    }
    return 0;
}




/**********  End  **********/




#include <iostream>
#include <cstring>
using namespace std;
int mystrcmp(const char* p1, const char* p2);
int main()
{
    char str1[100];
    char str2[100];
    cin >> str1 >> str2;
    int rv = mystrcmp(str1, str2);
    if (rv == 0)
        cout << "����";
    else if (rv > 0)
        cout << "����";
    else
        cout << "С��";
    return 0;
}
// �����´�����������Ӻ���mystrcmp�Ķ���
// �����������͵�����ǰ������������
/********** Begin **********/
int mystrcmp(const char* p1, const char* p2)
{
    return strcmp(p1, p2);
}




/**********  End  **********/



/********** Begin **********/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string input;
    vector<int> letterCount(26, 0); // ����һ����СΪ26����������ʼ��Ϊ0

    getline(cin, input); // ʹ��getline��ȡ�����ո���ַ���

    // �����ַ�����ͳ��ÿ����ĸ�ĳ��ִ���
    for (char c : input) {
        if (c >= 'A' && c <= 'Z') {
            letterCount[c - 'A']++;
        }
        else if (c >= 'a' && c <= 'z') {
            letterCount[c - 'a']++;
        }
    }

    // ��ӡÿ�����ֹ�����ĸ������ִ���
    for (int i = 0; i < 26; ++i) {
        if (letterCount[i] > 0) {
            cout << static_cast<char>('a' + i) << ":" << letterCount[i] << endl;
        }
    }

    return 0;
}
/**********  End  **********/




#include <iostream>
#include <cstring> // ����strlen�������ַ�����
using namespace std;
// ����������strΪ������ַ���������ֵΪȥ����β�ո���ַ���
// Ҫ�󷵻ص��ַ���λ�ڶ��ڴ��ϡ�
char* trim(const char* str);
int main()
{
    const int MAX_LENGTH = 1000; // ��������ַ�������
    char input[MAX_LENGTH];
    cin.getline(input, MAX_LENGTH); // ��ȡ�������룬�����ո�
    char* trimmed = trim(input); // ȥ����β�ո�
    cout << trimmed << endl << strlen(trimmed);
    delete[] trimmed; // �ͷ��ڴ�
    return 0;
}
// �����´�����������Ӻ���trim�Ķ���
// �����������͵�����ǰ������������
/********** Begin **********/
char* trim(const char* str) {
    if (str == nullptr) return nullptr;

    const char* start = str;
    while (*start == ' ' && *start != '\0') ++start; // ����ǰ���ո�

    const char* end = start + strlen(start);
    while (end > start && *(end - 1) == ' ') --end; // ����β��ո�

    size_t len = end - start;
    char* trimmed = new char[len + 1]; // ������ڴ�
    strncpy(trimmed, start, len); // �����ַ���
    trimmed[len] = '\0'; // ȷ���ַ����Կ��ַ���β

    return trimmed;
}




/**********  End  **********/