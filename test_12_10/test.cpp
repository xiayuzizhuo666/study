///********* Begin *********/
//class Rectangle
//{
//private:
//    int height; // 高度
//    int width;  // 宽度
//
//public:
//    // 设置长方形的高和宽函数
//    void Set(int h, int w) {
//        height = h;
//        width = w;
//    }
//
//    // 获取长方形的面积函数
//    int GetArea() {
//        return height * width;
//    }
//};
///********* End *********/
//
//Rectangle GetRect(int h, int w)
//{
//    /********* Begin *********/
//    // 返回一个 h*w 的 Rectangle 对象
//    Rectangle rect;
//    rect.Set(h, w);
//    return rect;
//    /********* End *********/
//}
//
//int GetRectArea(Rectangle rect)
//{
//    /********* Begin *********/
//    // 返回 rect 对象的面积
//    return rect.GetArea();
//    /********* End *********/
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    Rectangle rect = GetRect(5, 10); // 创建一个 5*10 的长方形
//    cout << "长方形的面积是: " << GetRectArea(rect) << endl; // 输出面积
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
//// 在此处实现一个汽车类
//class Car {
//private:
//    bool door; // 车门状态，true为打开（ON），false为关闭（OFF）
//    bool light; // 车灯状态，true为打开（ON），false为关闭（OFF）
//    int speed; // 车速
//
//public:
//    // 构造函数
//    Car() : door(false), light(false), speed(0) {}
//
//    // 打开车门
//    void OpenDoor() {
//        door = true;
//    }
//
//    // 关闭车门
//    void CloseDoor() {
//        door = false;
//    }
//
//    // 打开车灯
//    void TurnOnLight() {
//        light = true;
//    }
//
//    // 关闭车灯
//    void TurnOffLight() {
//        light = false;
//    }
//
//    // 加速
//    void Accelerate() {
//        speed += 10;
//    }
//
//    // 减速
//    void Decelerate() {
//        speed -= 10;
//        if (speed < 0) {
//            speed = 0; // 保证速度不小于0
//        }
//    }
//
//    // 输出汽车状态
//    void PrintStatus() {
//        cout << "车门 " << (door ? "ON" : "OFF") << endl;
//        cout << "车灯 " << (light ? "ON" : "OFF") << endl;
//        cout << "速度 " << speed << endl;
//    }
//};
///********* End *********/
//
//int main()
//{
//    /********* Begin *********/
//    // 在此处解析执行输出汽车的整体状态
//    char cmds[25];
//    cin >> cmds; // 读取命令输入
//
//    Car myCar; // 创建汽车对象
//
//    // 解析输入的命令并调用相应的函数
//    for (int i = 0; cmds[i] != '\0'; i++) {
//        switch (cmds[i]) {
//        case '1':
//            myCar.OpenDoor(); // 打开车门
//            break;
//        case '2':
//            myCar.CloseDoor(); // 关闭车门
//            break;
//        case '3':
//            myCar.TurnOnLight(); // 打开车灯
//            break;
//        case '4':
//            myCar.TurnOffLight(); // 关闭车灯
//            break;
//        case '5':
//            myCar.Accelerate(); // 加速
//            break;
//        case '6':
//            myCar.Decelerate(); // 减速
//            break;
//        default:
//            cout << "无效命令" << endl; // 处理无效命令
//        }
//    }
//
//    myCar.PrintStatus(); // 输出最终状态
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
//    // 在此处声明所需的成员
//public:
//    int SID;       // 学号
//    string Name;   // 姓名
//
//    // 无参构造函数
//    Student();
//
//    // 带参数的构造函数
//    Student(int sid, string name);
//
//    // 析构函数
//    ~Student();
//
//    /********* End *********/
//};

#include <string>
#include <iostream>
using namespace std;

class User {
public:
    string Name;    // 用户姓名
    int Books;      // 托管书籍数量
    static int UserCount; // 当前用户总数
    static int BookCount; // 当前书籍总数

    // 带参构造函数
    User(string name, int books) : Name(name), Books(books) {
        UserCount++;          // 增加用户计数
        BookCount += books;   // 增加书籍数量
        cout << Name << " " << Books << " 进入" << endl; // 打印进入的消息
    }

    // 析构函数
    ~User() {
        cout << Name << " " << Books << " 离开" << endl; // 打印离开的消息
        UserCount--;          // 减少用户计数
        BookCount -= Books;   // 减少书籍数量
    }

    // 静态成员函数: 输出当前状态
    static void GetState() {
        if (UserCount > 0) { // 仅在有用户时输出状态
            int averageBooks = (UserCount > 0) ? (BookCount / UserCount) : 0; // 计算人均书籍数量
            cout << "书店人数:" << UserCount
                << "，书店共享书数量:" << BookCount
                << "，人均共享数量:" << averageBooks << endl;
        }
    }
};

// 静态成员初始化
int User::UserCount = 0;
int User::BookCount = 0;

int main() {
    // 测试输入
    User user1("厉宏富", 10);
    User::GetState(); // 输出状态

    User user2("冷欣荣", 2);
    User::GetState(); // 输出状态

    {
        User user3("叶文光", 0);
        User::GetState(); // 输出状态
    } // user3 离开作用域

    User::GetState(); // 输出状态

    // 由于 user1 和 user2 仍然在作用域，main 函数结束时将依次调用析构函数
    return 0;
}
