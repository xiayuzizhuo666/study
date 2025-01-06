#include <iostream>
#include <string>
using namespace std;

class AbstractDringking
{
public:
	virtual void Boil() = 0;//煮水
	virtual void Brew() = 0;//冲泡
	virtual void PourInCup() = 0;//倒入杯中
	virtual void PutSomething() = 0;//加入佐料
	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};


class Coffee :public AbstractDringking {
public:
	void Boil() {
		cout << "煮咖啡" << endl;
	}//煮水
	void Brew() {
		cout << "冲泡咖啡" << endl;
	}//冲泡
	void PourInCup() {
		cout << "倒入杯中" << endl;
	}//倒入杯中
	void PutSomething() {
		cout << "加入糖and牛奶" << endl;
	}//加入佐料
};
class Tea :public AbstractDringking {
public:
	void Boil() {
		cout << "煮农夫三泉" << endl;
	}//煮水
	void Brew() {
		cout << "冲泡茶叶" << endl;
	}//冲泡
	void PourInCup() {
		cout << "倒入杯中" << endl;
	}//倒入杯中
	void PutSomething() {
		cout << "加入枸杞" << endl;
	}//加入佐料
};
void doWork(AbstractDringking* abs) {

	abs->makeDrink();
	delete abs;
}
void test1()
{
	doWork(new Coffee);
	cout << "----------------" << endl;
	doWork(new Tea);
}
int main()
{
	test1();

	return 0;
}