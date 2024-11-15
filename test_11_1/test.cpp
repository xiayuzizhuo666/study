//#include <iostream>
//#include <cmath>
//using namespace std;
/*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/


//double parallelogramArea(double x, double y)
//{
//	return (x * y);
//
//}
//
//int main() {
//	double a, h;
//	cout << "请输入平形四边形的底和高：";
//	cin >> a >> h;
//
//	double area = parallelogramArea(a, h);  // 调用函数
//
//	cout << "area = " << area << endl;
//	return 0;
//}


///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
//int fact(int n);
//int fact(int n) //函数定义，求n!
//{
//    if (n == 0) return 1; // 0! = 1
//    int a = 1;
//    for (int i = 1; i <= n; ++i) { // 从1开始计算
//        a *= i; // 计算阶乘
//    }
//    return a;
//}
//
//int main()
//{
//    int m, k, t, result;
//    cout << "请输入m k：";
//    cin >> m >> k;
//    if (m < k) {
//        t = m; m = k; k = t; // 确保 m >= k
//    }
//    result = fact(m) / (fact(k) * fact(m - k)); // 计算组合数
//    cout << m << " 个数中取出 " << k << " 个数的组合有 " << result << " 种\n";
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
///*注意代码只可以在“Begin……End”输入，不得修改除“Begin……End”外的任何代码。*/
//int prime(int m); //函数声明 
//
//int main()
//{
//	int n;
//
//	cout << "请输入 n：";
//	cin >> n;
//
//	if (prime(n) == 1)    //删除“_____”，补充完整程序
//		cout << n << " 是素数\n";
//	else
//		cout << n << " 不是素数\n";
//}
///*******************Begin********************/
//int prime(int m)
//{
//
//    if (m <= 1) return 0; 
//    if (m == 2) return 1; 
//    if (m % 2 == 0) return 0; 
//
//    int limit = sqrt(m); 
//    for (int i = 3; i <= limit; i += 2) {
//        if (m % i == 0) {
//            return 0; 
//        }
//    }
//    return 1;
//}


//#include <iostream>
//#include <iomanip> // 用于设置输出格式
//using namespace std;
//
///* 函数声明 */
//int fact(int n); // 计算 n 的阶乘
//double sum(int x, int y); // 计算 x 到 y 的 1/i! 的和
//
//int main()
//{
//    int x, y;
//
//    // 第一组输入
//    cout << "请输入范围x y：";
//    cin >> x >> y;
//
//    // 确保 x 小于等于 y
//    if (x > y) {
//        int temp = x;
//        x = y;
//        y = temp;
//    }
//
//    // 计算并输出结果
//    double result = sum(x, y); // 调用 sum 函数
//    cout << fixed << setprecision(5); // 设置输出格式，保留五位小数
//    cout << "结果为：" << result << endl; // 输出结果
//
//    // 第二组输入
//    cout << "请输入范围x y：";
//    cin >> x >> y;
//
//    // 确保 x 小于等于 y
//    if (x > y) {
//        int temp = x;
//        x = y;
//        y = temp;
//    }
//
//    // 计算并输出结果
//    result = sum(x, y); // 调用 sum 函数
//    cout << "结果为：" << result << endl; // 输出结果
//
//    return 0;
//}
//
//// 定义：计算 x 到 y 的 1/i! 的和
//double sum(int x, int y)
//{
//    double total = 0.0; // 用于累加和
//    for (int i = x; i <= y; ++i) {
//        total += 1.0 / fact(i); // 累加 1/i!
//    }
//    return total;
//}
//
//// 定义：递归求 n! 函数
//int fact(int n) {
//    if (n == 0 || n == 1) return 1; // 基本情况
//    return n * fact(n - 1); // 递归调用
//}


