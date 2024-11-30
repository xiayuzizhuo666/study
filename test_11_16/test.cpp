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
        cout << "等于";
    else if (rv > 0)
        cout << "大于";
    else
        cout << "小于";
    return 0;
}
// 在以下代码区域中添加函数mystrcmp的定义
// 函数的声明和调用在前面代码中已完成
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
    vector<int> letterCount(26, 0); // 创建一个大小为26的向量，初始化为0

    getline(cin, input); // 使用getline读取包含空格的字符串

    // 遍历字符串，统计每个字母的出现次数
    for (char c : input) {
        if (c >= 'A' && c <= 'Z') {
            letterCount[c - 'A']++;
        }
        else if (c >= 'a' && c <= 'z') {
            letterCount[c - 'a']++;
        }
    }

    // 打印每个出现过的字母及其出现次数
    for (int i = 0; i < 26; ++i) {
        if (letterCount[i] > 0) {
            cout << static_cast<char>('a' + i) << ":" << letterCount[i] << endl;
        }
    }

    return 0;
}
/**********  End  **********/




#include <iostream>
#include <cstring> // 用于strlen函数和字符操作
using namespace std;
// 函数声明，str为输入的字符串，返回值为去除首尾空格的字符串
// 要求返回的字符串位于堆内存上。
char* trim(const char* str);
int main()
{
    const int MAX_LENGTH = 1000; // 定义最大字符串长度
    char input[MAX_LENGTH];
    cin.getline(input, MAX_LENGTH); // 获取整行输入，包括空格
    char* trimmed = trim(input); // 去除首尾空格
    cout << trimmed << endl << strlen(trimmed);
    delete[] trimmed; // 释放内存
    return 0;
}
// 在以下代码区域中添加函数trim的定义
// 函数的声明和调用在前面代码中已完成
/********** Begin **********/
char* trim(const char* str) {
    if (str == nullptr) return nullptr;

    const char* start = str;
    while (*start == ' ' && *start != '\0') ++start; // 跳过前导空格

    const char* end = start + strlen(start);
    while (end > start && *(end - 1) == ' ') --end; // 跳过尾随空格

    size_t len = end - start;
    char* trimmed = new char[len + 1]; // 分配堆内存
    strncpy(trimmed, start, len); // 复制字符串
    trimmed[len] = '\0'; // 确保字符串以空字符结尾

    return trimmed;
}




/**********  End  **********/