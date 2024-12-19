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

	//��ʼ������
	q1.head = 1; q1.tail = 1;
	q2.head = 1; q2.tail = 2;

	//��ʼ��ջ
	s.top = 0;

	//��ʼ��������飬������ϵ�������Щ
	for ( i = 0; i <= 9; i++){
		book[i] = 0;
	}

	//����������в���6����
	//С��
	for ( i = 1; i <= 6; i++)
	{
		cin >> q1.data[q1.tail];
		q1.tail++;
	}

	//С��
	for ( i = 1; i <=6; i++)
	{
		cin >> q2.data[q2.tail];
		q2.tail++;
	}
	while (q1.head < q1.tail&&q2.head < q2.tail)//�ж϶����Ƿ�Ϊ��
	{//С��
		t = q1.data[q1.head];//��һ���ƣ�������ʱ���� t ��
		//�жϵ�ǰ���Ƿ���Ӯ
		if (book[t] == 0)//������û������Ϊ t ����
		{//ûӮ
			q1.head++;//������ƣ�����

			s.top++;
			s.data[s.top] = t;//������Ʒ����ϣ���ջ

			book[t] = 1;//�������������Ϊ t ������
		}
		else
		{
			//Ӯ��
			q1.head++;//������ƣ�����
			q1.data[q1.tail] = t;//�������Ӯ�����ˣ������β
			q1.tail++;

			while (s.data[s.top]!=t)//��Ӯ�˵������η����β
			{
				book[s.data[s.top]] = 0;//ȡ�������Ƶı��

				q1.data[q1.tail] = s.data[s.top];//���η����β
				q1.tail++;
				s.top--;//ջ������һ���ƣ�����ջ��Ҫ��һ;
			}
		if (q1.head == q1.tail){//����Լ��ƴ��꣬����ʤ��
				break;
		}
		}


		//С��
		t = q2.data[q2.head];//��һ���ƣ�������ʱ���� t ��
		//�жϵ�ǰ���Ƿ���Ӯ
		if (book[t] == 0)//������û������Ϊ t ����
		{//ûӮ
			q2.head++;//������ƣ�����

			s.top++;
			s.data[s.top] = t;//������Ʒ����ϣ���ջ

			book[t] = 1;//�������������Ϊ t ������
		}
		else
		{
			//Ӯ��
			q2.head++;//������ƣ�����
			q2.data[q2.tail] = t;//�������Ӯ�����ˣ������β
			q2.tail++;

			while (s.data[s.top] != t)//��Ӯ�˵������η����β
			{
				book[s.data[s.top]] = 0;//ȡ�������Ƶı��

				q2.data[q2.tail] = s.data[s.top];//���η����β
				q2.tail++;
				s.top--;//ջ������һ���ƣ�����ջ��Ҫ��һ;
			}
			if (q2.head == q2.tail) {//����Լ��ƴ��꣬����ʤ��
				break;
			}
		}
	}
	if (q2.head == q2.tail)
	{
		cout << "С�߻�ʤ��" << endl;
		cout << "С��Ŀǰ������ƣ�" << endl;
		for (i = q1.head; i <= q1.tail; i++)
		{
			cout << q1.data[i] << " " << endl;
			if (s.top > 0)
			{
				cout << "���ϵ��ƣ�" << endl;
				for (i = 1; i <= s.top; i++)
				{
					cout << s.data[i] << " " << endl;
				}
			}
			else
			{
				cout << "����û���ˣ�������" << endl;
			}
		}
	}
	else
	{
		cout << "С����ʤ��" << endl;
		cout << "С��Ŀǰ������ƣ�" << endl;
		for (i = q2.head; i <= q2.tail; i++)
		{
			cout << q2.data[i] << " " << endl;
			if (s.top > 0)
			{
				cout << "���ϵ��ƣ�" << endl;
				for (i = 1; i <= s.top; i++)
				{
					cout << s.data[i] << " " << endl;
				}
			}
			else
			{
				cout << "����û���ˣ�������" << endl;
			}
		}
	}
	system("pause");
	return 0;
}