//#include <iostream>
//using namespace std;
//
//int n, m;
//long long arr[100003];
//
//int main()
//{
//    cin >> n >> m;
//    while (m--)
//    {
//        int l, r;
//        long long cost;
//        cin >> l >> r >> cost;
//        arr[l] += cost;
//        arr[r + 1] -= cost;
//    }
//    long long count;
//    for (int i = 1; i <= n; i++)
//    {
//        arr[i] += arr[i - 1];
//        count += arr[i];
//    }
//    cout << count << endl;
//    return 0;
//}


#include <iostream>
using namespace std;
int a[101], n;
void quicksort(int left, int right)
{
	int i, j, t, temp;
	if (left >= right) {
		return;
	}
	temp = a[left];
	i = left;
	j = right;
	while (i < j){
		while (a[j] >=temp&&i<j){
			j--;
		}
		while (a[i]<=temp&&i<j){
			i++;
		}
		if (i < j){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;

	quicksort(left, i - 1);
	quicksort(i + 1, right);
	return;
}
int main()
{
	int i,j = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	quicksort(j, n);
	for (i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}