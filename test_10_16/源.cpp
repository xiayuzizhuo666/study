//// ��������I/O�⣬����ʹ����һ�����������ʽ
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//// ����printMonth����Ҫ��ĸ�ʽ��ӡĳ��ĳ�µ�����
//// ������year-�꣬month-��
//// ����ֵ����
//void printMonth(int year, int month);
//// leapYear���ж�����
//// ������y-��
//// ����ֵ��1-�����꣬0-��������
//int leapYear(int y)
//{
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//        return 1;
//    return 0;
//}
//// ����whatDay:����ĳ��ĳ�µ�1�������ڼ�
//// ������year-�꣬month-��
//// ����ֵ��1��7--����1��������
//int whatDay(int year, int month)
//{
//    // 1������������һ
//    int w = 1;
//    int i;
//    // 1��year-1����ȫ��
//    for (i = 1; i < year; i++)
//    {
//        if (leapYear(i))
//            w += 366;
//        else
//            w += 365;
//    }
//    switch (month)
//    {
//    case 12: // ���µ�
//        w += 30;
//    case 11: // ���µ�
//        w += 31;
//    case 10: // ���µ�
//        w += 30;
//    case 9:  // ���µ�
//        w += 31;
//    case 8:  // ���µ�
//        w += 31;
//    case 7:  // ���µ�
//        w += 30;
//    case 6:  // ���µ�
//        w += 31;
//    case 5:  // ���µ�
//        w += 30;
//    case 4:  // ���µ�
//        w += 31;
//    case 3:  // ���µ�
//        if (leapYear(year))
//            w += 29;
//        else
//            w += 28;
//    case 2:  // ���µ���
//        w += 31;
//    case 1:  // 1�²�����
//        ;
//    }
//    // �õ�-6������Ϊ������
//    w = w % 7;
//    // ����������
//    if (w == 0)
//        w = 7;
//    return w;
//}
//// �������油����룬ʵ�ֺ���printMonth
///*************** Begin **************/
//// ����days������ĳ��ĳ���ж�����
//// ������year-�꣬month-��
//// ����ֵ��������µ�����
//void printMonth(int year, int month) {
//    // ��ӡ��ͷ
//    cout << "  һ  ��  ��  ��  ��  ��  ��" << endl;
//
//    // ÿ������
//    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//�·�����
//    if (leapYear(year)) {
//        daysInMonth[1] = 29; // ������£���������
//    }
//
//    // ����1�������ڼ�
//    int startDay = whatDay(year, month);
//
//    // ��ӡ����
//    int day = 1;
//    int totalDays = daysInMonth[month - 1];
//
//    // ��ӡ1��ǰ�Ŀ�λ
//    for (int i = 1; i < startDay; i++) {
//        cout << "    ";
//    }
//
//    // ��ӡÿһ��
//    for (int i = startDay; day <= totalDays; i++) {
//        if (i > 7) {
//            i = 1; // ����
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
//    // �ꡢ��
//    int y, m;
//    // ��������
//    cin >> y >> m;
//    // ��������µ�����
//    printMonth(y, m);
//    return 0;
//}
#include <iostream>
using namespace std;
// �ݹ麯��splitNum��˳�����n�ĸ�λ���֣�ÿ������ռһ��
// ����ֵ����
void splitNum(unsigned int n)
{
    // �������ﲹ����룬ʵ�ֵݹ麯��splitNum
    /********** Begin *********/



    /********** End **********/
}
int main()
{
    unsigned n;
    // ����������n
    cin >> n;
    // ����splitNum������˳�����n�ĸ�λ����
    splitNum(n);
    return 0;
}