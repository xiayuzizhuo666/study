//#include <iostream>
//
//#include <iomanip>
//
//using namespace std;
//const long double n = 3.1415926; //ɾ����_____"�����Ƴ���
//
//int main() {
//    int r1;
//    double r2; //ɾ����_____"�����Ƴ���
//    cout << "please input two numbers:\n";
//    cin >> r1 >> r2;
//    long double c1 = 2 * n * r1;
//    long double c2 = 2 * n * r2;
//
//    cout << setprecision(8) << " " << n << setw(10) << r1 <<
//        setw(15) << setprecision(10) << c1 << endl;
//    cout << setprecision(8) << " " << n << setw(10) <<
//        setprecision(6) << r2 << setw(15) << setprecision(9) << c2 << endl;
//    //���Ƴ�������������
//    return 0;
//
//}
// 
// 
// 
// 
// 
// 
// 
//#include <iostream>
//
//#include <iomanip>
// //ɾ��"_____________________"����������ͷ�ļ�
//using namespace std;
//int main()
//{
//    bool isReady;
//    int intNum;
//    float denominator, numerator;
//    double dblNum;
//    char ch1, ch2, ch3;
//
//    //���ӱ�������
//
//    cout << "----------�߼������ݵ��������------------\n";
//    cout << "Are you ready?(1/0)��";
//    cin >> isReady;
//    cout << boolalpha << "Your answer is " << isReady << endl;
//
//    //���Ӷ�Ӧʵ��
//
//    cout << "\n-----------�������ݵ��������-------------\n";
//    cout << "number of apples��";
//    cin >> intNum;
//    cout << showbase << "oct is " << oct << intNum << " "
//        "hex is " << hex << intNum << endl;
//    //���Ӷ�Ӧʵ��
//
//
//    cout << "\n----------���������ݵ��������-----------\n";
//    cout << "input denominator and numerator��";
//    cin >> denominator >> numerator;
//    cout << showpos << "denominator = " << denominator
//        << " " << "numerator = " << numerator << noshowpos << endl;
//    dblNum = denominator / numerator;
//    cout << "denominator/numerator = "
//        << denominator / numerator << endl << fixed
//        << "no decimal places is " << setprecision(0) << dblNum
//        << endl << "4 decimal places is " << setprecision(4)
//        << dblNum << endl << scientific << "6 decimal places is "
//        << setprecision(6)
//        << dblNum << endl;
//    //���Ӷ�Ӧʵ��
//
//
//    cout << "\n----------�ַ������ݵ��������------------\n";
//    cout << "input ch1��ch2��ch3��";
//    cin >> ch1 >> ch2 >> ch3;
//    cout << setfill('*') << setw(3) << ch1 << ' '
//        << left << setw(4) << ch2 << ' '
//        << right << setw(5) << ch3 << endl;
//    //���Ӷ�Ӧʵ��
//
//
//    return 0;
//}
// 
// 
// 
// 
//#include <iostream>
//
//using namespace std;
//const int PEP = 30; //ɾ����_____"�����Ƴ���
//int main() {
//    int iApp;
//    cin >> iApp;
//    int everyboay = iApp / PEP;
//    cout << "������ƻ������" << PEP << "���ˣ�" <<
//        "ÿ�˿ɷ�" << everyboay << "����" << endl;
//    return 0;
//
//    //���ƽ��������ֵ�ƻ����(����ֱ�����)
//
//}
//
//
//
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int data;
//    data = 32768;
//    cout << "data = " << data << endl;
//    long double data1, data2;
//    data1 = 123456.789e3;
//    data2 = data1 + 20.0f;
//    cout << fixed << "data1 = " << data1 << endl;
//    cout << "data2 = " << data2 << endl;
//
//    char ch1, ch2;
//    ch1 = 'A';
//    ch2 = 65;
//    cout << "ch1 = " << ch1 << ",ch2 = " << ch2 << endl;
//    ch1 = 'A' + 32;
//    ch2 = ch1 + 1;
//    cout << "ch1 = " << ch1 << ",ch2 = " << ch2 << endl;
//
//    bool isReady = true;
//    bool start = false;
//    cout << "isReady = " << isReady << ",start = " << start << endl;
//    isReady = 0;
//    start = -100;
//    cout << "isReady = " << isReady << ",start = " << start << endl;
//
//
//
//
//    return 0;
//}
//
//
//
//
//#include <iostream>
//
//using namespace std;
//int main() {
//	double r, area;
//	cout << "������Բ�İ뾶��";
//	cin >> r;
//	area = 3.14159 * r * r;
//	cout << "Բ�������" << area << endl;
//
//	return 0;
//}



