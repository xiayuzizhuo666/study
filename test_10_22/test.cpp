//#include <iostream>
//using namespace std;
////����15��������ƽ��ֵ
//int main()
//{
//	int i = 0;
//	double Sum = 0;
//	double d;
//	cout << "����������:(����֮���ÿո�ָ�) " << endl;
//	while (i < 15)
//	{
//		cin >> d;
//		Sum += d;
//		i++;
//	}
//	double Average = Sum / i;
//	cout << "\n��ƽ��ֵΪ��" << Average << endl;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int x = 10;
//	while (x>=1)
//
//	{
//		cout << x;
//		x--;
//	}
//	return 0;
//}
//int main()
//{
//    int i = 3;
//    while (i-- > 0)
//    {
//        cout << '1';
//        if (i % 2 == 0)
//            cout << '2';
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
///*ע�����ֻ�����ڡ�Begin����End�����룬�����޸ĳ���Begin����End������κδ��롣*/
//
//int main()//���������1��100֮��������ĺ� sum = 1+3+5+��+99��
//{
//	/********* Begin **********/
//	int i = 1, sum = 0;
//	while (i <= 99)
//	{
//		sum += i;
//		i = i + 2;
//	}
//	/********** End **********/
//	cout << "sum = " << sum << endl;
//	return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int score, count = 0, sum = 0, maxScore = 0;

    // Begin
    while (true) {
        cout << "�������" << count + 1 << "���÷�[0,100]��";
        cin >> score;

        if (score == -1) {
            break; // ����-1ʱ����
        }

        // ���������Ч��
        if (score < 0 || score > 100) {
            cout << "�÷ֱ�����0��100֮�䣬���������롣" << endl;
            continue; // ������һ��ѭ��
        }

        sum += score; // �ۼӵ÷�
        count++; // ��¼��Ч�÷ֵ�����

        if (score > maxScore) {
            maxScore = score; // ������߷�
        }
    }
    // End

    // ������
    if (count > 0) {
        double average = static_cast<double>(sum) / count; // ����ƽ����
        //static_cast����������ת���������֮һ������Ҫ���ڻ�����������֮���ת���������ͺ͸�����֮���ת�����������νṹ�н�������ת��
        cout << "��߷֣�" << maxScore << endl;
        cout << "ƽ���֣�" << average << endl;
    }
    else {
        cout << "��߷֣�0" << endl;
        cout << "ƽ���֣�0" << endl;
    }

    return 0;
}
