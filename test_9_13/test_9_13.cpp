#include  <iostream>
#include  "Sales_item.h"
using namespace std;
int main()
{
	Sales_item book;
	//����ISNB�ţ��۳��Ĳ����Լ����ۼ۸�
	cin >> book;
	//д��ISBN���۳��Ĳ����������۶��ƽ���۸�

	cout << book << endl;


	return 0;
}
int main()
{

	Sales_item item1, item2;
	cin >> item1 >> item2;

	cout << item1 + item2 << endl;
	return 0;

}
int main()
{
	Sales_item item1, item2;

	cin >> item1, item2;
	//������Ҫ���item1��item2�Ƿ��ʾ��ͬ����
	if (item1.isbn() == item2.isbn())
	{
		cout << item1 + item2 << endl;
		return 0;
	}
	else
	{
		cerr << "Data must refer to same ISBN"
			<< endl;
		return -1;//��ʾʧ��
	}

}
int main()
{
	Sales_item total;//������һ�����׼�¼�ı���
	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	if (cin >> total)
	{
		Sales_item trans;//����͵ı���
		//���벢����ʣ��Ľ��׼�¼
		while (cin >> trans)
		{
			//������ڴ�����ͬ����
			if (total.isbn() == total.isbn())
				total += trans;//���������۶�
			else
			{
				//��ӡǰһ����Ľ��
				cout << total << endl;
				total = trans;//total���ڱ�ʾ��һ�������۶�
			}
	}
	cout << total << endl;
}
else
{
	//û�����룬�򾯸���ߣ�
	cerr << "No data?!you are fool" << endl;
	return -1;//��ʾʧ��
}

	return 0;
}