//#include <iostream>
//#include <string>
//
//// 基类 Base
//class Base {
//protected:
//    std::string place; // 产地
//    int count;         // 库存量
//    double price;      // 单价
//
//public:
//    // 构造函数
//    Base(std::string p, int c, double pr) : place(p), count(c), price(pr) {}
//
//    // 商品的进库（增加库存量）
//    void in_something(int add_cnt) {
//        count += add_cnt;
//    }
//
//    // 商品的出库（减少库存量）
//    void out_something(int del_cnt) {
//        count -= del_cnt;
//    }
//
//    // 该类货品总价格的计算
//    double total_price() {
//        return price * count;
//    }
//
//    // 对象数据的输出
//    virtual void display() {
//        std::cout << "产地:" << place << " 单价:" << price << " 库存量：" << count << " 总价格：" << total_price() << std::endl;
//    }
//};
//
//// 衬衣类 Shirt，继承自 Base
//class Shirt : public Base {
//private:
//    std::string material; // 布料
//
//public:
//    // 构造函数
//    Shirt(std::string p, int c, double pr, std::string m) : Base(p, c, pr), material(m) {}
//
//    // 对象数据的输出
//    void display() override {
//        Base::display();
//        std::cout << "布料:" << material << std::endl;
//    }
//};
//
//// 立柜类 Wardrobe，继承自 Base
//class Wardrobe : public Base {
//private:
//    std::string wood; // 木料
//    std::string color; // 颜色
//
//public:
//    // 构造函数
//    Wardrobe(std::string p, int c, double pr, std::string w, std::string col) : Base(p, c, pr), wood(w), color(col) {}
//
//    // 对象数据的输出
//    void display() override {
//        Base::display();
//        std::cout << "木料:" << wood << " 颜色：" << color << std::endl;
//    }
//};
//
//// 帽子类 Cap，继承自 Shirt
//class Cap : public Shirt {
//private:
//    std::string style; // 样式
//
//public:
//    // 构造函数
//    Cap(std::string p, int c, double pr, std::string m, std::string s) : Shirt(p, c, pr, m), style(s) {}
//
//    // 对象数据的输出
//    void display() override {
//        Shirt::display();
//        std::cout << "样式：" << style << std::endl;
//    }
//};
//
//int main() {
//    // 测试代码
//    Shirt shirt("beijing", 12, 100, "mian hua");
//    shirt.display();
//
//    Wardrobe wardrobe("shanghai", 4, 100, "yu mu", "black");
//    wardrobe.display();
//
//    Cap cap("shenzhen", 10, 100, "skill", "ping ding");
//    cap.display();
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//
//// 基类 Base
//class Base {
//protected:
//    std::string place; // 产地
//    int count;         // 库存量
//    double price;      // 单价
//
//public:
//    // 构造函数
//    Base(std::string p, int c, double pr) : place(p), count(c), price(pr) {}
//
//    // 商品的进库（增加库存量）
//    void in_something(int add_cnt) {
//        count += add_cnt;
//    }
//
//    // 商品的出库（减少库存量）
//    void out_something(int del_cnt) {
//        count -= del_cnt;
//    }
//
//    // 该类货品总价格的计算
//    double total_price() {
//        return price * count;
//    }
//
//    // 对象数据的输出
//    virtual void display() {
//        std::cout << "产地: " << place << " 单价: " << price << " 库存量: " << count << " 总价格: " << total_price() << std::endl;
//    }
//};
//
//// 衬衣类 Shirt，继承自 Base
//class Shirt : public Base {
//private:
//    std::string material; // 布料
//
//public:
//    // 构造函数
//    Shirt(std::string p, int c, double pr, std::string m) : Base(p, c, pr), material(m) {}
//
//    // 对象数据的输出
//    void display() override {
//        Base::display();
//        std::cout << "布料: " << material << std::endl;
//    }
//};
//
//// 立柜类 Wardrobe，继承自 Base
//class Wardrobe : public Base {
//private:
//    std::string wood; // 木料
//    std::string color; // 颜色
//
//public:
//    // 构造函数
//    Wardrobe(std::string p, int c, double pr, std::string w, std::string col) : Base(p, c, pr), wood(w), color(col) {}
//
//    // 对象数据的输出
//    void display() override {
//        Base::display();
//        std::cout << "木料: " << wood << " 颜色: " << color << std::endl;
//    }
//};
//
//// 帽子类 Cap，继承自 Shirt
//class Cap : public Shirt {
//private:
//    std::string style; // 样式
//
//public:
//    // 构造函数
//    Cap(std::string p, int c, double pr, std::string m, std::string s) : Shirt(p, c, pr, m), style(s) {}
//
//    // 对象数据的输出
//    void display() override {
//        Shirt::display();
//        std::cout << "样式: " << style << std::endl;
//    }
//};
//
//int main() {
//    // 测试代码
//    Shirt shirt("北京", 12, 100.0, "棉花");
//    shirt.display();
//
//    Wardrobe wardrobe("上海", 4, 1000.0, "榆木", "黑色");
//    wardrobe.display();
//
//    Cap cap("深圳", 10, 50.0, "丝绸", "平顶");
//    cap.display();
//
//    return 0;
//}



