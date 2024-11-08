#include <iostream>
using namespace std;
//µÝ¹é
long gcd1(int a, int b)
{
	if ((a % b) == 0)
		return b;
	return gcd1(b, a % b);

}
//·ÇµÝ¹é
long gacd2(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int main()
{
	int ia1[50];
	int ia2[500];
	memset(ia1, 0, 50 * sizeof(int));
	memset(ia2, 0, 500 * sizeof(int));
	constexpr size_t sz = 5;
	int arr[sz] = { 1,2,3,4,5 };
	int* ip = arr;
	int* ip2 = ip + 4;

	auto n = end(arr) - begin(arr);
	int* b = arr, * e = arr + sz;
	while (b < e)
	{
		++b;
	}

	return 0;

}