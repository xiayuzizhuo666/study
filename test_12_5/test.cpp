//#include <iostream>
//using namespace std;
//int main()//�����㷨
//{
//	int a[102];
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i <= n; i++)
//	{
//		cin >> a[i];
//	}//��ʼ������
//	int head=1, tail=n;
//	while (head < tail)
//	{
//		cout << a[head];//������ף����׳���
//		head++;
//		//���¶�����ӵ���β
//		a[tail] = a[head];
//		tail++;
//		//�ٽ����׳���
//		head++;
//	}
//	
//	return 0;
//}//�����߼�

//�����߼�
#include <iostream>
using namespace std;
struct queue
{
	int data[100];//��������
	int head;//����
	int tail;//��β
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
	}//��ʼ������
	while (q.head<q.tail)//���в�Ϊ��ʱ��ִ�����²���
	{
		cout << q.data[q.head];
		q.head++;

		q.data[q.tail] = q.data[q.head];
		q.tail++;

		q.head++;
	}
}