//#include<iostream>
//#include<cmath>
//using namespace std;
//class RECT
//{
//protected:
//    double x;
//    double y;
//
//public:
//    RECT(double x1, double y1) :x(x1), y(y1) {};
//    double area()
//    {
//        return x * y;
//    }
//    double peri()
//    {
//        return 2 * x + 2 * y;
//    }
//    int isSquare()
//    {
//        if (x == y) return 1;
//        else return 0;
//    }
//};
//
//class CUB :public RECT
//{
//private:
//    double height;
//public:
//    CUB(double h, double x, double y) :height(h), RECT(x, y) {};
//    double volume()
//    {
//        double di_area = RECT::area();
//        return di_area * height;
//    }
//    double area()
//    {
//        double di_area = RECT::area();
//        double di_zhouchang = RECT::peri();
//        return 2 * di_area + di_zhouchang * height;
//    }
//    int isSquare()
//    {
//        if (RECT::isSquare())
//        {
//            if (height * height == RECT::area())
//            {
//                return true;
//            }
//            else return false;
//        }
//    }
//
//    void print()
//    {
//        cout << "长方体的体积为：";
//        cout << volume();
//        cout << endl;
//        cout << "长方体的表面积为：";
//        cout << area();
//        cout << endl;
//        if (isSquare())
//        {
//            cout << "该长方体是正方体";
//        }
//        else cout << "该长方体不是正方体";
//    }
//};



//#include<iostream>
//using namespace std;
//class Base
//{
//protected:
//    char name[8];
//    int num;
//
//public:
//    Base()
//    {
//        cout << "姓名：";
//        cin >> name;
//    }
//    void print()
//    {
//        cout << "姓名：" << name << '\t' << num << endl;
//    }
//};
//
//class Student :public Base
//{
//public:
//    Student()
//    {
//        cout << "考试成绩：";
//        cin >> num;
//    }
//    int Isgoodstudent()
//    {
//        if (num > 90) return 1;
//        else return 0;
//    }
//};
//
//class Teacher :public Base
//{
//public:
//    Teacher()
//    {
//        cout << "每年发表论文数：";
//        cin >> num;
//    }
//    int Isgoodteacher()
//    {
//        if (num > 3) return 1;
//        else return 0;
//    }
//};




//#include<iostream>
//#include<cstring>
//using namespace std;
//class Person
//{
//private:
//    int number1, age;
//    char name[10];
//
//public:
//    Person();
//    Person(int i, int j, const char* p)
//    {
//        number1 = i;
//        strcpy(name, p);
//        age = j;
//    }
//    void disp()
//    {
//        cout << "It's " << number1 << "," << name << "," << age << ",";
//    }
//};
//
//class Student :public Person
//{
//private:
//    int lesson;
//    char grade;
//
//public:
//    Student(int i, int j, const char* p, int k, char a) :Person(i, j, p), lesson(k), grade(a) {};
//    void disp()
//    {
//        Person::disp();
//        cout << lesson << ":" << grade << endl;
//    }
//};
//
//class Teacher :public Person
//{
//private:
//    char job[10], workplace[30];
//
//public:
//    Teacher(int i, int j, char* p, const char* a, const char* b) :Person(i, j, p)
//    {
//        strcpy(job, b);
//        strcpy(workplace, a);
//    }
//    void disp()
//    {
//        Person::disp();
//        cout << job << ":" << workplace;
//    }
//
//};

