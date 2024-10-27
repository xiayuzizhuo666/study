#include <iostream>
using namespace std;
//1582 ¡Ü n ¡Ü 2020Êý¾Ý±£´æ
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