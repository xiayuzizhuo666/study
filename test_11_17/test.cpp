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
//		if (c >= 'A' && c <= 'Z')//����Ƿ�Ϊ��д
//		{
//			letterCount[c - 'A']++;
//		}//�����д��ĸ�Ķ�Ӧ���������Ӽ���
//		else if (c >= 'a' && c <= 'z')//����ַ��Ƿ�ΪСд��ĸ
//		{
//			letterCount[c - 'a']++;
//		}//����Сд��ĸ��Ӧ�����������Ӽ���
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
//        cout << "ָ���ǿյģ�" << std::endl;
//    }
//}
//
//int main() {
//    int* p1 = nullptr; // ��ʼ��һ����ָ��
//    int* p2 = nullptr; // ��һ����ָ��
//
//    func(p1); // ���� p1
//    func(p2); // ���� p2
//
//    // Ҳ���Խ� nullptr ��ֵ������ָ��
//    int* p3 = new int(42); // ��̬�����ڴ�
//    p3 = nullptr; // ��ָ����Ϊ null����ʾ����ָ�������ڴ�
//
//    // �ͷ���Դ��ǰ���� p3 ��ǰָ���˺Ϸ��ڴ棩
//    delete p3; // �ͷ��ڴ棬�� p3 ���� nullptr�����Բ�ִ���κβ���
//
//    return 0;
//}
//
//
//
//char* trim(const char* str) {
//    // ��������ַ����Ƿ�Ϊ nullptr
//    if (str == nullptr) return nullptr;
//
//    const char* start = str; // ָ�� start ָ���ַ����Ŀ�ͷ
//    // ����ǰ���ո�
//    while (*start == ' ' && *start != '\0') ++start;
//
//    const char* end = start + strlen(start); // ָ�� end ָ���ַ���ĩβ����һ���ַ�
//    // ����β��ո�
//    while (end > start && *(end - 1) == ' ') --end;
//
//    size_t len = end - start; // ����ȥ���ո������ַ�������
//    char* trimmed = new char[len + 1]; // �ڶ��Ϸ������ڴ����ڴ���޼�����ַ���
//
//    strncpy(trimmed, start, len); // �����޼�����ַ�������
//    trimmed[len] = '\0'; // ȷ���ַ����Կ��ַ���β
//
//    return trimmed; // �����޼�����ַ���
//}


#include <iostream>
#include <cstring>
using namespace std;


char* trim(char* str);

int main()
{
    char s[1024];     // ����洢�ַ�����һά�ַ�����
    // ����һ���ַ������԰����ո�
    // ������ַ�������s�У�����ȡ���ַ��������Զ�����'\0'
    cin.getline(s, 1024);
    cout << trim(s) << endl;     // ���ȥ����β�ո����ַ���
    return 0;
}

// ����trim��ȥ���ַ�����β�ո�
// ������str-�ַ�ָ�룬ָ��������ַ���
// ����ֵ���ַ�ָ�룬ָ��ȥ����β�ո����ַ������׵�ַ��
// ��ʾ������ֱ�����ַ���str�в���
char* trim(char* str)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���trim
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
    cout << "�������ַ���: ";
    cin.getline(s, 1024);     // ����һ���ַ�
    extractNum(s);            // ���� extractNum ������ѡ������
    cout << s << endl;        // ���ѡ��������
    return 0;
}

// ���� extractNum��ѡ�� str ָ����ַ����е����֣�
// ���Żᱻ��Ϊ���ֵ�һ���֣���ǰ�棩����д�� str
// ������str - ָ���ַ���
void extractNum(char* str)
{
    /********** Begin *********/
    char* p = str;       // ����һ��ָ�� p��ָ��ԭʼ�ַ����Ŀ�ʼλ��
    char* output = str;  // output ���ڴ洢��ȡ�����֣���ʼָ��ԭʼ�ַ���
    bool negative = false; // ��־������ָʾ�Ƿ���Ӹ���

    // ���������ַ���
    while (*p != '\0') {
        // ��鵱ǰ�ַ��Ƿ�Ϊ����
        if (*p >= '0' && *p <= '9') {
            if (negative) {  // ���ǰ���и��ţ���ӵ����
                *output = '-';
                output++;
                negative = false; // ֻ���һ�θ���
            }
            *output++ = *p; // ������д�� output ���ƶ�ָ��
        }
        // ������ '-' �Һ���������ʱ�����ø���־
        else if (*p == '-' && (p == str || *(p - 1) == ' ')) {
            negative = true;  // ��Ǹ��Ž�����һ������ǰ���
        }
        p++; // p ָ����һ���ַ�
    }
    // �����ַ���
    *output = '\0';
    if (output == str) { // ���û�������򱣳ֿ��ַ���
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
    vector<string> strings; // ���ڴ洢�ַ�������

public:
    void copy(int N, int X, int L) {
        // ȡ����N���ַ�����X���ַ���ʼ�ĳ���ΪL���ַ���
        if (N >= 1 && N <= strings.size()) {
            string sub = strings[N - 1].substr(X, L);
            strings.push_back(sub);
        }
        else {
            cout << "Error: Invalid string index" << endl;
        }
    }

    void add(const string& S1, const string& S2) {
        // �ж�S1��S2�Ƿ�Ϊ0-99999֮�������
        int num1, num2;
        if (stringstream(S1) >> num1 && stringstream(S2) >> num2) {
            if (num1 >= 0 && num1 <= 99999 && num2 >= 0 && num2 <= 99999) {
                cout << num1 + num2 << endl; // �����������
            }
            else {
                cout << S1 + S2 << endl; // �����ַ������
            }
        }
        else {
            cout << S1 + S2 << endl; // �����ַ������
        }
    }

    int find(const string& S, int N) {
        // �ڵ�N���ַ����д���ʼ��ѰS�ַ���
        if (N >= 1 && N <= strings.size()) {
            size_t pos = strings[N - 1].find(S);
            return (pos != string::npos) ? pos : strings[N - 1].length(); // ����λ�û򳤶�
        }
        else {
            cout << "Error: Invalid string index" << endl;
            return -1;
        }
    }

    int rfind(const string& S, int N) {
        // �ڵ�N���ַ����д��ҿ�ʼ��ѰS�ַ���
        if (N >= 1 && N <= strings.size()) {
            size_t pos = strings[N - 1].rfind(S);
            return (pos != string::npos) ? pos : strings[N - 1].length(); // ����λ�û򳤶�
        }
        else {
            cout << "Error: Invalid string index" << endl;
            return -1;
        }
    }

    void insert(const string& S, int N, int X) {
        // �ڵ�N���ַ����ĵ�X���ַ�λ���в���S�ַ���
        if (N >= 1 && N <= strings.size()) {
            strings[N - 1].insert(X, S);
        }
        else {
            cout << "Error: Invalid string index" << endl;
        }
    }

    void reset(const string& S, int N) {
        // ����N���ַ�����ΪS
        if (N >= 1 && N <= strings.size()) {
            strings[N - 1] = S;
        }
        else {
            cout << "Error: Invalid string index" << endl;
        }
    }

    void print(int N) {
        // ��ӡ�����N���ַ���
        if (N >= 1 && N <= strings.size()) {
            cout << strings[N - 1] << endl;
        }
        else {
            cout << "Error: Invalid string index" << endl;
        }
    }

    void printAll() {
        // ��ӡ��������ַ���
        for (size_t i = 0; i < strings.size(); ++i) {
            cout << i + 1 << ": " << strings[i] << endl;
        }
    }

    void addString(const string& S) {
        // ����µ��ַ���
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
