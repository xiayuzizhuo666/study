#include <iostream>//栈
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char a[101], s[101];
	int i, len, mid, next, top;
	cin.getline(a, 101);
	len = strlen(a);
	mid = len / 2 - 1;

	top = 0;
	for (i = 0; i <= mid; i++)
	{
		s[++top] = a[i];//mid前的字母入栈
	}
	if (len %2==0)
	{
		next = mid + 1;
	}
	else//判断字符串奇偶数，找出mid后开始匹配字符的位置的下标
	{
		next = mid + 2;
	}

//开始匹配
	for (i = next; i <= len - 1; i++)
	{
		if (a[2]!=s[top])
		{
			break;
		}
		top--;
	}
	if (top == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}