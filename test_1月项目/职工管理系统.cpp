#include <iostream>
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

//void test()
//{
//	Worker* worker = NULL;
//	worker = new Employee(1, "����", 1);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Manager(2, "����", 2);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Boss(3, "����", 3);
//	worker->showInfo();
//	delete worker;
//
//}

int main()
{
	//ʵ���������߶���
	WorkerMannager wm;

	char choice;//�����洢�û�ѡ��
	while (true)
	{
		//����չʾ�˵�
		wm.Show_Menu();

		cout << "��������Ҫִ�еĲ���ѡ�����֣���" << endl;
		cin >> choice;
		switch (choice)
		{
		case '0'://�˳�ϵͳ
			wm.exitSystem();//�˳�
			break;
		case '1'://���Ա��
			wm.Add_Emp();
			break;
		case '2'://��ʾԱ��
			wm.Show_Emp();
			break;
		case '3'://ɾ��Ա��
			wm.Del_Emp();
			break;
		case '4'://�޸�Ա��
			wm.Mod_Emp();
			break;
		case '5'://����Ա��
			wm.Find_Emp();
			break;
		case '6'://����Ա��
			wm.Sort_Emp();
			break;
		case '7'://����ļ�
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");

	return 0;
}