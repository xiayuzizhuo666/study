#pragma once//��ֹͷ�ļ��ظ�����

#include <iostream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define FILENAME "empFile.txt"
using namespace std;


class WorkerMannager
{
public:
	bool m_FileIsEmpty;//�ж��ļ��Ƿ�Ϊ��
	int m_EmpNum;
	Worker** m_EmpArray;//Ա������ָ��

	WorkerMannager();

	void Add_Emp();

	void Show_Menu();//չ�ֲ˵�

	void exitSystem();//�˳�����

	void save();//�����ļ�

	int get_EmpNum();//ͳ������

	void init_Emp();//��ʼ��Ա��

	void Show_Emp();//��ʾְ��

	int IsExist(int id);//�ж�ְ���Ƿ���ڣ�����ְ�����,�����ڷ���-1��

	void Del_Emp();//ɾ��ְ��

	void Mod_Emp();//�޸�ְ��

	void Find_Emp();//����ְ��

	void Sort_Emp();//����Ա��

	void Clean_File();//���

	~WorkerMannager();
};

