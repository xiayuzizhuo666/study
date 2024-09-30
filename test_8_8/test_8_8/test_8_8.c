#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int ADD(int x, int y);
int main()
{
	int a = 10;
	int b = 20;

	int z = ADD(a,b);
	printf("%d\n", z);

	return 0;
}