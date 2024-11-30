#include<iostream>
#include<iomanip>
#include<cstring>
#include<string> 
#include<cmath>
#include<algorithm>
using namespace std;

string Copy();//对所有函数提前声明
string Add();
int Find();
int rFind();
string Insert();
string Reset();
void Print(int site);
void Printall(int total);
bool isnum(string s);

string* str;

//由于N，X，L可由find与rfind操作表达式构成，S，S1，S2可由copy与add操作表达式构成
//故在输入前要判断N,X,L,S等的具体操作

string Copy()
{
    string N, X, L;
    int n, x, l;
    cin >> N;
    if (N == "find")//如果是find，则调用Find函数
    {
        n = Find();
    }
    else if (N == "rfind")//如果是rfind，则调用rFind函数
    {
        n = rFind();
    }
    else//如果都不是，则只能是string型的数字，把它转化成int型
    {
        n = stoi(N);
    }
    cin >> X;//X与N同理
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
    cin >> L;//X与N同理
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
        l = stoi(L);//string类型转int型 运用stoi函数
    }
    string endcpy = str[n - 1].substr(x, l);//最终得到一个字符串，即从第N个字符串的X出取出L长的子串，运用substr函数
    return endcpy;
}

//substr()的功能是返回某个子字符串
//用法：
//string str1 = str0.substr();  //默认时的长度为从开始位置到尾
//string str2 = str0.substr(p);  //获得字符串str0中 从第p位开始到尾的字符串
//string str3 = str0.substr(p, l);  //获得字符串str0中 从第p位开始的长度为l的字符串

string Add()
{
    string S1, S2, s1, s2;
    int si1, si2;
    cin >> S1;
    if (S1 == "copy")//如果是copy则调用Copy函数
    {
        s1 = Copy();
    }
    else if (S1 == "add")//如果是add则调用Add函数
    {
        s1 = Add();
    }
    else//如果不是，则直接的到S串
    {
        s1 = S1;
    }
    cin >> S2;//S2同S1
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
    if (isnum(s1) && isnum(s2))//判断是否s1和s2都是整数，若是先从string型转化为int型，相加后再转化成string型
    {
        si1 = stoi(s1);
        si2 = stoi(s2);
        int sumi = si1 + si2;
        string sume = to_string(sumi);//int型转化成string型运用 to_string函数
        return sume;
    }
    else
    {
        return s1 + s2;//不是则可以直接相加，string类型常用操作有：“>”“<”“>=”“<=”“==”“!=”“+”“+=”
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
    if (str[n - 1].find(s) != string::npos)//在str串中查找s串的位置，如果找到，则返回该子字符串首次出现时其首字符的索引；
        //否则，返回 string::npos
        //string 类将 npos 定义为保证大于任何有效下标的值
    {
        place = str[n - 1].find(s);//找到的话记录下其位置
    }
    else
    {
        place = str[n - 1].size();//没找到则返回其长度
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
    if (str[n - 1].rfind(s) != string::npos)//rfind与find原理相同，区别是其从右端开始检索
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
    string ist = str[n - 1].insert(x, s);//用insert函数在str的x处插入s字符串
    return ist;
}

//insert()的功能是进行插入
//用法：
//str0.insert(size_t pos,const string＆str);  // 在str0的pos位置处插入字符串str
//str0.insert(size_t pos,const string＆str,size_t subpos,size_t sublen);// 在str0的pos位置处插入字符串str从位置处开始的sublen个字符

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
    swap(str[n - 1], s);//重置直接用swap交换即可，str是全局变量，而s是局部变量，生命周期不同
    return str[n - 1];//返回交换后的str，注意第n个字符串是str[n-1]
}

void Print(int site)
{
    cout << str[site - 1] << endl;//输出单个字符串
}

void Printall(int total)
{
    for (int i = 0; i < total; i++)
    {
        cout << str[i] << endl;//输出全部字符串
    }
}

bool isnum(string s)//判断字符串是否全为数字
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

//at()的功能是存取单一字符
//用法：
//string str;
//str.at(p)表示字符串str中下标为p的字符


int main()
{
    int n0;
    cin >> n0;
    str = new string[n0];
    for (int i = 0; i < n0; i++)
    {
        cin >> str[i];//输入字符串到str中，其中str是全局变量
    }
    while (1)//操作若干，over结束，因此选择while(1)
    {
        string operation;
        cin >> operation;
        if (operation == "copy")//根据对应的operation，进行对应的操作
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
        else if (operation == "over")//若是over直接跳出循环，程序运行结束
        {
            break;
        }
    }
    return 0;
}