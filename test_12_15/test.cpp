//#include <iostream>
//#include <cstring>
//
//// StudentID�ඨ��
//class StudentID {
//private:
//    int value;
//public:
//    // ���캯��
//    StudentID(int id = 0) : value(id) {
//        std::cout << "Assigning student id " << value << std::endl;
//    }
//    // ��������
//    ~StudentID() {
//        std::cout << "Destructing id " << value << std::endl;
//    }
//};
//
//// Student�ඨ��
//class Student {
//private:
//    char name[20];
//    StudentID id;
//public:
//    // ���캯��
//    Student(char* pName = "no name", int ssID = 0) : id(ssID) {
//        strcpy(name, pName);
//        std::cout << "Constructing student " << name << std::endl;
//    }
//};
//
//int main() {
//    Student s("Randy", 9818);
//    Student t("Jenny");
//    return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class Employee {
//public:
//    Employee(char*, char*, char*, char*, int);
//    void ChangeName(char*);
//    void Display();
//protected:
//    char name[20];
//    char address[20];
//    char city[20];
//    char province[20];
//    int PostalCode;
//
//};
//
//Employee::Employee(char* pName = "zhangsan", char* pAddress = "zeguo", char* pCity = "wenlin", char* pProvince = "zhejiang", int pPostalCode = 1234) {
//    strncpy(name, pName, sizeof(name));
//    name[sizeof(name) - 1] = '\0';
//    strncpy(address, pAddress, sizeof(address));
//    address[sizeof(address) - 1] = '\0';
//    strncpy(city, pCity, sizeof(city));
//    city[sizeof(city) - 1] = '\0';
//    strncpy(province, pProvince, sizeof(province));
//    province[sizeof(province) - 1] = '\0';
//    PostalCode = pPostalCode;
//}
//
//void Employee::ChangeName(char* pName) {
//    strncpy(name, pName, sizeof(name));
//    name[sizeof(name) - 1] = '\0';
//}
//
//void Employee::Display() {
//    cout << "������ " << name << endl
//        << "��ַ�� " << address << endl
//        << "�У� " << city << endl
//        << "ʡ�� " << province << endl
//        << "�������룺 " << PostalCode << endl;
//}
//
//int main() {
//    Employee lisi;
//    lisi.ChangeName("zhangsan");
//    lisi.Display();
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//class MyClass {
//public:
//    MyClass();
//    MyClass(int);
//    ~MyClass();
//    void Display();
//protected:
//    int number;
//};
//
//MyClass::MyClass() {
//    cout << "Constructing normally.\n";
//
//    number = 0;
//}
//
//MyClass::MyClass(int m) : number(m) {
//    cout << "Constructing with a number:" << number << endl;
//}
//
//MyClass::~MyClass() {
//    cout << "Destructing\n";
//}
//
//void MyClass::Display() {
//    cout << "Display a number:" << number << endl;
//}
//
//int main() {
//    MyClass obj1;
//    MyClass obj2(20);
//
//    obj1.Display();
//    obj2.Display();
//    return 0;
//}