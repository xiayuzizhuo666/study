//#include <iostream>
//using namespace std;
//int main()//队列算法
//{
//	int a[102];
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i <= n; i++)
//	{
//		cin >> a[i];
//	}//初始化队列
//	int head=1, tail=n;
//	while (head < tail)
//	{
//		cout << a[head];//输出队首，队首出队
//		head++;
//		//将新队首添加到队尾
//		a[tail] = a[head];
//		tail++;
//		//再将队首出队
//		head++;
//	}
//	
//	return 0;
//}//基础逻辑

//进阶逻辑
#include <iostream>
using namespace std;
struct queue
{
	int data[100];//队列主体
	int head;//队首
	int tail;//队尾
};
int main()
{
	queue q;
	int i;
	q.head = 1;
	q.tail = 1;
	int n = 0;
	cin >> n;
	for ( i = 0; i <= n ; i++)
	{
		cin >> q.data[q.tail];
		q.tail++;
	}//初始化队列
	while (q.head<q.tail)//队列不为空时，执行以下操作
	{
		cout << q.data[q.head];
		q.head++;

		q.data[q.tail] = q.data[q.head];
		q.tail++;

		q.head++;
	}
}