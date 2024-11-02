#include <iostream>
#include <vector>
#include <string>
#include <iomanip>


using namespace std;
//int sum(int array[],int len)
//{
//	int iSum = 0;
//	for (int i = 0; i < len; i++)
//		iSum += array[i];
//	return iSum;
//
//}
//int main()
//{
//	static int ia[5] = { 2 ,3,6,8,10 };
//	int sumOfArray = sum(ia, 5);
//	cout << "sum of array : " << sumOfArray << endl;
//
//	return 0;
//}


int main()
{
	int array1[2][3] = { 1,2,3,4,5 };
	int array2[2][3] = { {1,2},{4} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << array1[i][j] << ",";
		cout << endl;
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << array2[i][j] << ",";
		cout << endl;
	}
	return 0;
}