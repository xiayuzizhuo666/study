#include <iostream>
using namespace std;
//1582 �� n �� 2020���ݱ���
int main()
{
	int n;
	cin >> n;
	while (1582 <= n && 2020 >= n)
	{


		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
			cout << "1" << endl;
		else
			cout << "0" << endl;
		break;
	}

	return 0;
}