#include  <iostream>
#include  "Sales_item.h"
using namespace std;
int main()
{
	Sales_item book;
	//读入ISNB号，售出的册数以及销售价格
	cin >> book;
	//写出ISBN，售出的册数，总销售额和平均价格

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
	//首先需要检查item1和item2是否表示相同的书
	if (item1.isbn() == item2.isbn())
	{
		cout << item1 + item2 << endl;
		return 0;
	}
	else
	{
		cerr << "Data must refer to same ISBN"
			<< endl;
		return -1;//表示失败
	}

}
int main()
{
	Sales_item total;//保存下一条交易记录的变量
	//读入第一条交易记录，并确保有数据可以处理
	if (cin >> total)
	{
		Sales_item trans;//保存和的变量
		//读入并处理剩余的交易记录
		while (cin >> trans)
		{
			//如果仍在处理相同的书
			if (total.isbn() == total.isbn())
				total += trans;//更新总销售额
			else
			{
				//打印前一本书的结果
				cout << total << endl;
				total = trans;//total现在表示下一本的销售额
			}
	}
	cout << total << endl;
}
else
{
	//没有输入，则警告读者！
	cerr << "No data?!you are fool" << endl;
	return -1;//表示失败
}

	return 0;
}