//#include <iostream>
//using namespace std;
//
//// 函数声明
//int cow(int n); // 计算第 n 年的母牛数量
//
//int main() {
//    int n;
//    cout << "输入年份 n：";
//    cin >> n;
//
//    // 调用 cow 函数
//    int result = cow(n);
//    cout << "第 " << n << " 年母牛数为：" << result << endl;
//
//    return 0;
//}
//
///*******************Begin*******************/
//int cow(int n) {
//    if (n == 1 || n == 2 || n == 3) return 1; // 第1、2、3年母牛数为1
//    return cow(n - 1) + cow(n - 3); // 第n年母牛数的递推公式
//}
///*******************End*******************/





//#include <iostream>
//using namespace std;
//
///************* Begin ************/
//
//int isLetter(char c, int& letter) {
//    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//        letter++;
//    }
//    return letter;
//}
//
//int isDigit(char c, int& digit) {
//    if (c >= '0' && c <= '9') {
//        digit++;
//    }
//    return digit;
//}
//
//int isSpace(char c, int& space) {
//    if (c == ' ') {
//        space++;
//    }
//    return space;
//}

/************* End ************/

//int main()
//{
//    char ch;
//    int letter = 0, digit = 0, space = 0, others = 0;
//    cout << "请输入一行字符，回车键结束（使用Ctrl+D结束输入）：\n";
//    while ((ch = getchar()) != EOF) {
//        isLetter(ch, letter); // 修改为isLetter
//        isDigit(ch, digit);   // 修改为isDigit
//        isSpace(ch, space);   // 修改为isSpace
//
//        // 统计其他字符的数量
//        if (!isLetter(ch, letter) && !isDigit(ch, digit) && !isSpace(ch, space)) {
//            others++;
//        }
//    }
//
//    cout << "英文字母：" << letter << endl    //输出
//        << "数字：" << digit << endl
//        << "空格：" << space << endl
//        << "其他字符：" << others << endl;
//
//    return 0;
//}
//


//#include <iostream>
//using namespace std;

/************* Begin ************/

//void isLetter(char c, int& letter) {
//    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//        letter++;
//    }
//}
//
//void isDigit(char c, int& digit) {
//    if (c >= '0' && c <= '9') {
//        digit++;
//    }
//}
//
//void isSpace(char c, int& space) {
//    if (c == ' ') {
//        space++;
//    }
///************* End ************/
//
//    void main();
//
//    {
//        char ch;
//        int letter = 0, digit = 0, space = 0, others = 0;
//
//        cout << "请输入一行字符，回车键结束（使用Ctrl+D结束输入）：\n";
//
//        while ((ch = getchar()) != '\n' && ch != EOF) { // 结束条件为换行或EOF
//            isLetter(ch, letter);
//            isDigit(ch, digit);
//            isSpace(ch, space);
//
//            // 统计其他字符的数量
//            if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
//                (ch >= '0' && ch <= '9') || ch == ' ')) {
//                others++;
//            }
//        }
//
//        cout << "英文字母：" << letter << endl
//            << "数字：" << digit << endl
//            << "空格：" << space << endl
//            << "其他字符：" << others << endl;
//
//        return;
//    }
//


#include <iostream>
#include <string>

using namespace std;

// 检查字符是否为英文字母
inline void isLetter(char c, int& letter) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        letter++;
    }
}

// 检查字符是否为数字
inline void isDigit(char c, int& digit) {
    if (c >= '0' && c <= '9') {
        digit++;
    }
}

// 检查字符是否为空格
inline void isSpace(char c, int& space) {
    if (c == ' ') {
        space++;
    }
}

int main() {
    string input;
    cout << "请输入一个字符串：";
    getline(cin, input); // 使用 getline 允许输入包含空格的字符串

    int letterCount = 0, digitCount = 0, spaceCount = 0, othersCount = 0;

    for (char c : input) {
        // 调用内联函数统计字符
        isLetter(c, letterCount);
        isDigit(c, digitCount);
        isSpace(c, spaceCount);
        // 统计其他字符
        if (!isalpha(c) && !isdigit(c) && !isspace(c)) {
            othersCount++;
        }
    }

    // 输出统计结果
    cout << "英文字母：" << letterCount << endl
        << "数字：" << digitCount << endl
        << "空格：" << spaceCount << endl
        << "其他字符：" << othersCount << endl;

    return 0;
}
