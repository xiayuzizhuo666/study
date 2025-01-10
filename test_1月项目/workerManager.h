#pragma once//防止头文件重复包含

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
	bool m_FileIsEmpty;//判断文件是否为空
	int m_EmpNum;
	Worker** m_EmpArray;//员工数组指针

	WorkerMannager();

	void Add_Emp();

	void Show_Menu();//展现菜单

	void exitSystem();//退出程序

	void save();//保存文件

	int get_EmpNum();//统计人数

	void init_Emp();//初始化员工

	void Show_Emp();//显示职工

	int IsExist(int id);//判断职工是否存在（根据职工编号,不存在返回-1）

	void Del_Emp();//删除职工

	void Mod_Emp();//修改职工

	void Find_Emp();//查找职工

	void Sort_Emp();//排序员工

	void Clean_File();//清空

	~WorkerMannager();
};

