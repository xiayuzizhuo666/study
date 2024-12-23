#include <iostream>
#include <string> // 使用std::string
using namespace std;

/********* Begin *********/
// 在此处实现一个汽车类
class Car {
private:
    bool door; // 车门状态，true为打开（ON），false为关闭（OFF）
    bool light; // 车灯状态，true为打开（ON），false为关闭（OFF）
    int speed; // 车速

public:
    // 构造函数
    Car() : door(false), light(false), speed(0) {}

    // 打开车门
    void OpenDoor() {
        door = true;
    }

    // 关闭车门
    void CloseDoor() {
        door = false;
    }

    // 打开车灯
    void TurnOnLight() {
        light = true;
    }

    // 关闭车灯
    void TurnOffLight() {
        light = false;
    }

    // 加速
    void Accelerate() {
        speed += 10;
    }

    // 减速
    void Decelerate() {
        speed -= 10;
    }

    // 输出汽车状态
    void PrintStatus() {
        cout << "车门: " << (door ? "ON" : "OFF") << endl;
        cout << "车灯: " << (light ? "ON" : "OFF") << endl;
        cout << "速度: " << speed << endl;
    }
};
/********* End *********/

int main()
{
    /********* Begin *********/
    // 在此处解析执行输出汽车的整体状态
    string cmds;
    cin >> cmds; // 读取命令输入

    Car myCar; // 创建汽车对象

    // 解析输入的命令并调用相应的函数
    for (char cmd : cmds) {
        switch (cmd) {
        case '1':
            myCar.OpenDoor(); // 打开车门
            break;
        case '2':
            myCar.CloseDoor(); // 关闭车门
            break;
        case '3':
            myCar.TurnOnLight(); // 打开车灯
            break;
        case '4':
            myCar.TurnOffLight(); // 关闭车灯
            break;
        case '5':
            myCar.Accelerate(); // 加速
            break;
        case '6':
            myCar.Decelerate(); // 减速
            break;
        default:
            // 处理无效命令
            cout << "无效命令: " << cmd << endl;
        }
    }

    myCar.PrintStatus(); // 输出最终状态
    /********* End *********/

    return 0;
}