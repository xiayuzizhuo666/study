//#include <iostream>
//using namespace std;
//int main()
//{
//	int ia = 2, ib = 3, ic = 0; double d = 4.5;
//
//	ia *= 2 * sizeof(long);
//	cout << ia << endl;//16
//	!ic ? ia++ : ib;
//	cout << ia << ic << ib << endl;//303
//	ia < ib && !ia + 1 && ic;
//	cout << ia << ib << ic << endl;//230
//	cout <<
//		((float)(ia + ib) / 2 + (int)d % 2);//2.5
//	ia + 1, ic = 6;
//	cout << ia + ic << endl;//8
//
//	return 0;
//}



//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//    double a, b, c, s, area;
//
//    /*********Begin*********/
//    cout << "���������������ߣ�" << endl;
//    cin >> a >> b >> c;
//
//
//    if (a + b > c && a + c > b && b + c > a) {
//        cout << "a=" << fixed << setprecision(3) << a << ",b=" << b << ",c=" << c << endl;
//        s = (a + b + c) / 2;
//        area = sqrt(s * (s - a) * (s - b) * (s - c));
//
//        cout << fixed << setprecision(3) << area << endl;
//    }
//    else {
//
//        cout << "����������޷���������" << endl;
//    }
//
//    /*********End**********/
//    return 0;
//}



//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    /*********** Begin **********/
//    float x, y;
//    cin >> x;
//\
//        if (x < 1)
//            y = x;
//        else if (1 <= x && x < 10)
//            y = 2 * x - 1;
//        else
//            y = 3 * x - 11;
//
//
//
//    cout << "x = ";
//    cout << "y = " << y << endl;
//
//    /*********** End **********/
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main()
//{
//    /********* Begin **********/
//    float obj1, obj2;
//    char op;
//    cout << "������������ʽ��\n";
//    cin >> obj1 >> op >> obj2;
//    switch (op)
//    {
//    case '+':
//        cout << obj1 << "+" << obj2 << "=" << obj1 + obj2 << endl;
//        break;
//    case '-':
//        cout << obj1 << "-" << obj2 << "=" << obj1 - obj2 << endl;
//        break;
//    case '*':
//        cout << obj1 << "*" << obj2 << "=" << obj1 * obj2 << endl;
//        break;
//    case '/':
//        if (obj2 == 0)
//            cout << "���������󣬷�ĸ����Ϊ0��" << endl;
//        else
//            cout << obj1 << "/" << obj2 << "=" << obj1 / obj2 << endl;
//        break;
//    default:
//        cout << "��������" << endl;
//
//    }
//
//
//    /********** End **********/
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main() {
//    int year, month, day;
//    cout << "��������ݺ��·� year month��" << endl;
//    cin >> year >> month;
//
//    // �ж��·��Ƿ���Ч
//    if (month < 1 || month > 12) {
//        cout << "Error!" << endl;
//        return 0;  // ��������
//    }
//
//    // �ж�����
//    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//
//    // ʹ�� switch ����ж�ÿ���µ�����
//    switch (month) {
//    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//        day = 31;
//        break;
//    case 4: case 6: case 9: case 11:
//        day = 30;
//        break;
//    case 2:
//        day = isLeapYear ? 29 : 28;  // ����29�죬ƽ��28��
//        break;
//    default:
//        cout << "Error!" << endl;
//        return 0;
//    }
//
//    // ������
//    cout << year << "��" << month << "����" << day << "��" << endl;
//
//    return 0;
//}



//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	double a ,b,c;
//	cin >> a >> b>>c;
//	//cout << sqrt(a * a + b * b) / (2 * c) << endl;
//
//	//cout << abs((a + b) * (a - c) + 2.5) << endl;
//	double x, y;
//	cin >> x >> y;
//	cout << sin(x) / (2 * y) + pow(y, x);
//	return 0;
//}

// �ж�һ�����Ƿ�Ϊ"����"
bool isGoodNumber(int n) {
    std::string numStr = std::to_string(n);
    for (size_t i = 0; i < numStr.size(); ++i) {
        if (i % 2 == 0 && (numStr[i] - '0') % 2 != 1) {  // ż��λ��������
            return false;
        }
        if (i % 2 == 1 && (numStr[i] - '0') % 2 != 0) {  // ����λ����ż��
            return false;
        }
    }
    return true;
}

// ����� 1 �� n �ж��ٸ�"����"
int countGoodNumbers(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (isGoodNumber(i)) {
            count++;
        }
    }
    return count;
}



#include <iostream>
using namespace std;
int main()
{
    int n;
    std::cout << "������һ������ n: ";
    std::cin >> n;
    int result = countGoodNumbers(n);
    std::cout << "�� 1 �� " << n << " һ���� " << result << " ������" << std::endl;


	return 0;
}