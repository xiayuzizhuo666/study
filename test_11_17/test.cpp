//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	string input;
//	vector<int> letterCount(26.0);
//	getline(cin, input);
//	for (char c : input)
//	{
//		if (c >= 'A' && c <= 'Z')//检查是否为大写
//		{
//			letterCount[c - 'A']++;
//		}//计算大写字母的对应索引并增加计数
//		else if (c >= 'a' && c <= 'z')//检查字符是否为小写字母
//		{
//			letterCount[c - 'a']++;
//		}//计算小写字母对应的索引并增加计数
//	}
//	for (int i = 0; i < 26; ++i)
//	{
//		if (letterCount[i] > 0)
//		{
//			cout << static_cast<char>('a' + i)
//				<< ":" << letterCount[i] << endl;
//		}
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void func(int* ptr) {
//    if (ptr == nullptr) {
//        cout << "指针是空的！" << std::endl;
//    }
//}
//
//int main() {
//    int* p1 = nullptr; // 初始化一个空指针
//    int* p2 = nullptr; // 另一个空指针
//
//    func(p1); // 传递 p1
//    func(p2); // 传递 p2
//
//    // 也可以将 nullptr 赋值给其他指针
//    int* p3 = new int(42); // 动态分配内存
//    p3 = nullptr; // 将指针置为 null，表示不再指向分配的内存
//
//    // 释放资源（前提是 p3 以前指向了合法内存）
//    delete p3; // 释放内存，但 p3 现在 nullptr，所以不执行任何操作
//
//    return 0;
//}
//
//
//
//char* trim(const char* str) {
//    // 检查输入字符串是否为 nullptr
//    if (str == nullptr) return nullptr;
//
//    const char* start = str; // 指针 start 指向字符串的开头
//    // 跳过前导空格
//    while (*start == ' ' && *start != '\0') ++start;
//
//    const char* end = start + strlen(start); // 指针 end 指向字符串末尾的下一个字符
//    // 跳过尾随空格
//    while (end > start && *(end - 1) == ' ') --end;
//
//    size_t len = end - start; // 计算去除空格后的新字符串长度
//    char* trimmed = new char[len + 1]; // 在堆上分配新内存用于存放修剪后的字符串
//
//    strncpy(trimmed, start, len); // 复制修剪后的字符串内容
//    trimmed[len] = '\0'; // 确保字符串以空字符结尾
//
//    return trimmed; // 返回修剪后的字符串
//}


#include <iostream>
#include <cstring>
using namespace std;


char* trim(char* str);

int main()
{
    char s[1024];     // 定义存储字符串的一维字符数组
    // 输入一行字符，可以包含空格
    // 输入的字符串存入s中，最多读取个字符，后面自动加上'\0'
    cin.getline(s, 1024);
    cout << trim(s) << endl;     // 输出去掉首尾空格后的字符串
    return 0;
}

// 函数trim：去掉字符串首尾空格
// 参数：str-字符指针，指向输入的字符串
// 返回值：字符指针，指向去掉首尾空格后的字符串（首地址）
// 提示：可以直接在字符串str中操作
char* trim(char* str)
{
    // 请在此添加代码，实现函数trim
    /********** Begin *********/
    if (str == nullptr)return str;
    while (*str == ' ')
    {
        str++;
    }
    if (str == '\0')
        return str;
    char* end = str + strlen(str)-1;
    while (end > str && *end == ' ')
    {
        end--;
    }
    *(end + 1) = '\0';
    return str;
    /********** End **********/
}

#include <iostream>
using namespace std;

void extractNum(char* str);

int main()
{
    char s[1024];
    cout << "请输入字符串: ";
    cin.getline(s, 1024);     // 输入一行字符
    extractNum(s);            // 调用 extractNum 函数，选出数字
    cout << s << endl;        // 输出选出的数字
    return 0;
}

// 函数 extractNum：选出 str 指向的字符串中的数字，
// 负号会被视为数字的一部分（在前面），并写回 str
// 参数：str - 指向字符串
void extractNum(char* str)
{
    /********** Begin *********/
    char* p = str;       // 创建一个指针 p，指向原始字符串的开始位置
    char* output = str;  // output 用于存储提取的数字，初始指向原始字符串
    bool negative = false; // 标志变量，指示是否添加负号

    // 遍历整个字符串
    while (*p != '\0') {
        // 检查当前字符是否为数字
        if (*p >= '0' && *p <= '9') {
            if (negative) {  // 如果前面有负号，添加到输出
                *output = '-';
                output++;
                negative = false; // 只添加一次负号
            }
            *output++ = *p; // 将数字写入 output 并移动指针
        }
        // 当遇到 '-' 且后面是数字时，设置负标志
        else if (*p == '-' && (p == str || *(p - 1) == ' ')) {
            negative = true;  // 标记负号将在下一个数字前添加
        }
        p++; // p 指向下一个字符
    }
    // 结束字符串
    *output = '\0';
    if (output == str) { // 如果没有数字则保持空字符串
        output[0] = '\0';
    }
    /********** End **********/
}



#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class StringManager {
private:
    vector<string> strings; // 用于存储字符串集合

public:
    void copy(int N, int X, int L) {
        // 取出第N个字符串第X个字符开始的长度为L的字符串
        if (N >= 1 && N <= strings.size()) {
            string sub = strings[N - 1].substr(X, L);
            strings.push_back(sub);
        }
        else {
            cout << "Error: Invalid string index" << endl;
        }
    }

    void add(const string& S1, const string& S2) {
        // 判断S1，S2是否为0-99999之间的整数
        int num1, num2;
        if (stringstream(S1) >> num1 && stringstream(S2) >> num2) {
            if (num1 >= 0 && num1 <= 99999 && num2 >= 0 && num2 <= 99999) {
                cout << num1 + num2 << endl; // 返回整数相加
            }
            else {
                cout << S1 + S2 << endl; // 返回字符串相加
            }
        }
        else {
            cout << S1 + S2 << endl; // 返回字符串相加
        }
    }

    int find(const string& S, int N) {
        // 在第N个字符串中从左开始找寻S字符串
        if (N >= 1 && N <= strings.size()) {
            size_t pos = strings[N - 1].find(S);
            return (pos != string::npos) ? pos : strings[N - 1].length(); // 返回位置或长度
        }
        else {
            cout << "Error: Invalid string index" << endl;
            return -1;
        }
    }

    int rfind(const string& S, int N) {
        // 在第N个字符串中从右开始找寻S字符串
        if (N >= 1 && N <= strings.size()) {
            size_t pos = strings[N - 1].rfind(S);
            return (pos != string::npos) ? pos : strings[N - 1].length(); // 返回位置或长度
        }
        else {
            cout << "Error: Invalid string index" << endl;
            return -1;
        }
    }

    void insert(const string& S, int N, int X) {
        // 在第N个字符串的第X个字符位置中插入S字符串
        if (N >= 1 && N <= strings.size()) {
            strings[N - 1].insert(X, S);
        }
        else {
            cout << "Error: Invalid string index" << endl;
        }
    }

    void reset(const string& S, int N) {
        // 将第N个字符串变为S
        if (N >= 1 && N <= strings.size()) {
            strings[N - 1] = S;
        }
        else {
            cout << "Error: Invalid string index" << endl;
        }
    }

    void print(int N) {
        // 打印输出第N个字符串
        if (N >= 1 && N <= strings.size()) {
            cout << strings[N - 1] << endl;
        }
        else {
            cout << "Error: Invalid string index" << endl;
        }
    }

    void printAll() {
        // 打印输出所有字符串
        for (size_t i = 0; i < strings.size(); ++i) {
            cout << i + 1 << ": " << strings[i] << endl;
        }
    }

    void addString(const string& S) {
        // 添加新的字符串
        strings.push_back(S);
    }
};

int main() {
    StringManager sm;
    string command;

    while (true) {
        cout << "> ";
        getline(cin, command);

        if (command == "over") break;

        stringstream ss(command);
        string cmd;
        ss >> cmd;

        if (cmd == "copy") {
            int N, X, L;
            ss >> N >> X >> L;
            sm.copy(N, X, L);
        }
        else if (cmd == "add") {
            string S1, S2;
            ss >> S1 >> S2;
            sm.add(S1, S2);
        }
        else if (cmd == "find") {
            string S;
            int N;
            ss >> S >> N;
            cout << sm.find(S, N) << endl;
        }
        else if (cmd == "rfind") {
            string S;
            int N;
            ss >> S >> N;
            cout << sm.rfind(S, N) << endl;
        }
        else if (cmd == "insert") {
            string S;
            int N, X;
            ss >> S >> N >> X;
            sm.insert(S, N, X);
        }
        else if (cmd == "reset") {
            string S;
            int N;
            ss >> S >> N;
            sm.reset(S, N);
        }
        else if (cmd == "print") {
            int N;
            ss >> N;
            sm.print(N);
        }
        else if (cmd == "printall") {
            sm.printAll();
        }
        else {
            cout << "Error: Invalid command" << endl;
        }
    }

    return 0;
}
