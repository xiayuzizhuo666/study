//#include <iostream>
//#include <cmath>
//using namespace std;
/*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/


//double parallelogramArea(double x, double y)
//{
//	return (x * y);
//
//}
//
//int main() {
//	double a, h;
//	cout << "������ƽ���ı��εĵ׺͸ߣ�";
//	cin >> a >> h;
//
//	double area = parallelogramArea(a, h);  // ���ú���
//
//	cout << "area = " << area << endl;
//	return 0;
//}


///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
//int fact(int n);
//int fact(int n) //�������壬��n!
//{
//    if (n == 0) return 1; // 0! = 1
//    int a = 1;
//    for (int i = 1; i <= n; ++i) { // ��1��ʼ����
//        a *= i; // ����׳�
//    }
//    return a;
//}
//
//int main()
//{
//    int m, k, t, result;
//    cout << "������m k��";
//    cin >> m >> k;
//    if (m < k) {
//        t = m; m = k; k = t; // ȷ�� m >= k
//    }
//    result = fact(m) / (fact(k) * fact(m - k)); // ���������
//    cout << m << " ������ȡ�� " << k << " ����������� " << result << " ��\n";
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
//int prime(int m); //�������� 
//
//int main()
//{
//	int n;
//
//	cout << "������ n��";
//	cin >> n;
//
//	if (prime(n) == 1)    //ɾ����_____����������������
//		cout << n << " ������\n";
//	else
//		cout << n << " ��������\n";
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
//#include <iomanip> // �������������ʽ
//using namespace std;
//
///* �������� */
//int fact(int n); // ���� n �Ľ׳�
//double sum(int x, int y); // ���� x �� y �� 1/i! �ĺ�
//
//int main()
//{
//    int x, y;
//
//    // ��һ������
//    cout << "�����뷶Χx y��";
//    cin >> x >> y;
//
//    // ȷ�� x С�ڵ��� y
//    if (x > y) {
//        int temp = x;
//        x = y;
//        y = temp;
//    }
//
//    // ���㲢������
//    double result = sum(x, y); // ���� sum ����
//    cout << fixed << setprecision(5); // ���������ʽ��������λС��
//    cout << "���Ϊ��" << result << endl; // ������
//
//    // �ڶ�������
//    cout << "�����뷶Χx y��";
//    cin >> x >> y;
//
//    // ȷ�� x С�ڵ��� y
//    if (x > y) {
//        int temp = x;
//        x = y;
//        y = temp;
//    }
//
//    // ���㲢������
//    result = sum(x, y); // ���� sum ����
//    cout << "���Ϊ��" << result << endl; // ������
//
//    return 0;
//}
//
//// ���壺���� x �� y �� 1/i! �ĺ�
//double sum(int x, int y)
//{
//    double total = 0.0; // �����ۼӺ�
//    for (int i = x; i <= y; ++i) {
//        total += 1.0 / fact(i); // �ۼ� 1/i!
//    }
//    return total;
//}
//
//// ���壺�ݹ��� n! ����
//int fact(int n) {
//    if (n == 0 || n == 1) return 1; // �������
//    return n * fact(n - 1); // �ݹ����
//}


//#include <iostream>
//using namespace std;
//
//// ��������
//int cow(int n); // ����� n ���ĸţ����
//
//int main() {
//    int n;
//    cout << "������� n��";
//    cin >> n;
//
//    // ���� cow ����
//    int result = cow(n);
//    cout << "�� " << n << " ��ĸţ��Ϊ��" << result << endl;
//
//    return 0;
//}
//
///*******************Begin*******************/
//int cow(int n) {
//    if (n == 1 || n == 2 || n == 3) return 1; // ��1��2��3��ĸţ��Ϊ1
//    return cow(n - 1) + cow(n - 3); // ��n��ĸţ���ĵ��ƹ�ʽ
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
//    cout << "������һ���ַ����س���������ʹ��Ctrl+D�������룩��\n";
//    while ((ch = getchar()) != EOF) {
//        isLetter(ch, letter); // �޸�ΪisLetter
//        isDigit(ch, digit);   // �޸�ΪisDigit
//        isSpace(ch, space);   // �޸�ΪisSpace
//
//        // ͳ�������ַ�������
//        if (!isLetter(ch, letter) && !isDigit(ch, digit) && !isSpace(ch, space)) {
//            others++;
//        }
//    }
//
//    cout << "Ӣ����ĸ��" << letter << endl    //���
//        << "���֣�" << digit << endl
//        << "�ո�" << space << endl
//        << "�����ַ���" << others << endl;
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
//        cout << "������һ���ַ����س���������ʹ��Ctrl+D�������룩��\n";
//
//        while ((ch = getchar()) != '\n' && ch != EOF) { // ��������Ϊ���л�EOF
//            isLetter(ch, letter);
//            isDigit(ch, digit);
//            isSpace(ch, space);
//
//            // ͳ�������ַ�������
//            if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
//                (ch >= '0' && ch <= '9') || ch == ' ')) {
//                others++;
//            }
//        }
//
//        cout << "Ӣ����ĸ��" << letter << endl
//            << "���֣�" << digit << endl
//            << "�ո�" << space << endl
//            << "�����ַ���" << others << endl;
//
//        return;
//    }
//


#include <iostream>
#include <string>

using namespace std;

// ����ַ��Ƿ�ΪӢ����ĸ
inline void isLetter(char c, int& letter) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        letter++;
    }
}

// ����ַ��Ƿ�Ϊ����
inline void isDigit(char c, int& digit) {
    if (c >= '0' && c <= '9') {
        digit++;
    }
}

// ����ַ��Ƿ�Ϊ�ո�
inline void isSpace(char c, int& space) {
    if (c == ' ') {
        space++;
    }
}

int main() {
    string input;
    cout << "������һ���ַ�����";
    getline(cin, input); // ʹ�� getline ������������ո���ַ���

    int letterCount = 0, digitCount = 0, spaceCount = 0, othersCount = 0;

    for (char c : input) {
        // ������������ͳ���ַ�
        isLetter(c, letterCount);
        isDigit(c, digitCount);
        isSpace(c, spaceCount);
        // ͳ�������ַ�
        if (!isalpha(c) && !isdigit(c) && !isspace(c)) {
            othersCount++;
        }
    }

    // ���ͳ�ƽ��
    cout << "Ӣ����ĸ��" << letterCount << endl
        << "���֣�" << digitCount << endl
        << "�ո�" << spaceCount << endl
        << "�����ַ���" << othersCount << endl;

    return 0;
}
