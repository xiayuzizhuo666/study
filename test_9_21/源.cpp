#include <iostream> //&&=and  ||=or !������ת��true��false��false��true

using namespace std;

int main() //1
{
	int x = 1, y = 0, i = 0;
	if (x||y)
	{
		i++;
	
	}
	cout << i << endl;
	return 0; //��ʹi��ֵ��Ϊ1
}
int main() //2
{
	//��α�ʾx>=y>=z
	int x = 2, y = 1, z = 0;
	if (x>=y&&y>=z) //��ȷ��ʾ
	{
		cout << "ture" << endl;
	}

	return 0;
}
int main() //3
{
	int a = 5;
	a += a -= a* a; //���ҵ���a*a=25,a-25=-20,-20 + -20= -40

	cout << a << endl; //a = -40

	return 0;
}

Ӧ����8_8��void��unsigned���У�_0_....̫����� //4

int main() //5
{
	int i, j, m, n;
	i = 8, j = 10;

	m = ++i;

	n = j++;

	cout << i << "," << j << "," << m << "," << n << endl;
	return 0;
} //9,11,9,10
m=++i <=> i++;m=i      m = i++ <=> m = i; i++

c���Ա���Ҫ����������C    //6


δ��a��ֵ�����ܽ����ж�a==1���жϣ����ѡD   //7

int main() //8
{
	int a = 1, b = .0;
	if (!a)
	{
		b++;
	}
	else
	{
		b += 3;//����·�������
	}
	cout << b << endl;
	return 0;
}  //b=3


D  //9


B  //10


int main() //11
{
	int x = 23;
	do
	{
		cout << x--;
	} while (!x);

	return 0;
}//���23


int main() //12
{
	int y = 10;
	while (y--)
	{
		cout << y;
	}

	return 0;
}   //���Ϊ0


������
int main() //1
{
	int a = 0, b = 0,n=0;

	cout << "please enter a and b";
	cin >> a >> b;
	
	n = a * b;

	cout << n << endl;

	return 0;
}


int main() //2
{
	int n;
	cin >> n;

	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) // %�����ø�ʽ���ַ������,����ȡ�� 
		cout << "1" << endl;
	else
		cout << "0" << endl;
	return 0;
}