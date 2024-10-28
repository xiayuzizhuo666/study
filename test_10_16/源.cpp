//// 包含两种I/O库，可以使用任一种输入输出方式
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//// 函数printMonth：按要求的格式打印某年某月的日历
//// 参数：year-年，month-月
//// 返回值：无
//void printMonth(int year, int month);
//// leapYear：判断闰年
//// 参数：y-年
//// 返回值：1-是闰年，0-不是闰年
//int leapYear(int y)
//{
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//        return 1;
//    return 0;
//}
//// 函数whatDay:计算某年某月的1号是星期几
//// 参数：year-年，month-月
//// 返回值：1到7--星期1到星期日
//int whatDay(int year, int month)
//{
//    // 1年月日是星期一
//    int w = 1;
//    int i;
//    // 1到year-1都是全年
//    for (i = 1; i < year; i++)
//    {
//        if (leapYear(i))
//            w += 366;
//        else
//            w += 365;
//    }
//    switch (month)
//    {
//    case 12: // 加月的
//        w += 30;
//    case 11: // 加月的
//        w += 31;
//    case 10: // 加月的
//        w += 30;
//    case 9:  // 加月的
//        w += 31;
//    case 8:  // 加月的
//        w += 31;
//    case 7:  // 加月的
//        w += 30;
//    case 6:  // 加月的
//        w += 31;
//    case 5:  // 加月的
//        w += 30;
//    case 4:  // 加月的
//        w += 31;
//    case 3:  // 加月的
//        if (leapYear(year))
//            w += 29;
//        else
//            w += 28;
//    case 2:  // 加月的天
//        w += 31;
//    case 1:  // 1月不加了
//        ;
//    }
//    // 得到-6，其中为星期天
//    w = w % 7;
//    // 调整星期天
//    if (w == 0)
//        w = 7;
//    return w;
//}
//// 请在下面补充代码，实现函数printMonth
///*************** Begin **************/
//// 函数days：计算某年某月有多少天
//// 参数：year-年，month-月
//// 返回值：该年该月的天数
//void printMonth(int year, int month) {
//    // 打印表头
//    cout << "  一  二  三  四  五  六  日" << endl;
//
//    // 每月天数
//    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//月份数组
//    if (leapYear(year)) {
//        daysInMonth[1] = 29; // 闰年二月，特殊条件
//    }
//
//    // 计算1号是星期几
//    int startDay = whatDay(year, month);
//
//    // 打印日历
//    int day = 1;
//    int totalDays = daysInMonth[month - 1];
//
//    // 打印1号前的空位
//    for (int i = 1; i < startDay; i++) {
//        cout << "    ";
//    }
//
//    // 打印每一天
//    for (int i = startDay; day <= totalDays; i++) {
//        if (i > 7) {
//            i = 1; // 换行
//            cout << endl;
//        }
//        printf("%4d", day);
//        day++;
//    }
//    cout << endl;
//}
//
//
//
//
///*************** End **************/
//int main()
//{
//    // 年、月
//    int y, m;
//    // 输入年月
//    cin >> y >> m;
//    // 输出该年月的日历
//    printMonth(y, m);
//    return 0;
//}
#include <iostream>
using namespace std;
// 递归函数splitNum：顺序输出n的各位数字，每个数字占一行
// 返回值：无
void splitNum(unsigned int n)
{
    // 请在这里补充代码，实现递归函数splitNum
    /********** Begin *********/



    /********** End **********/
}
int main()
{
    unsigned n;
    // 输入正整数n
    cin >> n;
    // 调用splitNum函数，顺序输出n的各位数字
    splitNum(n);
    return 0;
}