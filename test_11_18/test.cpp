#include<iostream>
#include<iomanip>
#include<cstring>
#include<string> 
#include<cmath>
#include<algorithm>
using namespace std;

string Copy();//�����к�����ǰ����
string Add();
int Find();
int rFind();
string Insert();
string Reset();
void Print(int site);
void Printall(int total);
bool isnum(string s);

string* str;

//����N��X��L����find��rfind�������ʽ���ɣ�S��S1��S2����copy��add�������ʽ����
//��������ǰҪ�ж�N,X,L,S�ȵľ������

string Copy()
{
    string N, X, L;
    int n, x, l;
    cin >> N;
    if (N == "find")//�����find�������Find����
    {
        n = Find();
    }
    else if (N == "rfind")//�����rfind�������rFind����
    {
        n = rFind();
    }
    else//��������ǣ���ֻ����string�͵����֣�����ת����int��
    {
        n = stoi(N);
    }
    cin >> X;//X��Nͬ��
    if (X == "find")
    {
        x = Find();
    }
    else if (X == "rfind")
    {
        x = rFind();
    }
    else
    {
        x = stoi(X);
    }
    cin >> L;//X��Nͬ��
    if (L == "find")
    {
        l = Find();
    }
    else if (L == "rfind")
    {
        l = rFind();
    }
    else
    {
        l = stoi(L);//string����תint�� ����stoi����
    }
    string endcpy = str[n - 1].substr(x, l);//���յõ�һ���ַ��������ӵ�N���ַ�����X��ȡ��L�����Ӵ�������substr����
    return endcpy;
}

//substr()�Ĺ����Ƿ���ĳ�����ַ���
//�÷���
//string str1 = str0.substr();  //Ĭ��ʱ�ĳ���Ϊ�ӿ�ʼλ�õ�β
//string str2 = str0.substr(p);  //����ַ���str0�� �ӵ�pλ��ʼ��β���ַ���
//string str3 = str0.substr(p, l);  //����ַ���str0�� �ӵ�pλ��ʼ�ĳ���Ϊl���ַ���

string Add()
{
    string S1, S2, s1, s2;
    int si1, si2;
    cin >> S1;
    if (S1 == "copy")//�����copy�����Copy����
    {
        s1 = Copy();
    }
    else if (S1 == "add")//�����add�����Add����
    {
        s1 = Add();
    }
    else//������ǣ���ֱ�ӵĵ�S��
    {
        s1 = S1;
    }
    cin >> S2;//S2ͬS1
    if (S2 == "copy")
    {
        s2 = Copy();
    }
    else if (S2 == "add")
    {
        s2 = Add();
    }
    else
    {
        s2 = S2;
    }
    if (isnum(s1) && isnum(s2))//�ж��Ƿ�s1��s2���������������ȴ�string��ת��Ϊint�ͣ���Ӻ���ת����string��
    {
        si1 = stoi(s1);
        si2 = stoi(s2);
        int sumi = si1 + si2;
        string sume = to_string(sumi);//int��ת����string������ to_string����
        return sume;
    }
    else
    {
        return s1 + s2;//���������ֱ����ӣ�string���ͳ��ò����У���>����<����>=����<=����==����!=����+����+=��
    }
}

int Find()
{
    string S, N;
    string s;
    int n;
    cin >> S;
    if (S == "copy")
    {
        s = Copy();
    }
    else if (S == "add")
    {
        s = Add();
    }
    else
    {
        s = S;
    }
    cin >> N;
    if (N == "find")
    {
        n = Find();
    }
    else if (N == "rfind")
    {
        n = rFind();
    }
    else
    {
        n = stoi(N);
    }
    int place;
    if (str[n - 1].find(s) != string::npos)//��str���в���s����λ�ã�����ҵ����򷵻ظ����ַ����״γ���ʱ�����ַ���������
        //���򣬷��� string::npos
        //string �ཫ npos ����Ϊ��֤�����κ���Ч�±��ֵ
    {
        place = str[n - 1].find(s);//�ҵ��Ļ���¼����λ��
    }
    else
    {
        place = str[n - 1].size();//û�ҵ��򷵻��䳤��
    }
    return place;
}

