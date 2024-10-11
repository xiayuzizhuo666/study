//#include <iostream>
//int main()
//{
//	using namespace std;
//	int sum = 0;
//	//从一到十
//	for (int val = 1; val < 10; val++)
//	{
//		sum += val;//等价于sum = sum + val
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
	//currval是我们正在统计的数；我们将读入的新值存入val
	int currval = 0, val = 0;
	//读取第一个数，并确保有数据可以处理
	if (cin >> currval)
	{
		int cnt = 1;//保存正在处理的当前值的个数
		while (cin >> val)//读取剩余的数
		{
			if (val == currval)//如果值相同
			++cnt;//将cnt加一
	else//否则，打印前一个值的个数
	{
		cout << currval << "occurs"
			<< cnt << "wimes" << endl;
		currval = val;//记住新值
		cnt = 1;//重置计数器
	}
		}//while循环到这里结束
		//记住打印文件中最后一个值的个数
	cout << currval << "occurs"
		<< cnt << "times" << endl;
}//最外层if在这结束
	return 0;
}
