///********* Begin *********/
//class Rectangle
//{
//private:
//    int height; // �߶�
//    int width;  // ���
//
//public:
//    // ���ó����εĸߺͿ���
//    void Set(int h, int w) {
//        height = h;
//        width = w;
//    }
//
//    // ��ȡ�����ε��������
//    int GetArea() {
//        return height * width;
//    }
//};
///********* End *********/
//
//Rectangle GetRect(int h, int w)
//{
//    /********* Begin *********/
//    // ����һ�� h*w �� Rectangle ����
//    Rectangle rect;
//    rect.Set(h, w);
//    return rect;
//    /********* End *********/
//}
//
//int GetRectArea(Rectangle rect)
//{
//    /********* Begin *********/
//    // ���� rect ��������
//    return rect.GetArea();
//    /********* End *********/
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    Rectangle rect = GetRect(5, 10); // ����һ�� 5*10 �ĳ�����
//    cout << "�����ε������: " << GetRectArea(rect) << endl; // ������
//    return 0;
//}
// 
// 
// 
// 
// 
//#include <iostream>
//using namespace std;
//
///********* Begin *********/
//// �ڴ˴�ʵ��һ��������
//class Car {
//private:
//    bool door; // ����״̬��trueΪ�򿪣�ON����falseΪ�رգ�OFF��
//    bool light; // ����״̬��trueΪ�򿪣�ON����falseΪ�رգ�OFF��
//    int speed; // ����
//
//public:
//    // ���캯��
//    Car() : door(false), light(false), speed(0) {}
//
//    // �򿪳���
//    void OpenDoor() {
//        door = true;
//    }
//
//    // �رճ���
//    void CloseDoor() {
//        door = false;
//    }
//
//    // �򿪳���
//    void TurnOnLight() {
//        light = true;
//    }
//
//    // �رճ���
//    void TurnOffLight() {
//        light = false;
//    }
//
//    // ����
//    void Accelerate() {
//        speed += 10;
//    }
//
//    // ����
//    void Decelerate() {
//        speed -= 10;
//        if (speed < 0) {
//            speed = 0; // ��֤�ٶȲ�С��0
//        }
//    }
//
//    // �������״̬
//    void PrintStatus() {
//        cout << "���� " << (door ? "ON" : "OFF") << endl;
//        cout << "���� " << (light ? "ON" : "OFF") << endl;
//        cout << "�ٶ� " << speed << endl;
//    }
//};
///********* End *********/
//
//int main()
//{
//    /********* Begin *********/
//    // �ڴ˴�����ִ���������������״̬
//    char cmds[25];
//    cin >> cmds; // ��ȡ��������
//
//    Car myCar; // ������������
//
//    // ������������������Ӧ�ĺ���
//    for (int i = 0; cmds[i] != '\0'; i++) {
//        switch (cmds[i]) {
//        case '1':
//            myCar.OpenDoor(); // �򿪳���
//            break;
//        case '2':
//            myCar.CloseDoor(); // �رճ���
//            break;
//        case '3':
//            myCar.TurnOnLight(); // �򿪳���
//            break;
//        case '4':
//            myCar.TurnOffLight(); // �رճ���
//            break;
//        case '5':
//            myCar.Accelerate(); // ����
//            break;
//        case '6':
//            myCar.Decelerate(); // ����
//            break;
//        default:
//            cout << "��Ч����" << endl; // ������Ч����
//        }
//    }
//
//    myCar.PrintStatus(); // �������״̬
//    /********* End *********/
//
//    return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student
//{
//    /********* Begin *********/
//    // �ڴ˴���������ĳ�Ա
//public:
//    int SID;       // ѧ��
//    string Name;   // ����
//
//    // �޲ι��캯��
//    Student();
//
//    // �������Ĺ��캯��
//    Student(int sid, string name);
//
//    // ��������
//    ~Student();
//
//    /********* End *********/
//};

#include <string>
#include <iostream>
using namespace std;

class User {
public:
    string Name;    // �û�����
    int Books;      // �й��鼮����
    static int UserCount; // ��ǰ�û�����
    static int BookCount; // ��ǰ�鼮����

    // ���ι��캯��
    User(string name, int books) : Name(name), Books(books) {
        UserCount++;          // �����û�����
        BookCount += books;   // �����鼮����
        cout << Name << " " << Books << " ����" << endl; // ��ӡ�������Ϣ
    }

    // ��������
    ~User() {
        cout << Name << " " << Books << " �뿪" << endl; // ��ӡ�뿪����Ϣ
        UserCount--;          // �����û�����
        BookCount -= Books;   // �����鼮����
    }

    // ��̬��Ա����: �����ǰ״̬
    static void GetState() {
        if (UserCount > 0) { // �������û�ʱ���״̬
            int averageBooks = (UserCount > 0) ? (BookCount / UserCount) : 0; // �����˾��鼮����
            cout << "�������:" << UserCount
                << "����깲��������:" << BookCount
                << "���˾���������:" << averageBooks << endl;
        }
    }
};

// ��̬��Ա��ʼ��
int User::UserCount = 0;
int User::BookCount = 0;

int main() {
    // ��������
    User user1("���긻", 10);
    User::GetState(); // ���״̬

    User user2("������", 2);
    User::GetState(); // ���״̬

    {
        User user3("Ҷ�Ĺ�", 0);
        User::GetState(); // ���״̬
    } // user3 �뿪������

    User::GetState(); // ���״̬

    // ���� user1 �� user2 ��Ȼ��������main ��������ʱ�����ε�����������
    return 0;
}
