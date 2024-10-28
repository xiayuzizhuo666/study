#include<stdio.h>
int main()
{
	int n, i, num[1000] = {};
	scanf_s("%d", &n);
	for (i = 0; n != 0; i++)
	{
		num[i] = n % 10;
		n = n / 10;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d ", num[j]);
	}
	return 0;
}