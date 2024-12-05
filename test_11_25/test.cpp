#include <iostream>
#include <string>
using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	int len = s.length();
//	for(int i = len - 1;i >=0;i++)
//	{
//		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
//			|| s[i] == 'o' || s[i] == 'u')
//		{
//			cout << s[i] << endl;
//		}
//	}
//	return 0;
//}

int main()
{
	long long num;
	cin >> num;
	while (num >=10)
	{
		long long tmp_num = num;
		long long tmp_result = 1;
		while (tmp_num >0)
		{
			if (tmp_num % 10 > 0)
			{
				tmp_result *= tmp_num % 10;
			}
			tmp_num /= 10;
		}
		cout << tmp_result << endl;
		num = tmp_result;
	}
	return 0;
}