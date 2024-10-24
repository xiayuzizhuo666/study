#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//int val = 0;
	//do
	//{
	//
	//	cout << "please enter a number between 1 and 10\n";
	//	cin >> val;
	//	if (val < 1 || val > 10)
	//		cout << "the number be not between 1 and 10\n";
	//}
	//while (val > 1 && val < 10);
	//cout << "you enter a " << val << endl;\

	//int sum = 0, i = 0;

	//do
	//{
	//	sum += i;
	//	i++;
	//} 
	//while (i<=100);
	//cout << "sum" << sum << endl;

	//int sum = 0, i = 0;

	//for  ( ;; )
	//{
	//	sum += i++ ;
	//	cout << sum << endl;
	//	if (i > 100)
	//		break;
	//}
	int i = 0;

	for (int i = 0; i <= 200; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
	}
	cout << i << endl;


	system("pause");
	return 0;
}