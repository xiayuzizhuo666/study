#include <iostream>
#include <string> // ʹ��std::string
using namespace std;

/********* Begin *********/
// �ڴ˴�ʵ��һ��������
class Car {
private:
    bool door; // ����״̬��trueΪ�򿪣�ON����falseΪ�رգ�OFF��
    bool light; // ����״̬��trueΪ�򿪣�ON����falseΪ�رգ�OFF��
    int speed; // ����

public:
    // ���캯��
    Car() : door(false), light(false), speed(0) {}

    // �򿪳���
    void OpenDoor() {
        door = true;
    }

    // �رճ���
    void CloseDoor() {
        door = false;
    }

    // �򿪳���
    void TurnOnLight() {
        light = true;
    }

    // �رճ���
    void TurnOffLight() {
        light = false;
    }

    // ����
    void Accelerate() {
        speed += 10;
    }

    // ����
    void Decelerate() {
        speed -= 10;
    }

    // �������״̬
    void PrintStatus() {
        cout << "����: " << (door ? "ON" : "OFF") << endl;
        cout << "����: " << (light ? "ON" : "OFF") << endl;
        cout << "�ٶ�: " << speed << endl;
    }
};
/********* End *********/

int main()
{
    /********* Begin *********/
    // �ڴ˴�����ִ���������������״̬
    string cmds;
    cin >> cmds; // ��ȡ��������

    Car myCar; // ������������

    // ������������������Ӧ�ĺ���
    for (char cmd : cmds) {
        switch (cmd) {
        case '1':
            myCar.OpenDoor(); // �򿪳���
            break;
        case '2':
            myCar.CloseDoor(); // �رճ���
            break;
        case '3':
            myCar.TurnOnLight(); // �򿪳���
            break;
        case '4':
            myCar.TurnOffLight(); // �رճ���
            break;
        case '5':
            myCar.Accelerate(); // ����
            break;
        case '6':
            myCar.Decelerate(); // ����
            break;
        default:
            // ������Ч����
            cout << "��Ч����: " << cmd << endl;
        }
    }

    myCar.PrintStatus(); // �������״̬
    /********* End *********/

    return 0;
}