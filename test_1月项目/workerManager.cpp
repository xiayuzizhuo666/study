#include "workerManager.h"

WorkerMannager::WorkerMannager()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    if (!ifs.is_open())//�ļ�������
    {
        //cout << "�ļ�������" << endl;//�������
        //��ʼ������
        this->m_EmpNum = 0;

        this->m_FileIsEmpty = true;//��ʼ���ļ���־Ϊ�ձ�־
        //��ʼ������ָ��
        this->m_EmpArray = NULL;
        ifs.close();//�ر��ļ�

        return;
    }
    //�ļ����ڣ���δ��¼
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        //cout << "�ļ�Ϊ�գ�" << endl;
        //��ʼ������
        this->m_EmpNum = 0;
        //��ʼ���ļ���־Ϊ�ձ�־
        this->m_FileIsEmpty = true;
        //��ʼ������ָ��
        this->m_EmpArray = NULL;
        ifs.close();//�ر��ļ�

        return;
    }
    int num = this->get_EmpNum();
    //cout << "ְ��������" << num << endl;//���Դ���
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
        //���ݲ�ͬ���ŵ�id������ͬ����
        if (did == 1)//��ͨԱ��
        {
            worker = new Employee(id, name, did);
        }
        else if (did == 2)//����
        {
            worker = new Manager(id, name, did);
        }
        else if (did == 3)//�ϰ�
        {
            worker = new Boss(id, name, did);
        }

        //�洢��������
        this->m_EmpArray[index] = worker;
        index++;

    }
    //����ְ������������
    this->m_EmpArray = new Worker * [this->m_EmpNum];
    init_Emp();


    ////���Դ���
    //for (int i = 0; i < m_EmpNum; i++)
    //{
    //    cout << "ְ���ţ�" << this->m_EmpArray[i]->m_Id
    //        << "ְ��������" << this->m_EmpArray[i]->m_Name
    //        << "���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
    //}
}
void WorkerMannager::Show_Menu()
{
	cout << "*******************************************" << endl;
	cout << "*********��ӭʹ��ְ������ϵͳ��************" << endl;
	cout << "************  0.�˳��������  *************" << endl;
	cout << "************  1.����ְ����Ϣ  *************" << endl;
	cout << "************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "************  3.ɾ����ְԱ��  *************" << endl;
	cout << "************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "************  5.����ְ����Ϣ  *************" << endl;
	cout << "************  6.���ձ������  *************" << endl;
	cout << "************  7.��������ļ�  *************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}
void WorkerMannager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}



void WorkerMannager::Add_Emp()
{
    cout << "���������ְ��������" << endl;

    int addNum = 0;
    cin >> addNum;

    if (addNum > 0)
    {
        // �����¿ռ��С
        int newSize = this->m_EmpNum + addNum;

        // �����¿ռ�
        Worker** newSpace = new Worker * [newSize];

        // ��ԭ�ռ��µ����ݷŵ��¿ռ���
        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i]; // ����ԭ��Ա����Ϣ
            }
        }

        // �����ְ��
        for (int i = 0; i < addNum; i++)
        {
            int id;
            string name;
            int dSelect;

            // �����߼�
            cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
            cin >> id;

            cout << "�������" << i + 1 << "����ְ��������" << endl;
            cin >> name;

            // ��λ����
            cout << "��ְ���ĸ�λ��" << endl;
            cout << "1����ְͨ��" << endl;
            cout << "2������" << endl;
            cout << "3���ϰ�" << endl;
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
                cout << "��λ����Ч��������" << endl;
                continue;  // δ�����λ�����
            }

            // ����Ա������
            newSpace[this->m_EmpNum + i] = worker; // ʹ����ȷ������
        }

        // �ͷ�ԭ�пռ�
        for (int i = 0; i < this->m_EmpNum; i++)
        {
            delete this->m_EmpArray[i];
        }
        delete[] this->m_EmpArray;

        // ����ָ��
        this->m_EmpArray = newSpace;

        // ����Ա������
        this->m_EmpNum = newSize;

        this->save();
        cout << "�ɹ����" << addNum << "����ְ����" << endl;
    }
    else
    {
        cout << "��������" << endl;
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
        //��¼����
        num++;
    }
    ifs.close();

    return num;
}

