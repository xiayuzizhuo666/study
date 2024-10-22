#include <iostream>
#include <stdio.h>
#include <string>
#include "Sales_data.h"
using namespace std;
int main()
{
	/*int val1 = 1, val2 = 2;
	auto item = val1 + val2;
	cout << item << endl;
	auto i = 0, * p = &i;
	const int ci = 0, & cj = ci;
	decltype(ci) x = 0;
	decltype(ci) y = x;*/
	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype((b)) d = a;

	//++c;
	//++d;

	//cout << c;
	//cout << d << endl;

	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype(a = b) d = a;
	//cout << c << " anc " << d;

	struct Sales_data
	{
		string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
	};//类定义
	double price = 0;
	Sales_data data1,data2;
	double prible = 0;

	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	cin >> data2.bookNo >> data2.units_sold >> price;

	data1.revenue = data2.units_sold * price;


	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		//输出；ISBN 总销量 总销售额 平均价格
		cout << data1.bookNo << "" << totalCnt
			<< "" << totalRevenue << "";
		if (totalCnt != 0)

			cout << totalRevenue / totalCnt << endl;

		else

			cout << "(no sales)" << endl;
		return 0;//成功
	}
	else
	{
		cerr << "Data must refer to ther same ISBN"
			<< endl;
		return -1;//失败
	}

	system("pause");
	return 0;
}