//#include <iostream>
//int main()
//{
//	using namespace std;
//	int sum = 0;
//	//��һ��ʮ
//	for (int val = 1; val < 10; val++)
//	{
//		sum += val;//�ȼ���sum = sum + val
//		cout << "sum of 1 to 10 inclusive is"
//			<< sum << endl;
//	}
//
//	return 0;
//
//}
//int main()
//{
//	int sum = 0;
//	for (int  i = -100; i <= 100; i++)
//	{
//		sum += i;
//	}
//
//	std::cout << sum;
//
//	return 0;
//
//}
//int main()
//{
//	using namespace std;
//	int sum = 50;
//	for (int i = 51; i <=100; i++)
//	{
//		sum = sum + i;
//		cout << sum;
//	}
//
//
//
//	return 0;
//
//}
//int main()
//{
//
//	for (int i = 10; i > -1; i--)
//	{
//		std::cout << i;
//	}
//
//	return 0;
//
//}
//int main()
//{
//	int sum = 0, value = 0;
//	while (std::cin >> value)
//	
//		sum += value;
//	
//	std::cout << "Sum is:" << sum << std::endl;
//
//	return 0;
//}
//
//

//int main()
//{
//	using namespace std;
//	int sum = 0, value = 0;
//
//	cout << "please enter numbers,enter z get sum" << endl;
//
//	while (cin >> value)
//		sum += value;
//
//	cout << "the sum is "
//		<< sum << endl;
//
//	return 0;
//
//}
#include <iostream>
using namespace std;
int main()
{
	//currval����������ͳ�Ƶ��������ǽ��������ֵ����val
	int currval = 0, val = 0;
	//��ȡ��һ��������ȷ�������ݿ��Դ���
	if (cin >> currval)
	{
		int cnt = 1;//�������ڴ���ĵ�ǰֵ�ĸ���
		while (cin >> val)//��ȡʣ�����
		{
			if (val == currval)//���ֵ��ͬ
			++cnt;//��cnt��һ
	else//���򣬴�ӡǰһ��ֵ�ĸ���
	{
		cout << currval << "occurs"
			<< cnt << "wimes" << endl;
		currval = val;//��ס��ֵ
		cnt = 1;//���ü�����
	}
		}//whileѭ�����������
		//��ס��ӡ�ļ������һ��ֵ�ĸ���
	cout << currval << "occurs"
		<< cnt << "times" << endl;
}//�����if�������
	return 0;
}
