//#include <iostream>
//using namespace std;
//
//int arr[100000];
//int main()
//{
//	int n, k;
//	long long sum = 0, max_sum = 0;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < k; i++)
//	{
//		sum += arr[i];
//	}
//	max_sum = sum;
//	for (int p = 0; p<k&&p+k-1 < n; p++)
//	{
//		sum += arr[p-1];
//		if (sum > max_sum)
//		{
//			max_sum = sum;
//		}
//	}
//	cout << max_sum << endl;
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool iszhi(int n)
//{
//    if (n < 2) // 负数和 0, 1 不是质数
//    {
//        return false;
//    }
//
//    for (int i = 2; i <= static_cast<int>(sqrt(n)); i++) 
//    {
//        if (n % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    int j = 0;
//    for (int i = 1; i <= 2023; i++) 
//    {
//        if (2024 % i == 0 && iszhi(i))
//        {
//            j++;
//        }
//    }
//    cout << j << endl;
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int n = 2024;
//	int a = 0;
//	int b = 0;
//	while (n>1)
//	{
//		n = sqrt(n);
//		a++;
//		if (n==1)
//		{
//			break;
//		}
//	}
//	cout << a << endl;
//	return 0; 
//}