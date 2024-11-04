#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <cmath>
#include <iterator>
using namespace std;

int main()
{
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* beg = begin(ia);
	int* last = end(ia);
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pbeg = begin(arr), * pend = end(arr);
	while (pbeg != pend && *pbeg >= 0)
		++pbeg;
	while (pbeg == pend)
	{
		cout << pbeg << endl;
		break;
	}

	system("puase");
	return 0;
}