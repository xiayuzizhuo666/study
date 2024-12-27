//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//
//class TR1 {
//private:
//    double x, y, z; // 三角形三条边的长度
//
//public:
//    // 构造函数
//    TR1(double x1, double y1, double z1) {
//        // 判断三条边是否能构成三角形
//        if (x1 + y1 > z1 && x1 + z1 > y1 && y1 + z1 > x1) {
//            x = x1;
//            y = y1;
//            z = z1;
//        }
//        else {
//            std::cerr << "无法构成三角形，程序退出。" << std::endl;
//            exit(1);
//        }
//    }
//
//    // 计算三角形的面积
//    virtual double area() {
//        double s = (x + y + z) / 2;
//        return sqrt(s * (s - x) * (s - y) * (s - z));
//    }
//
//    // 计算三角形的周长
//    double peri() {
//        return x + y + z;
//    }
//};
//
//class COL : public TR1 {
//private:
//    double height; // 柱体的高度
//
//public:
//    // 构造函数
//    COL(double x1, double y1, double z1, double h) : TR1(x1, y1, z1), height(h) {}
//
//    // 计算三角柱体的体积
//    double volume() {
//        return area() * height; // 体积 = 底面积 × 高
//    }
//
//    // 计算三角柱体的表面积
//    double area() {
//        double baseArea = TR1::area(); // 获取底面积
//        double basePerimeter = peri(); // 获取底面周长
//        return 2 * baseArea + basePerimeter * height; // 表面积 = 2 * 底面积 + 底面周长 * 高
//    }
//};
//
//int main() {
//    double x1, y1, z1, h;
//    std::cout << "请输入三角形的底面边长和高：" << std::endl;
//    std::cin >> x1 >> y1 >> z1 >> h; // 输入三角形的三条边和高度
//
//    COL col(x1, y1, z1, h); // 创建三角柱体对象
//
//    std::cout << "三角柱体的体积为：" << col.volume() << std::endl; // 输出体积
//    std::cout << "三角柱体的表面积为：" << col.area() << std::endl; // 输出表面积
//
//    return 0;
//}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// 三角形类TR1
class TR1 {
private:
    double x, y, z;  // 分别表示三角形三条边的长度

public:
    // 构造函数，判断能否构成三角形，若不能则提示并退出
    TR1(double x1, double y1, double z1) {
        x = x1;
        y = y1;
        z = z1;
        if (x + y <= z || x + z <= y || y + z <= x) {
            cout << "输入的边长不能构成三角形，请重新输入！" << endl;
            exit(1);
        }
    }

    // 虚函数，计算三角形面积
    virtual double area() {
        double s = (x + y + z) / 2;
        return sqrt(s * (s - x) * (s - y) * (s - z));
    }

    // 计算三角形周长
    double peri() {
        return x + y + z;
    }
};

// 三角柱体类COL，公有派生自TR1类
class COL : public TR1 {
private:
    double height;  // 表示三角柱体的高度

public:
    // 构造函数，初始化三角柱体相关属性
    COL(double x1, double y1, double z1, double h) : TR1(x1, y1, z1) {
        height = h;
    }

    // 计算三角柱体体积
    double volume() {
        return this->area() * height; // 调用基类的area()计算底面积
    }

    // 重写计算面积函数，用于计算三角柱体表面积
    double area() {
        return 2 * TR1::area() + TR1::peri() * height; // 调用基类的peri()计算周长
    }
};

int main() {
    double x, y, z, h;
    cout << "请输入三角形的底面边长和高：";
    cin >> x >> y >> z >> h; // 输入三角形的边长和高度
    COL col(x, y, z, h); // 创建三角柱体对象
    cout << fixed << setprecision(3); // 设置输出精度为小数点后三位
    cout << "三角柱体的体积为：" << col.volume() << endl; // 输出体积
    cout << "三角柱体的表面积为：" << col.area() << endl; // 输出表面积
    return 0;
}
