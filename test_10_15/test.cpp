//#include <iostream>
//using namespace std;
//
//void whatTime(int secs, int& h, int& m, int& s)
//{
//    // 将秒数转换为小时、分钟、秒
//    h = secs / 3600;  // 1小时等于3600秒
//    secs %= 3600;     // 剩下的秒数
//    m = secs / 60;    // 1分钟等于60秒
//    s = secs % 60;    // 剩下的秒数就是秒部分
//}
//
//int main()
//{
//    // secs秒表上的秒数
//    int secs;
//    // 当前时间:h-小时，m-分，s-秒
//    int h, m, s;
//    // 输入秒表上的秒数
//    cin >> secs;
//    // 计算当前时间
//    whatTime(secs, h, m, s);
//    // 输出当前时间
//    cout << h << ":" << m << ":" << s << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//// 函数leapYear：判断是否是闰年
//int leapYear(int y) {
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//        return 1;
//    return 0;
//}
//
//// 函数whatDay：计算某年某月的1号是星期几
//int whatDay(int year, int month) {
//    // 每个月的天数（平年）
//    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    // 从公元1年1月1日开始，累加到目标年份的1月1日
//    int totalDays = 0;
//
//    // 累加从公元1年到year-1年的天数
//    for (int y = 1; y < year; y++) {
//        totalDays += leapYear(y) ? 366 : 365;
//    }
//
//    // 累加从1月到目标month前一个月的天数
//    for (int m = 1; m < month; m++) {
//        totalDays += daysInMonth[m - 1]; // 数组从0开始，月份从1开始
//        if (m == 2 && leapYear(year)) {
//            totalDays += 1; // 闰年2月多1天
//        }
//    }
//
//    // 1月1日是星期一，所以我们从1开始计算
//    int dayOfWeek = (totalDays + 1) % 7;
//
//    // 1代表星期一，7代表星期日
//    return dayOfWeek == 0 ? 7 : dayOfWeek;
//}
//
//int main() {
//    // 年、月、星期几
//    int y, m, xq;
//    // 输入年月
//    cin >> y >> m;
//    // 计算星期几
//    xq = whatDay(y, m);
//    // 输出结果
//    cout << y << "年" << m << "月1日是星期";
//    if (xq == 7)
//        cout << "日" << endl;
//    else
//        cout << xq << endl;
//    return 0;
//}

/*测试说明
本关的测试过程如下：

平台编译 step3 / whatDay.cpp ，然后链接相关程序库并生成 exe 可执行程序；
平台运行 exe 该可执行程序，并以标准输入方式提供测试输入；
平台获取该可执行程序的输出后，然后将其与预期输出对比，如果一致则测试通过；否则测试失败。
以下是平台对 step3 / whatDay.cpp 的测试样例：

测试输入：
2016 1
预期输出：
2016年1月1日是星期5

测试输入：
2017 7
预期输出：
2017年7月1日是星期6*/

#include <iostream>
using namespace std;

// 函数leapYear：判断是否是闰年
int leapYear(int y) {
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// 函数whatDay：计算某年某月的1号是星期几
int whatDay(int year, int month) {
    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int totalDays = 0;
    for (int y = 1; y < year; y++) {
        totalDays += leapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        totalDays += daysInMonth[m - 1];
        if (m == 2 && leapYear(year)) {
            totalDays += 1;
        }
    }
    int dayOfWeek = (totalDays + 1) % 7;
    return dayOfWeek == 0 ? 7 : dayOfWeek;
}

// 函数printMonth：按要求的格式打印某年某月的日历
void printMonth(int year, int month) {
    // 打印表头
    cout << "  一  二  三  四  五  六  日" << endl;

    // 每月天数
    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (leapYear(year)) {
        daysInMonth[1] = 29; // 闰年二月是29天
    }

    // 计算1号是星期几
    int startDay = whatDay(year, month);

    // 打印日历
    int day = 1;
    int totalDays = daysInMonth[month - 1];

    // 打印1号前的空位
    for (int i = 1; i < startDay; i++) {
        cout << "    ";
    }

    // 打印每一天
    for (int i = startDay; day <= totalDays; i++) {
        if (i > 7) {
            i = 1; // 换行
            cout << endl;
        }
        printf("%4d", day);
        day++;
    }
    cout << endl;
}

int main() {
    int year, month;
    cin >> year >> month;
    printMonth(year, month);
    return 0;
}