int rFind()
{
    string S, N;
    string s;
    int n;
    cin >> S;
    if (S == "copy")
    {
        s = Copy();
    }
    else if (S == "add")
    {
        s = Add();
    }
    else
    {
        s = S;
    }
    cin >> N;
    if (N == "find")
    {
        n = Find();
    }
    else if (N == "rfind")
    {
        n = rFind();
    }
    else
    {
        n = stoi(N);
    }
    int place;
    if (str[n - 1].rfind(s) != string::npos)//rfind��findԭ����ͬ������������Ҷ˿�ʼ����
    {
        place = str[n - 1].rfind(s);
    }
    else
    {
        place = str[n - 1].size();
    }
    return place;
}

string Insert()
{
    string S, N, X;
    string s;
    int n, x;
    cin >> S;
    if (S == "copy")
    {
        s = Copy();
    }
    else if (S == "add")
    {
        s = Add();
    }
    else
    {
        s = S;
    }
    cin >> N;
    if (N == "find")
    {
        n = Find();
    }
    else if (N == "rfind")
    {
        n = rFind();
    }
    else
    {
        n = stoi(N);
    }
    cin >> X;
    if (X == "find")
    {
        x = Find();
    }
    else if (X == "rfind")
    {
        x = rFind();
    }
    else
    {
        x = stoi(X);
    }
    string ist = str[n - 1].insert(x, s);//��insert������str��x������s�ַ���
    return ist;
}

//insert()�Ĺ����ǽ��в���
//�÷���
//str0.insert(size_t pos,const string��str);  // ��str0��posλ�ô������ַ���str
//str0.insert(size_t pos,const string��str,size_t subpos,size_t sublen);// ��str0��posλ�ô������ַ���str��λ�ô���ʼ��sublen���ַ�

string Reset()
{
    string S, N;
    string s;
    int n;
    cin >> S;
    if (S == "copy")
    {
        s = Copy();
    }
    else if (S == "add")
    {
        s = Add();
    }
    else
    {
        s = S;
    }
    cin >> N;
    if (N == "find")
    {
        n = Find();
    }
    else if (N == "rfind")
    {
        n = rFind();
    }
    else
    {
        n = stoi(N);
    }
    swap(str[n - 1], s);//����ֱ����swap�������ɣ�str��ȫ�ֱ�������s�Ǿֲ��������������ڲ�ͬ
    return str[n - 1];//���ؽ������str��ע���n���ַ�����str[n-1]
}

void Print(int site)
{
    cout << str[site - 1] << endl;//��������ַ���
}

void Printall(int total)
{
    for (int i = 0; i < total; i++)
    {
        cout << str[i] << endl;//���ȫ���ַ���
    }
}

bool isnum(string s)//�ж��ַ����Ƿ�ȫΪ����
{
    if (s.size() > 5)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s.at(i) > '9' || s.at(i) < '0')
            {
                return false;
            }
        }
        return true;
    }
}

//at()�Ĺ����Ǵ�ȡ��һ�ַ�
//�÷���
//string str;
//str.at(p)��ʾ�ַ���str���±�Ϊp���ַ�


int main()
{
    int n0;
    cin >> n0;
    str = new string[n0];
    for (int i = 0; i < n0; i++)
    {
        cin >> str[i];//�����ַ�����str�У�����str��ȫ�ֱ���
    }
    while (1)//�������ɣ�over���������ѡ��while(1)
    {
        string operation;
        cin >> operation;
        if (operation == "copy")//���ݶ�Ӧ��operation�����ж�Ӧ�Ĳ���
        {
            Copy();
        }
        else if (operation == "add")
        {
            Add();
        }
        else if (operation == "find")
        {
            Find();
        }
        else if (operation == "rfind")
        {
            rFind();
        }
        else if (operation == "insert")
        {
            Insert();
        }
        else if (operation == "reset")
        {
            Reset();
        }
        else if (operation == "print")
        {
            int site0;
            cin >> site0;
            Print(site0);
        }
        else if (operation == "printall")
        {
            Printall(n0);
        }
        else if (operation == "over")//����overֱ������ѭ�����������н���
        {
            break;
        }
    }
    return 0;
}