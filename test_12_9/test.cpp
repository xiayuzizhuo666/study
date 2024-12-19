#include <iostream>
using namespace std;
struct queue
{
	int data[1000];
	int head;
	int tail;
};
struct stack
{
	int data[10];
	int top;
};
int main()
{
	struct queue q1, q2;
	struct stack s;
	int book[10];
	int i, t;

	//初始化队列
	q1.head = 1; q1.tail = 1;
	q2.head = 1; q2.tail = 2;

	//初始化栈
	s.top = 0;

	//初始化标记数组，标记桌上的牌有哪些
	for ( i = 0; i <= 9; i++){
		book[i] = 0;
	}

	//依次向队列中插入6张牌
	//小哼
	for ( i = 1; i <= 6; i++)
	{
		cin >> q1.data[q1.tail];
		q1.tail++;
	}

	//小哈
	for ( i = 1; i <=6; i++)
	{
		cin >> q2.data[q2.tail];
		q2.tail++;
	}
	while (q1.head < q1.tail&&q2.head < q2.tail)//判断队列是否为空
	{//小哼
		t = q1.data[q1.head];//出一张牌，存入临时变量 t 中
		//判断当前牌是否能赢
		if (book[t] == 0)//桌面上没有牌面为 t 的牌
		{//没赢
			q1.head++;//打出的牌，出队

			s.top++;
			s.data[s.top] = t;//打出的牌坊桌上，入栈

			book[t] = 1;//标记数组标记桌面为 t 的牌面
		}
		else
		{
			//赢牌
			q1.head++;//打出的牌，出队
			q1.data[q1.tail] = t;//打出的牌赢回来了，进入队尾
			q1.tail++;

			while (s.data[s.top]!=t)//把赢了的牌依次放入队尾
			{
				book[s.data[s.top]] = 0;//取消这张牌的标记

				q1.data[q1.tail] = s.data[s.top];//依次放入队尾
				q1.tail++;
				s.top--;//栈中少了一张牌，所以栈顶要减一;
			}
		if (q1.head == q1.tail){//如果自己牌打完，对手胜利
				break;
		}
		}


		//小哈
		t = q2.data[q2.head];//出一张牌，存入临时变量 t 中
		//判断当前牌是否能赢
		if (book[t] == 0)//桌面上没有牌面为 t 的牌
		{//没赢
			q2.head++;//打出的牌，出队

			s.top++;
			s.data[s.top] = t;//打出的牌坊桌上，入栈

			book[t] = 1;//标记数组标记桌面为 t 的牌面
		}
		else
		{
			//赢牌
			q2.head++;//打出的牌，出队
			q2.data[q2.tail] = t;//打出的牌赢回来了，进入队尾
			q2.tail++;

			while (s.data[s.top] != t)//把赢了的牌依次放入队尾
			{
				book[s.data[s.top]] = 0;//取消这张牌的标记

				q2.data[q2.tail] = s.data[s.top];//依次放入队尾
				q2.tail++;
				s.top--;//栈中少了一张牌，所以栈顶要减一;
			}
			if (q2.head == q2.tail) {//如果自己牌打完，对手胜利
				break;
			}
		}
	}
	if (q2.head == q2.tail)
	{
		cout << "小哼获胜！" << endl;
		cout << "小哼目前手里的牌：" << endl;
		for (i = q1.head; i <= q1.tail; i++)
		{
			cout << q1.data[i] << " " << endl;
			if (s.top > 0)
			{
				cout << "桌上的牌：" << endl;
				for (i = 1; i <= s.top; i++)
				{
					cout << s.data[i] << " " << endl;
				}
			}
			else
			{
				cout << "桌上没牌了，别找了" << endl;
			}
		}
	}
	else
	{
		cout << "小哈获胜！" << endl;
		cout << "小哈目前手里的牌：" << endl;
		for (i = q2.head; i <= q2.tail; i++)
		{
			cout << q2.data[i] << " " << endl;
			if (s.top > 0)
			{
				cout << "桌上的牌：" << endl;
				for (i = 1; i <= s.top; i++)
				{
					cout << s.data[i] << " " << endl;
				}
			}
			else
			{
				cout << "桌上没牌了，别找了" << endl;
			}
		}
	}
	system("pause");
	return 0;
}