//#include <iostream>
//using namespace std;
///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
//
//int main()
//{
//    int n=100;
//    /************* Begin ************/
//    int count = 0;
//    for (int n = 100; n < 1000; n++)
//    {
//        int hundreds = n / 100; // ��λ
//        int tens = (n / 10) % 10; // ʮλ
//        int units = n % 10; // ��λ
//        if (hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == n) 
//            {
//                cout << n << endl; // ���ˮ�ɻ���
//                count++; // ����
//            }
//        }
//        /************* End ************/
//        cout << "100-1000��ˮ�ɻ����У�" << count << "��";
//        return 0;
//
//    }



//#include <iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
///************* Begin ************/
///*������ȱͷ�ļ�*/
//int main()
//{
//    int den = 1, sign = 1;
//    double item = 1.0, pi = 0.0;
//    while (fabs(item) >= 1e-8)
//    {
//        pi = item;
//        den += 2;
//        sign = -sign;
//        item = sign / double(den);
//    }
//    cout << "pi = " << fixed << setprecision(7) << (pi * 4) << endl;
//
//    /************* End ************/
//    return 0;
//}
//


//#include <iostream>
//#include <cmath>
//#include<iomanip>
//using namespace std;
///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
///************* Begin ************/
///*������ȱͷ�ļ�*/
//
//
//int main()
//{
//
//	double sum = 0, solo = 1;
//	int i = 1;
//	while (fabs(i / solo) > 1e-8)
//	{
//		sum = sum + i / solo;
//		solo = solo + 2;
//		i = -i;
//	}
//	cout << fixed << setprecision(7) << "pi = " << 4 * sum;
//
//	/************* End ************/
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
//
//int main() {
//    /************* Begin ************/
//    int f1 = 1, f2 = 1, f3 = 1, f = 0; // ��ʼ��ǰ3���ĸţ����
//    cout << setw(6) << f1 << setw(6) << f2 << setw(6) << f3; // �����1�ꡢ��2��͵�3��
//
//    for (int i = 4; i <= 20; i++) { // �ӵ�4�꿪ʼ
//        f = f1 + f3; // ��ǰ�� = ǰһ�� + ����ǰ
//        cout << setw(6) << f; // �����ǰ���ĸţ����
//
//        // ���±���
//        f1 = f2; // ����f1Ϊǰһ��
//        f2 = f3; // ����f2Ϊ��ǰ��
//        f3 = f;  // ����f3Ϊ��ǰ��
//
//        if (i % 4 == 0) {
//            cout << endl; // ÿ4��������
//        }
//    }
//    /************* End ************/
//    return 0;
//}

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
//
//int main()
//{
//    /************* Begin ************/
//    int n, i, j, c = 0;
//    cout << "������>1��������n��";
//    cin >> n;
//    for (i = 2; i <= n; i++) {
//        bool panduan = true;
//        // ���i�Ƿ�Ϊ����
//        for (j = 2; j  <= sqrt(i); j++) {
//            if (i % j == 0) {
//                panduan = false; 
//                break;
//            }
//        }
//        if (panduan) {
//            cout << setw(5)<< i ; // �������
//            c++;
//            if (c % 5 == 0) {  
//                cout << endl;
//            }
//        }
//    }
//    /************* End ************/
//    return 0;
//}

#include <iostream>
#include <iomanip>
using namespace std;
/*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/

int main()
{
    /************* Begin ************/
    int i, j;
    cout << setw(5) << "|";
    for (int j = 1; j <= 9; j++)
        cout << setw(4) << j;
    cout << "\n----|------------------------------------\n";
    for (int i = 1; i <= 9; i++)
    {
        cout << i << setw(4) << "|";
        for (int j = 1; j <= i; j++) {
            cout << setw(4) << j * i;
        }
        cout << endl;
    }
    /************* End ************/
    return 0;
}



//#include <iostream>
//#include <iomanip>
//using namespace std;
///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
//
//int main()
//{
//    /************* Begin ************/
//    int i, j;
//    cout << setw(5) << "|";
//    for (int j = 1; j <= 9; j++)  
//        cout << setw(4) << j;
//    cout << "\n----|------------------------------------\n";
//
//    for (int i = 1; i <= 9; i++)  
//    {
//        cout << i << setw(4) << "|";
//        for (int j = 1; j <= 9; j++)  
//        {
//            if (j >= i)  
//                cout << setw(4) << j * i;
//            else  
//                cout << setw(4) << " ";
//        }
//        cout << endl;
//    }
//    /************* End ************/
//    return 0;
//}
