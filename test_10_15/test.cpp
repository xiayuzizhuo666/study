//#include <iostream>
//using namespace std;
//
//void whatTime(int secs, int& h, int& m, int& s)
//{
//    // ������ת��ΪСʱ�����ӡ���
//    h = secs / 3600;  // 1Сʱ����3600��
//    secs %= 3600;     // ʣ�µ�����
//    m = secs / 60;    // 1���ӵ���60��
//    s = secs % 60;    // ʣ�µ����������벿��
//}
//
//int main()
//{
//    // secs����ϵ�����
//    int secs;
//    // ��ǰʱ��:h-Сʱ��m-�֣�s-��
//    int h, m, s;
//    // ��������ϵ�����
//    cin >> secs;
//    // ���㵱ǰʱ��
//    whatTime(secs, h, m, s);
//    // �����ǰʱ��
//    cout << h << ":" << m << ":" << s << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//// ����leapYear���ж��Ƿ�������
//int leapYear(int y) {
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//        return 1;
//    return 0;
//}
//
//// ����whatDay������ĳ��ĳ�µ�1�������ڼ�
//int whatDay(int year, int month) {
//    // ÿ���µ�������ƽ�꣩
//    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    // �ӹ�Ԫ1��1��1�տ�ʼ���ۼӵ�Ŀ����ݵ�1��1��
//    int totalDays = 0;
//
//    // �ۼӴӹ�Ԫ1�굽year-1�������
//    for (int y = 1; y < year; y++) {
//        totalDays += leapYear(y) ? 366 : 365;
//    }
//
//    // �ۼӴ�1�µ�Ŀ��monthǰһ���µ�����
//    for (int m = 1; m < month; m++) {
//        totalDays += daysInMonth[m - 1]; // �����0��ʼ���·ݴ�1��ʼ
//        if (m == 2 && leapYear(year)) {
//            totalDays += 1; // ����2�¶�1��
//        }
//    }
//
//    // 1��1��������һ���������Ǵ�1��ʼ����
//    int dayOfWeek = (totalDays + 1) % 7;
//
//    // 1��������һ��7����������
//    return dayOfWeek == 0 ? 7 : dayOfWeek;
//}
//
//int main() {
//    // �ꡢ�¡����ڼ�
//    int y, m, xq;
//    // ��������
//    cin >> y >> m;
//    // �������ڼ�
//    xq = whatDay(y, m);
//    // ������
//    cout << y << "��" << m << "��1��������";
//    if (xq == 7)
//        cout << "��" << endl;
//    else
//        cout << xq << endl;
//    return 0;
//}

/*����˵��
���صĲ��Թ������£�

ƽ̨���� step3 / whatDay.cpp ��Ȼ��������س���Ⲣ���� exe ��ִ�г���
ƽ̨���� exe �ÿ�ִ�г��򣬲��Ա�׼���뷽ʽ�ṩ�������룻
ƽ̨��ȡ�ÿ�ִ�г���������Ȼ������Ԥ������Աȣ����һ�������ͨ�����������ʧ�ܡ�
������ƽ̨�� step3 / whatDay.cpp �Ĳ���������

�������룺
2016 1
Ԥ�������
2016��1��1��������5

�������룺
2017 7
Ԥ�������
2017��7��1��������6*/

#include <iostream>
using namespace std;

// ����leapYear���ж��Ƿ�������
int leapYear(int y) {
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// ����whatDay������ĳ��ĳ�µ�1�������ڼ�
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

// ����printMonth����Ҫ��ĸ�ʽ��ӡĳ��ĳ�µ�����
void printMonth(int year, int month) {
    // ��ӡ��ͷ
    cout << "  һ  ��  ��  ��  ��  ��  ��" << endl;

    // ÿ������
    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (leapYear(year)) {
        daysInMonth[1] = 29; // ���������29��
    }

    // ����1�������ڼ�
    int startDay = whatDay(year, month);

    // ��ӡ����
    int day = 1;
    int totalDays = daysInMonth[month - 1];

    // ��ӡ1��ǰ�Ŀ�λ
    for (int i = 1; i < startDay; i++) {
        cout << "    ";
    }

    // ��ӡÿһ��
    for (int i = startDay; day <= totalDays; i++) {
        if (i > 7) {
            i = 1; // ����
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
