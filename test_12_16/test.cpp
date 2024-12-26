//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Transport
//{
//public:
//    Transport(const char* name, double value)
//    {
//        typeName = new char[strlen(name) + 1];
//        strcpy(typeName, name);
//        price = value;
//        cout << "Constructing Transport" << endl;
//    }
//
//    virtual ~Transport()
//    {
//        delete[] typeName;
//        cout << "Destructing Transport" << endl;
//    }
//
//    virtual void start()
//    {
//        cout << "Transport����\n";
//    }
//    virtual void stop()
//    {
//        cout << "Transportֹͣ\n";
//    }
//
//    const char* getTypeName() const { return typeName; }
//    double getPrice() const { return price; }
//
//    virtual void display()
//    {
//        cout << "�ͺ�Ϊ" << typeName << " "
//            << "Ʊ��Ϊ" << price << endl;
//    }
//
//private:
//    char* typeName;
//    double price;
//};
//
//class Airplane : public Transport
//{
//public:
//    Airplane(const char* name, double value) : Transport(name, value)
//    {
//        cout << "Constructing Airplane" << endl;
//    }
//    ~Airplane() override
//    {
//    }
//
//    void start() override
//    {
//        cout << "Airplane����" << endl;
//    }
//    void stop() override
//    {
//        cout << "Airplaneֹͣ" << endl;
//    }
//    void fly()
//    {
//        cout << "����" << endl;
//    }
//    void display() override
//    {
//        cout << "�ͺ�Ϊ" << getTypeName() << " "
//            << "Ʊ��Ϊ" << getPrice() << endl;
//    }
//};
//
//class Train : public Transport
//{
//public:
//    Train(const char* name, double value) : Transport(name, value)
//    {
//        cout << "Constructing Train" << endl;
//    }
//    ~Train() override
//    {
//    }
//
//    void start() override
//    {
//        cout << "Train����" << endl;
//    }
//    void stop() override
//    {
//        cout << "Trainֹͣ" << endl;
//    }
//    void drive()
//    {
//        cout << "��ʻ" << endl;
//    }
//    void display() override
//    {
//        cout << "�ͺ�Ϊ" << getTypeName() << " "
//            << "Ʊ��Ϊ" << getPrice() << endl;
//    }
//};
//
//int main()
//{
//    char name[100];
//    double value;
//    cout << "please input Airplane information:" << endl;
//    cin >> name >> value;
//    Airplane a(name, value);
//    a.start();
//    a.stop();
//    a.fly();
//    a.display();
//
//    cout << "\nplease input Train information:" << endl;
//    cin >> name >> value;
//    Train t(name, value);
//    t.start();
//    t.stop();
//    t.drive();
//    t.display();
//
//    return 0;
//}



///********** Begin **********/
//#include <iostream>
//using namespace std;
//
//class A
//{
//    // int x = 3;
//    int a;
//public:
//
//    A(int input_a) : a(input_a)
//    {
//        cout << "Constructing A" << endl;
//        cout << "a=" << a << endl;
//    }
//};
//
//class B : public A
//{
//public:
//
//    B() : A(3)
//    {
//        cout << "Constructing B" << endl;
//    }
//};
//
//int main()
//{
//    B b;
//    return 0;
//}
//
//
///**********  End  **********/



