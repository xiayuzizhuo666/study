#include <iostream>
#include <string>
using namespace std;

class AbstractDringking
{
public:
	virtual void Boil() = 0;//��ˮ
	virtual void Brew() = 0;//����
	virtual void PourInCup() = 0;//���뱭��
	virtual void PutSomething() = 0;//��������
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
		cout << "�󿧷�" << endl;
	}//��ˮ
	void Brew() {
		cout << "���ݿ���" << endl;
	}//����
	void PourInCup() {
		cout << "���뱭��" << endl;
	}//���뱭��
	void PutSomething() {
		cout << "������andţ��" << endl;
	}//��������
};
class Tea :public AbstractDringking {
public:
	void Boil() {
		cout << "��ũ����Ȫ" << endl;
	}//��ˮ
	void Brew() {
		cout << "���ݲ�Ҷ" << endl;
	}//����
	void PourInCup() {
		cout << "���뱭��" << endl;
	}//���뱭��
	void PutSomething() {
		cout << "�������" << endl;
	}//��������
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