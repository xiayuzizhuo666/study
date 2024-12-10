//#include <iostream>
//using namespace std;
//int a[1001];
//int main()
//{
//	int i, t;
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> t;
//		a[t] = 1;
//	}
//	for (int i = 1; i <= 1000; i++)
//	{
//		if (a[i] == 1)
//		{
//			cout << a[i];
//		}
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
int a[101];
int main()
{
	int n,j, t;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i < n-1; i++)
	{
		for (int j = 1; j < n-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
		}
		cout << a[1]<< " ";
		for (int i = 2; i <=n ; i++)
		{
			if (a[i]!=a[i-1])
			{
				cout << a[i] << " ";
			}
		}
	}
	return 0;
}