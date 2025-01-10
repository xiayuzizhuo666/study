#include "workerManager.h"

WorkerMannager::WorkerMannager()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    if (!ifs.is_open())//文件不存在
    {
        //cout << "文件不存在" << endl;//测试输出
        //初始化人数
        this->m_EmpNum = 0;

        this->m_FileIsEmpty = true;//初始化文件标志为空标志
        //初始化数组指针
        this->m_EmpArray = NULL;
        ifs.close();//关闭文件

        return;
    }
    //文件存在，但未记录
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        //cout << "文件为空！" << endl;
        //初始化人数
        this->m_EmpNum = 0;
        //初始化文件标志为空标志
        this->m_FileIsEmpty = true;
        //初始化数组指针
        this->m_EmpArray = NULL;
        ifs.close();//关闭文件

        return;
    }
    int num = this->get_EmpNum();
    //cout << "职工个数：" << num << endl;//测试代码
    this->m_EmpNum = num;
}
void WorkerMannager::init_Emp()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int did;


    int index = 0;
    while (ifs>> id&&ifs>>name&&ifs>>did)
    {
        Worker* worker = NULL;
        //根据不同部门的id创建不同对象
        if (did == 1)//普通员工
        {
            worker = new Employee(id, name, did);
        }
        else if (did == 2)//经理
        {
            worker = new Manager(id, name, did);
        }
        else if (did == 3)//老板
        {
            worker = new Boss(id, name, did);
        }

        //存储到数组里
        this->m_EmpArray[index] = worker;
        index++;

    }
    //根据职工数创建数组
    this->m_EmpArray = new Worker * [this->m_EmpNum];
    init_Emp();


    ////测试代码
    //for (int i = 0; i < m_EmpNum; i++)
    //{
    //    cout << "职工号：" << this->m_EmpArray[i]->m_Id
    //        << "职工姓名：" << this->m_EmpArray[i]->m_Name
    //        << "部门编号；" << this->m_EmpArray[i]->m_DeptId << endl;
    //}
}
void WorkerMannager::Show_Menu()
{
	cout << "*******************************************" << endl;
	cout << "*********欢迎使用职工管理系统！************" << endl;
	cout << "************  0.退出管理程序  *************" << endl;
	cout << "************  1.增加职工信息  *************" << endl;
	cout << "************  2.显示职工信息  *************" << endl;
	cout << "************  3.删除离职员工  *************" << endl;
	cout << "************  4.修改职工信息  *************" << endl;
	cout << "************  5.查找职工信息  *************" << endl;
	cout << "************  6.按照编号排序  *************" << endl;
	cout << "************  7.清空所有文件  *************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}
void WorkerMannager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}



void WorkerMannager::Add_Emp()
{
    cout << "请输入添加职工数量：" << endl;

    int addNum = 0;
    cin >> addNum;

    if (addNum > 0)
    {
        // 计算新空间大小
        int newSize = this->m_EmpNum + addNum;

        // 开辟新空间
        Worker** newSpace = new Worker * [newSize];

        // 将原空间下的内容放到新空间下
        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i]; // 拷贝原有员工信息
            }
        }

        // 添加新职工
        for (int i = 0; i < addNum; i++)
        {
            int id;
            string name;
            int dSelect;

            // 输入逻辑
            cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
            cin >> id;

            cout << "请输入第" << i + 1 << "个新职工姓名：" << endl;
            cin >> name;

            // 岗位输入
            cout << "该职工的岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> dSelect;

            Worker* worker = nullptr;
            switch (dSelect)
            {
            case 1:
                worker = new Employee(id, name, 1);
                break;
            case 2:
                worker = new Manager(id, name, 2);
                break;
            case 3:
                worker = new Boss(id, name, 3);
                break;
            default:
                cout << "岗位置无效，跳过。" << endl;
                continue;  // 未定义岗位则继续
            }

            // 更新员工数组
            newSpace[this->m_EmpNum + i] = worker; // 使用正确的索引
        }

        // 释放原有空间
        for (int i = 0; i < this->m_EmpNum; i++)
        {
            delete this->m_EmpArray[i];
        }
        delete[] this->m_EmpArray;

        // 更新指针
        this->m_EmpArray = newSpace;

        // 更新员工数量
        this->m_EmpNum = newSize;

        this->save();
        cout << "成功添加" << addNum << "名新职工！" << endl;
    }
    else
    {
        cout << "输入有误！" << endl;
    }

    system("pause");
    system("cls");
}




void WorkerMannager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);




    for (int i = 0; i < this->m_EmpNum; i++)
    {
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->m_DeptId << endl;
    }

    ofs.close();
}

int WorkerMannager::get_EmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int did;

    int num = 0;

    while (ifs >> id && ifs >> name && ifs >> did) 
    {
        //记录人数
        num++;
    }
    ifs.close();

    return num;
}

void WorkerMannager::Show_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "文件不存在或记录为空！" << endl;
    }
    else
    {
        for (int i = 0; i < m_EmpNum; i++)
        {
            //利用多态调用接口
            this->m_EmpArray[i]->showInfo();
        }
        system("pause");
        system("cls");
    }
}

