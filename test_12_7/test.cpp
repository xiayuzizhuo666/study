#include <iostream>//ջ
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
		s[++top] = a[i];//midǰ����ĸ��ջ
	}
	if (len %2==0)
	{
		next = mid + 1;
	}
	else//�ж��ַ�����ż�����ҳ�mid��ʼƥ���ַ���λ�õ��±�
	{
		next = mid + 2;
	}

//��ʼƥ��
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