void WorkerMannager::Show_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
    }
    else
    {
        for (int i = 0; i < m_EmpNum; i++)
        {
            //���ö�̬���ýӿ�
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
        cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
    }
    else
    {
        //����ְ�����ɾ��
        cout << "��������Ҫɾ����ְ����ţ�" << endl;
        int id = 0;
        cin >> id;


        int index = this->IsExist(id);

        if (index != -1 )//ְ�����ڣ�ִ��->ɾ��index��Ӧ��ְ��
        {
            //����ǰ��
            for (int i = index; i < this->m_EmpNum-1; i++)
            {
                this->m_EmpArray[i] = this->m_EmpArray[i + 1];
            }
            this->m_EmpNum--;//���������м�¼����
            //����ͬ�����µ��ļ���
            this->save();
            cout << "ɾ���ɹ���" << endl;
        }
        else
        {
            cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ����" << endl;
        }

        system("pause");
        system("cls");
    }
}

void WorkerMannager::Mod_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
    }
    else
    {
        cout << "�������޸�ְ���ı�ţ�" << endl;
        int id;
        cin >> id;


        int ret = this->IsExist(id);
        if (ret != -1)
        {
            //���ҵ���ŵ�ְ��
            delete this->m_EmpArray[ret];

            int newId = 0;
            string newName = " ";
            int dSelect = 0;

            cout << "�鵽��" << id << "��ְ�����������µ�ְ����" << endl;
            cin >> newId;

            cout << "��������������" << endl;
            cin >> newName;

            cout << "�������λ��" << endl;
            cout << "1����ְͨ��" << endl;
            cout << "2������" << endl;
            cout << "3���ϰ�" << endl;
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
                cout << "��λ����Ч" << endl;
                break;
            }
            //�������ݵ�������
            this->m_EmpArray[ret] = worker;

            cout << "�޸ĳɹ���" << this->m_EmpArray[ret]->m_DeptId << endl;

            //���浽�ļ���
            this->save();
        }
        else
        {
            cout << "�޸�ʧ�ܣ����޴��ˣ�" << endl;
        }
    }

    system("paues");
    system("cls");
}


void WorkerMannager::Find_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
    }
    else
    {
        cout << "��������ҷ�ʽ��" << endl;
        cout << "1����ְ����Ų���" << endl;
        cout << "2������������" << endl;


        int select = 0;
        cin >> select;

        if (select == 1)
        {
            int id;
            cout << "��������ҵ�ְ����ţ�" << endl;
            cin >> id;

            int ret = IsExist(id);
            if (ret != -1)
            {
                cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
                this->m_EmpArray[ret]->showInfo();
            }
            else
            {
                cout << "����ʧ�ܣ����޴��ˣ�" << endl;
            }
            if (select == 2)
            {
                string name;
                cout << "��������ҵ�������" << endl;
                cin >> name;

                bool flag = false;//�����жϱ�־

                for (int i = 0; i < this->m_EmpNum; i++)
                {
                    if (this->m_EmpArray[i]->m_Name == name)
                    {
                        cout << "���ҳɹ���ְ�����Ϊ" << m_EmpArray[i]->m_Id
                            << "�ŵ���Ϣ���£�" << endl;
                        flag = true;//���±�־�����ҳɹ�

                        this->m_EmpArray[i]->showInfo();
                    }
                }
                if (flag == false)
                {
                    cout << "����ʧ�ܣ����޴��ˣ�" << endl;
                }
            }
            else
            {
                cout << "����ѡ������" << endl;
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
        cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        cout << "��ѡ���������ʽ��" << endl;
        cout << "1����ְ����Ž�������" << endl;
        cout << "2����ְ����Ž��н���" << endl;

        int select = 0;
        cin >> select;



        for (int i = 0; i < m_EmpNum; i++)
        {
            int minOrMax = 1;
            for (int j = i+1; j < m_EmpNum; j++)
            {
                if (select == 1)//���� 
                {
                    if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[minOrMax]->m_Id)
                    {
                        minOrMax = j;
                    }
                }
                else if(select == 2)//����
                {
                    if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[minOrMax]->m_Id)
                    {
                        minOrMax = j;
                    }
                }
                else
                {
                    cout << "ѡ�����" << endl;
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

        cout << "������ɣ��������Ϊ��" << endl;
        this->save();
        this->Show_Emp();
    }
}


void WorkerMannager::Clean_File()
{
    cout << "ȷ����գ�(���ܷ���Ŷ��)" << endl;
    cout << "1��ȷ��" << endl;
    cout << "2������" << endl;

    int select = 0;
    cin >> select;

    if (select == 1)
    {
        //��ģʽ ios::trunc ������ڣ���ɾ���ļ������´���
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
        cout << "�����ɣ���һ�ɶ�����" << endl;

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