int WorkerMannager::IsExist(int id)
{
    int index = -1;
    for (int i = 0; i < this->m_EmpNum; i++)
    {
        if (this->m_EmpArray[i]->m_Id == id) 
        {
            index = 1;

            break;
        }
    }

    return index;
}
void WorkerMannager::Del_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "文件不存在或者记录为空！" << endl;
    }
    else
    {
        //按照职工编号删除
        cout << "请输入想要删除的职工编号：" << endl;
        int id = 0;
        cin >> id;


        int index = this->IsExist(id);

        if (index != -1 )//职工存在，执行->删除index对应的职工
        {
            //数据前移
            for (int i = index; i < this->m_EmpNum-1; i++)
            {
                this->m_EmpArray[i] = this->m_EmpArray[i + 1];
            }
            this->m_EmpNum--;//更新数组中记录个数
            //数据同步更新到文件中
            this->save();
            cout << "删除成功！" << endl;
        }
        else
        {
            cout << "删除失败，未找到该职工！" << endl;
        }

        system("pause");
        system("cls");
    }
}

void WorkerMannager::Mod_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "文件不存在或者记录为空！" << endl;
    }
    else
    {
        cout << "请输入修改职工的编号：" << endl;
        int id;
        cin >> id;


        int ret = this->IsExist(id);
        if (ret != -1)
        {
            //查找到编号的职工
            delete this->m_EmpArray[ret];

            int newId = 0;
            string newName = " ";
            int dSelect = 0;

            cout << "查到：" << id << "号职工，请输入新的职工号" << endl;
            cin >> newId;

            cout << "请输入新姓名：" << endl;
            cin >> newName;

            cout << "请输入岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> dSelect;

            Worker* worker = NULL;
            switch (dSelect)
            {
            case 1:
                worker = new Employee(newId, newName, dSelect);
                break;
            case 2:
                worker = new Manager(newId, newName, dSelect);
                break;
            case 3:
                worker = new Boss(newId, newName, dSelect);
                break;
            default:
                cout << "岗位置无效" << endl;
                break;
            }
            //更新数据到数组中
            this->m_EmpArray[ret] = worker;

            cout << "修改成功！" << this->m_EmpArray[ret]->m_DeptId << endl;

            //保存到文件中
            this->save();
        }
        else
        {
            cout << "修改失败，查无此人！" << endl;
        }
    }

    system("paues");
    system("cls");
}


void WorkerMannager::Find_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "文件不存在或者记录为空！" << endl;
    }
    else
    {
        cout << "请输入查找方式：" << endl;
        cout << "1、按职工编号查找" << endl;
        cout << "2、按姓名查找" << endl;


        int select = 0;
        cin >> select;

        if (select == 1)
        {
            int id;
            cout << "请输入查找的职工编号：" << endl;
            cin >> id;

            int ret = IsExist(id);
            if (ret != -1)
            {
                cout << "查找成功！该职工信息如下：" << endl;
                this->m_EmpArray[ret]->showInfo();
            }
            else
            {
                cout << "查找失败，查无此人！" << endl;
            }
            if (select == 2)
            {
                string name;
                cout << "请输入查找的姓名：" << endl;
                cin >> name;

                bool flag = false;//查找判断标志

                for (int i = 0; i < this->m_EmpNum; i++)
                {
                    if (this->m_EmpArray[i]->m_Name == name)
                    {
                        cout << "查找成功，职工编号为" << m_EmpArray[i]->m_Id
                            << "号的信息如下：" << endl;
                        flag = true;//更新标志，查找成功

                        this->m_EmpArray[i]->showInfo();
                    }
                }
                if (flag == false)
                {
                    cout << "查找失败，查无此人！" << endl;
                }
            }
            else
            {
                cout << "输入选项有误！" << endl;
            }
        }

    }
    system("pause");
    system("cls");
}


void WorkerMannager::Sort_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "文件不存在或者记录为空！" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        cout << "请选择你的排序方式：" << endl;
        cout << "1、按职工编号进行升序" << endl;
        cout << "2、按职工编号进行降序" << endl;

        int select = 0;
        cin >> select;



        for (int i = 0; i < m_EmpNum; i++)
        {
            int minOrMax = 1;
            for (int j = i+1; j < m_EmpNum; j++)
            {
                if (select == 1)//升序 
                {
                    if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[minOrMax]->m_Id)
                    {
                        minOrMax = j;
                    }
                }
                else if(select == 2)//降序
                {
                    if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[minOrMax]->m_Id)
                    {
                        minOrMax = j;
                    }
                }
                else
                {
                    cout << "选择错误！" << endl;
                    break;
                }
            }
            if (i != minOrMax)
            {
                Worker* temp = m_EmpArray[i];
                m_EmpArray[i] = m_EmpArray[i + 1];
                m_EmpArray[i + 1] = temp;
            }

        }

        cout << "排序完成，排序后结果为：" << endl;
        this->save();
        this->Show_Emp();
    }
}


void WorkerMannager::Clean_File()
{
    cout << "确认清空？(不能反悔哦！)" << endl;
    cout << "1、确定" << endl;
    cout << "2、返回" << endl;

    int select = 0;
    cin >> select;

    if (select == 1)
    {
        //打开模式 ios::trunc 如果存在，则删除文件，重新创建
        ofstream ofs(FILENAME, ios::trunc);
        ofs.close();

        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < m_EmpNum; i++)
            {
                if (this->m_EmpArray[i] != NULL)
                {
                    delete this->m_EmpArray[i];

                }
            }
            this->m_EmpNum = 0;
            delete[] this->m_EmpArray;
            this->m_EmpArray = NULL;
            this->m_FileIsEmpty = true;

        }
        cout << "清空完成！（一干二净）" << endl;

    }
    system("pause");
    system("cls");
}



WorkerMannager::~WorkerMannager()
{
    if (this->m_EmpArray != NULL)
    {
        for (int i = 0; i < m_EmpNum; i++)
        {
            if (this->m_EmpArray[i] != NULL)
            {
                delete this->m_EmpArray[i];

            }
        }
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;

}