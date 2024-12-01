#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <functional>
#include <unordered_map>
#include <stdexcept>

using namespace std;

class StringManager {
private:
    vector<string> strings; // 用于存储字符串集合

public:
    void copy(int N, int X, int L) {
        if (N < 1 || N > strings.size() || X < 0 || X >= strings[N - 1].length()) {
            throw invalid_argument("Error: Invalid string index or substring range");
        }
        string sub = strings[N - 1].substr(X, L);
        strings.push_back(sub);
    }

    void add(const string& S1, const string& S2) {
        int num1, num2;
        if (stringstream(S1) >> num1 && stringstream(S2) >> num2) {
            if (num1 >= 0 && num1 <= 99999 && num2 >= 0 && num2 <= 99999) {
                cout << num1 + num2 << endl;
            }
            else {
                cout << S1 + S2 << endl;
            }
        }
        else {
            cout << S1 + S2 << endl;
        }
    }

    int find(const string& S, int N) {
        if (N < 1 || N > strings.size()) {
            throw invalid_argument("Error: Invalid string index");
        }
        size_t pos = strings[N - 1].find(S);
        return (pos != string::npos) ? pos : strings[N - 1].length();
    }

    int rfind(const string& S, int N) {
        if (N < 1 || N > strings.size()) {
            throw invalid_argument("Error: Invalid string index");
        }
        size_t pos = strings[N - 1].rfind(S);
        return (pos != string::npos) ? pos : strings[N - 1].length();
    }

    void insert(const string& S, int N, int X) {
        if (N < 1 || N > strings.size() || X < 0 || X > strings[N - 1].length()) {
            throw invalid_argument("Error: Invalid string index or insert position");
        }
        strings[N - 1].insert(X, S);
    }

    void reset(const string& S, int N) {
        if (N < 1 || N > strings.size()) {
            throw invalid_argument("Error: Invalid string index");
        }
        strings[N - 1] = S;
    }

    void print(int N) {
        if (N < 1 || N > strings.size()) {
            throw invalid_argument("Error: Invalid string index");
        }
        cout << strings[N - 1] << endl;
    }

    void printAll() {
        for (size_t i = 0; i < strings.size(); ++i) {
            cout << i + 1 << ": " << strings[i] << endl;
        }
    }

    void addString(const string& S) {
        strings.push_back(S);
    }
};

class CommandProcessor {
private:
    StringManager& sm;
    unordered_map<string, function<void(stringstream&)>> commandMap;

public:
    CommandProcessor(StringManager& sm) : sm(sm) {
        commandMap["copy"] = [&](stringstream& ss) {
            int N, X, L;
            ss >> N >> X >> L;
            sm.copy(N, X, L);
            };
        commandMap["add"] = [&](stringstream& ss) {
            string S1, S2;
            ss >> S1 >> S2;
            sm.add(S1, S2);
            };
        commandMap["find"] = [&](stringstream& ss) {
            string S;
            int N;
            ss >> S >> N;
            cout << sm.find(S, N) << endl;
            };
        commandMap["rfind"] = [&](stringstream& ss) {
            string S;
            int N;
            ss >> S >> N;
            cout << sm.rfind(S, N) << endl;
            };
        commandMap["insert"] = [&](stringstream& ss) {
            string S;
            int N, X;
            ss >> S >> N >> X;
            sm.insert(S, N, X);
            };
        commandMap["reset"] = [&](stringstream& ss) {
            string S;
            int N;
            ss >> S >> N;
            sm.reset(S, N);
            };
        commandMap["print"] = [&](stringstream& ss) {
            int N;
            ss >> N;
            sm.print(N);
            };
        commandMap["printall"] = [&](stringstream&) {
            sm.printAll();
            };
    }

    void processCommand(const string& command) {
        stringstream ss(command);
        string cmd;
        ss >> cmd;

        auto it = commandMap.find(cmd);
        if (it != commandMap.end()) {
            try {
                it->second(ss);
            }
            catch (const invalid_argument& e) {
                cout << e.what() << endl;
            }
        }
        else {
            cout << "Error: Invalid command" << endl;
        }
    }
};

int main() {
    StringManager sm;
    CommandProcessor cp(sm);
    string command;

    // 初始化字符串
    sm.addString("hello");
    sm.addString("world");
    sm.addString("example string");

    while (true) {
        cout << "> ";
        getline(cin, command);

        if (command == "over") break;

        cp.processCommand(command); // 处理命令
    }

    return 0;
}