#include <iostream>
using namespace std;

/********* Begin *********/
class Chinese {
public:
    // 人类的声明
    virtual void greet() {
        cout << "你好" << endl;
    }
};

//// 人类的定义
//// 已经在上面声明并定义了虚函数greet
//
//class EnglishLearner : public Chinese {
//public:
//    // 英语学生类的声明
//    void greet() override {
//        cout << "Hello" << endl;
//    }
//};
//
//// 英语学生类的定义
//// 已经在上面声明并定义了重写greet函数
//
//class Repeater : public Chinese {
//public:
//    // 复读机类的声明
//    void greet() override {
//        Chinese::greet(); // 调用基类的greet函数
//    }
//};
//
//
///********* End *********/


#include <iostream>
using namespace std;

/********* Begin *********/
class Repeater {
public:
    // 复读机基类的声明
    void Play() {
        // 什么也不做
    }

    // 析构函数
    virtual ~Repeater() {
        cout << "砰！" << endl;
    }
};

// 复读机基类的定义

class ForRepeater : public Repeater {
public:
    // 正向复读机的声明
    void Play() override {
        cout << "没想到你也是一个复读机" << endl;
    }

    // 析构函数
    ~ForRepeater() override {
        cout << "正·复读机 炸了" << endl;
    }
};

// 正向复读机的定义

//class RevRepeater : public Repeater {
//public:
//    // 反向复读机的声明
//    void Play() override {
//        cout << "机读复个一是也你到想没" << endl;
//    }
//
//    // 析构函数
//    ~RevRepeater() override {
//        cout << "机读复·反 炸了" << endl;
//    }
//};
//
//// 反向复读机的定义
//
////普通函数
//Repeater* CreateRepeater(int type) {
//    //根据type创建指定的复读机
//    switch (type) {
//    case 0:
//        return new ForRepeater();
//    case 1:
//        return new RevRepeater();
//    default:
//        return nullptr;
//    }
//}
///********* End *********/



#include <iostream>
using namespace std;

/********* Begin *********/
class Repeater {
public:
    // 复读机基类的声明
    virtual void Play() {
        // 什么也不做
    }

    // 析构函数
    virtual ~Repeater() {
        cout << "砰！" << endl;
    }
};

//// 复读机基类的定义
//
//class ForRepeater : public Repeater {
//public:
//    // 正向复读机的声明
//    void Play() override {
//        cout << "没想到你也是一个复读机" << endl;
//    }
//
//    // 析构函数
//    ~ForRepeater() override {
//        cout << "正·复读机 炸了" << endl;
//    }
//};
//
//// 正向复读机的定义
//
//class RevRepeater : public Repeater {
//public:
//    // 反向复读机的声明
//    void Play() override {
//        cout << "机读复个一是也你到想没" << endl;
//    }
//
//    // 析构函数
//    ~RevRepeater() override {
//        cout << "机读复·反 炸了" << endl;
//    }
//};
//
//// 反向复读机的定义
//
////普通函数
//Repeater* CreateRepeater(int type) {
//    //根据type创建指定的复读机
//    switch (type) {
//    case 0:
//        return new ForRepeater();
//    case 1:
//        return new RevRepeater();
//    default:
//        return nullptr;
//    }
//}
///********* End *********/