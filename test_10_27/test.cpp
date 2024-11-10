#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//int ia[3][4];
	//int arr[10][20][30];
	//int ia[3][4] = {
	//{0,1,2,3},
	//{4,5,6,7},
	//{8,9,10,11} };
	//ia[2][3] = arr[0][0][0];
	//int(&row)[4] = ia[1];


	//constexpr size_t rowCnt = 3,colCnt = 4;
	//int ia[rowCnt][colCnt];
	//for (size_t i = 0; i != rowCnt; ++i)
	//{
	//	for (size_t j = 0; j != colCnt; ++j)
	//	{
	//		ia[i][j] = i * colCnt + j;
	//	}
	//}
	//cout << ia << endl;


	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	for (auto& r : v)
		r *= 2;

	return 0;
}