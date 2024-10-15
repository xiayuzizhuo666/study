#include <iostream> //&&=and  ||=or !两极反转，true变false，false变true

using namespace std;

int main() //1
{
	int x = 1, y = 0, i = 0;
	if (x||y)
	{
		i++;
	
	}
	cout << i << endl;
	return 0; //可使i的值变为1
}
int main() //2
{
	//如何表示x>=y>=z
	int x = 2, y = 1, z = 0;
	if (x>=y&&y>=z) //正确表示
	{
		cout << "ture" << endl;
	}

	return 0;
}
int main() //3
{
	int a = 5;
	a += a -= a* a; //从右到左，a*a=25,a-25=-20,-20 + -20= -40

	cout << a << endl; //a = -40

	return 0;
}

应该是8_8，void和unsigned不行，_0_....太奇怪了 //4

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

c语言必须要有主函数，C    //6


未给a赋值，不能进行判断a==1等判断，因此选D   //7

int main() //8
{
	int a = 1, b = .0;
	if (!a)
	{
		b++;
	}
	else
	{
		b += 3;//运行路径是这个
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
}//输出23


int main() //12
{
	int y = 10;
	while (y--)
	{
		cout << y;
	}

	return 0;
}   //输出为0


编译题
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

	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) // %的作用格式化字符串输出,整数取余 
		cout << "1" << endl;
	else
		cout << "0" << endl;
	return 0;
}