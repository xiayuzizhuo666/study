#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	//string s1(10, 'c');
	//string s2("nihao");

	//cout << s1 << endl;
	//cout << s2 << endl;

	//string s;
	//cin >>s;
	//cout << s << endl;

	
	//string word;
	//while (cin >> word)
	//{
	//	cout << word << endl;
	//}


	//string line;
	//while (getline(cin,line))
	//{
	//	cout << line << endl;
	//}

	//string line;
	//while (getline(cin, line))
	//{

	//	if (!line.empty())
	//	{
	//		cout << line << endl;
	//	}

	//}

	//string line;
	//while (getline(cin, line))
	//{
	//	if (line.size() > 80)
	//	{
	//		cout << line << endl;
	//	}
	//}

	//string s1("hello\n") , s2("world");
	//string s3 = s1 + s2;
	//cout << s3 << endl;

	int s = 0;
	cout << "请输入月份" << endl;
	cin >> s;
	switch (s)
	{
	case 11:
	case 12:
	case 1:
		cout << "季节是冬天" << endl;
	case 2:
	case 3:
	case 4:
		cout << "季节是春天" << endl;
	case 5:
	case 6:
	case 7:
		cout << "季节是夏天" << endl;
	case 8:
	case 9:
	case 10:
		cout << "季节是秋天" << endl;



	default:cout << "you are a fool man, os find false " << endl;
		break;
	}



	system("pause");
	return 0;
}