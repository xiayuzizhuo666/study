//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0, b = 0, c = 0, jishu = 0,sum = 0;
//	for (int i = 0; i <12 ; i++)
//	{
//
//		cin >> b;//ÿ�»���
//		a += 300;//ÿ�³�300Ԫ
//		c = a - b;//ʣ��
//		if (c < 0)//���С��0����������һ����ʡ�Լ���
//		{
//			jishu++;
//			break;
//		}
//		if (c > 100||c%100==0)//������ٻ��ߴ���100����Ǯ
//		{
//			int cun = c / 100;
//			sum += cun * 100;
//            c -+ cun *100;
//		}
//
//	}
//	if (jishu == 0)
//	{
//		cout << sum * 1.2 << endl;
//	}
//	else
//	{
//		cout << c << endl;
//	}
//
//	return 0;
//}



//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int monthlyBudget[12]; // �洢ÿ���µ�Ԥ��
//    int totalSavings = 0; // �����ܶ�
//    int currentBalance = 0; // ��ǰ���
//    int monthWithInsufficientFunds = -1; // ��¼�����ʽ�����·�
//
//    // ����12���µ�Ԥ��
//    for (int i = 0; i < 12; i++)
//    {
//        cin >> monthlyBudget[i];
//    }
//
//    // ����ÿ���µ�Ԥ��
//    for (int month = 0; month < 12; month++)
//    {
//        currentBalance += 300; // ÿ�³���300Ԫ
//        int budget = monthlyBudget[month]; // ����Ԥ��
//        int remaining = currentBalance - budget; // Ԥ���ʣ��
//
//        if (remaining < 0) // ���ʣ�಻��
//        {
//            monthWithInsufficientFunds = month + 1; // ��¼ʧ�ܵ��·ݣ�1��-12�£�
//            break; // ��ֹѭ��
//        }
//
//        // ����Ƿ���
//        if (remaining >= 100 || remaining % 100 == 0)
//        {
//            int saveAmount = (remaining / 100) * 100; // ��������
//            totalSavings += saveAmount; // ���´���
//            currentBalance -= saveAmount; // ���µ�ǰ���
//        }
//    }
//
//    // ������
//    if (monthWithInsufficientFunds != -1)
//    {
//        cout << -monthWithInsufficientFunds << endl; // ���ʧ�ܵ��·�
//    }
//    else
//    {
//        totalSavings = static_cast<int>(totalSavings * 1.2); // ������ĩ20%��Ϣ
//        cout << (currentBalance + totalSavings) << endl; // �����ĩ�ܽ��
//    }
//
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int currentBalance = 0; // ��������Ǯ
//    int monthlyBudget;       // ÿ���µĻ���
//    int savingsCount = 0;   // �������������100Ԫ����
//    bool isInDebt = false;  // ����Ƿ�͸֧
//    int overdraftMonth = 0; // ��¼͸֧���·�
//
//    // ����ÿ���µ�Ԥ��
//    for (int month = 1; month <= 12; month++) {
//        currentBalance += 300; // ÿ���³����300Ԫ
//        cin >> monthlyBudget;   // ����ÿ���µĻ���
//
//        currentBalance -= monthlyBudget; // �۳�����
//
//        // ����Ƿ�͸֧
//        if (currentBalance < 0) {
//            isInDebt = true;
//            overdraftMonth = month; // ��¼͸֧���·�
//            break; // ͸֧����ֹѭ��
//        }
//
//        // ������������100Ԫ����
//        savingsCount += currentBalance / 100; // ��������
//        currentBalance %= 100;                 // �������
//    }
//
//    // ������
//    if (!isInDebt) {
//        // ���û��͸֧��������ĩ�ʽ�
//        int totalAmount = currentBalance + (savingsCount * 120); // ʣ���Ǯ + 20%��Ϣ
//        cout << totalAmount;
//    }
//    else {
//        // ���͸֧�����͸֧�·ݵĸ�ֵ
//        cout << -overdraftMonth;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    bool found = false; // �����ж��Ƿ��ҵ�������������

    for (int i = 10000; i <= 30000; i++) {
        // ��ȡÿһλ����
        int d1 = i / 10000;          // ��һλ
        int d2 = (i / 1000) % 10;    // �ڶ�λ
        int d3 = (i / 100) % 10;     // ����λ
        int d4 = (i / 10) % 10;      // ����λ
        int d5 = i % 10;             // ����λ

        // �������
        if ((d1 * 100 + d2 * 10 + d3) % k == 0 &&  // �ж�1��3λ
            (d2 * 100 + d3 * 10 + d4) % k == 0 &&  // �ж�2��4λ
            (d3 * 100 + d4 * 10 + d5) % k == 0) {  // �ж�2��5λ
            cout << i << endl;
            found = true; // ������ҵ�������������
        }
    }

    if (!found) {
        cout << "No" << endl; // û�з�����������
    }

    return 0;
}

#include<iostream>
using namespace std;
bool flag = false;
int main()
{
    int k = 0;
    cin >> k;
    for (int i = 10000; i <= 30000; i++)
    {
        if (i / 100 % k == 0)//1��3λ
            if ((i / 10 - i / 10000 * 1000) % k == 0)//2��4λ
                if ((i - i / 1000 * 1000) % k == 0) cout << i << endl, flag = 1;//2��5λ
    }
    if (!flag)
    {
        cout << "No" << endl;
    }
    return 0;
}