//#include <iostream>
//#include <string>
//
//// ���� Base
//class Base {
//protected:
//    std::string place; // ����
//    int count;         // �����
//    double price;      // ����
//
//public:
//    // ���캯��
//    Base(std::string p, int c, double pr) : place(p), count(c), price(pr) {}
//
//    // ��Ʒ�Ľ��⣨���ӿ������
//    void in_something(int add_cnt) {
//        count += add_cnt;
//    }
//
//    // ��Ʒ�ĳ��⣨���ٿ������
//    void out_something(int del_cnt) {
//        count -= del_cnt;
//    }
//
//    // �����Ʒ�ܼ۸�ļ���
//    double total_price() {
//        return price * count;
//    }
//
//    // �������ݵ����
//    virtual void display() {
//        std::cout << "����:" << place << " ����:" << price << " �������" << count << " �ܼ۸�" << total_price() << std::endl;
//    }
//};
//
//// ������ Shirt���̳��� Base
//class Shirt : public Base {
//private:
//    std::string material; // ����
//
//public:
//    // ���캯��
//    Shirt(std::string p, int c, double pr, std::string m) : Base(p, c, pr), material(m) {}
//
//    // �������ݵ����
//    void display() override {
//        Base::display();
//        std::cout << "����:" << material << std::endl;
//    }
//};
//
//// ������ Wardrobe���̳��� Base
//class Wardrobe : public Base {
//private:
//    std::string wood; // ľ��
//    std::string color; // ��ɫ
//
//public:
//    // ���캯��
//    Wardrobe(std::string p, int c, double pr, std::string w, std::string col) : Base(p, c, pr), wood(w), color(col) {}
//
//    // �������ݵ����
//    void display() override {
//        Base::display();
//        std::cout << "ľ��:" << wood << " ��ɫ��" << color << std::endl;
//    }
//};
//
//// ñ���� Cap���̳��� Shirt
//class Cap : public Shirt {
//private:
//    std::string style; // ��ʽ
//
//public:
//    // ���캯��
//    Cap(std::string p, int c, double pr, std::string m, std::string s) : Shirt(p, c, pr, m), style(s) {}
//
//    // �������ݵ����
//    void display() override {
//        Shirt::display();
//        std::cout << "��ʽ��" << style << std::endl;
//    }
//};
//
//int main() {
//    // ���Դ���
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
//// ���� Base
//class Base {
//protected:
//    std::string place; // ����
//    int count;         // �����
//    double price;      // ����
//
//public:
//    // ���캯��
//    Base(std::string p, int c, double pr) : place(p), count(c), price(pr) {}
//
//    // ��Ʒ�Ľ��⣨���ӿ������
//    void in_something(int add_cnt) {
//        count += add_cnt;
//    }
//
//    // ��Ʒ�ĳ��⣨���ٿ������
//    void out_something(int del_cnt) {
//        count -= del_cnt;
//    }
//
//    // �����Ʒ�ܼ۸�ļ���
//    double total_price() {
//        return price * count;
//    }
//
//    // �������ݵ����
//    virtual void display() {
//        std::cout << "����: " << place << " ����: " << price << " �����: " << count << " �ܼ۸�: " << total_price() << std::endl;
//    }
//};
//
//// ������ Shirt���̳��� Base
//class Shirt : public Base {
//private:
//    std::string material; // ����
//
//public:
//    // ���캯��
//    Shirt(std::string p, int c, double pr, std::string m) : Base(p, c, pr), material(m) {}
//
//    // �������ݵ����
//    void display() override {
//        Base::display();
//        std::cout << "����: " << material << std::endl;
//    }
//};
//
//// ������ Wardrobe���̳��� Base
//class Wardrobe : public Base {
//private:
//    std::string wood; // ľ��
//    std::string color; // ��ɫ
//
//public:
//    // ���캯��
//    Wardrobe(std::string p, int c, double pr, std::string w, std::string col) : Base(p, c, pr), wood(w), color(col) {}
//
//    // �������ݵ����
//    void display() override {
//        Base::display();
//        std::cout << "ľ��: " << wood << " ��ɫ: " << color << std::endl;
//    }
//};
//
//// ñ���� Cap���̳��� Shirt
//class Cap : public Shirt {
//private:
//    std::string style; // ��ʽ
//
//public:
//    // ���캯��
//    Cap(std::string p, int c, double pr, std::string m, std::string s) : Shirt(p, c, pr, m), style(s) {}
//
//    // �������ݵ����
//    void display() override {
//        Shirt::display();
//        std::cout << "��ʽ: " << style << std::endl;
//    }
//};
//
//int main() {
//    // ���Դ���
//    Shirt shirt("����", 12, 100.0, "�޻�");
//    shirt.display();
//
//    Wardrobe wardrobe("�Ϻ�", 4, 1000.0, "��ľ", "��ɫ");
//    wardrobe.display();
//
//    Cap cap("����", 10, 50.0, "˿��", "ƽ��");
//    cap.display();
//
//    return 0;
//}



#include <iostream>
using namespace std;

/********* Begin *********/
class Chinese {
public:
    // ���������
    virtual void greet() {
        cout << "���" << endl;
    }
};

//// ����Ķ���
//// �Ѿ��������������������麯��greet
//
//class EnglishLearner : public Chinese {
//public:
//    // Ӣ��ѧ���������
//    void greet() override {
//        cout << "Hello" << endl;
//    }
//};
//
//// Ӣ��ѧ����Ķ���
//// �Ѿ���������������������дgreet����
//
//class Repeater : public Chinese {
//public:
//    // �������������
//    void greet() override {
//        Chinese::greet(); // ���û����greet����
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
    // ���������������
    void Play() {
        // ʲôҲ����
    }

    // ��������
    virtual ~Repeater() {
        cout << "�飡" << endl;
    }
};

// ����������Ķ���

class ForRepeater : public Repeater {
public:
    // ���򸴶���������
    void Play() override {
        cout << "û�뵽��Ҳ��һ��������" << endl;
    }

    // ��������
    ~ForRepeater() override {
        cout << "���������� ը��" << endl;
    }
};

// ���򸴶����Ķ���

//class RevRepeater : public Repeater {
//public:
//    // ���򸴶���������
//    void Play() override {
//        cout << "��������һ��Ҳ�㵽��û" << endl;
//    }
//
//    // ��������
//    ~RevRepeater() override {
//        cout << "���������� ը��" << endl;
//    }
//};
//
//// ���򸴶����Ķ���
//
////��ͨ����
//Repeater* CreateRepeater(int type) {
//    //����type����ָ���ĸ�����
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
    // ���������������
    virtual void Play() {
        // ʲôҲ����
    }

    // ��������
    virtual ~Repeater() {
        cout << "�飡" << endl;
    }
};

//// ����������Ķ���
//
//class ForRepeater : public Repeater {
//public:
//    // ���򸴶���������
//    void Play() override {
//        cout << "û�뵽��Ҳ��һ��������" << endl;
//    }
//
//    // ��������
//    ~ForRepeater() override {
//        cout << "���������� ը��" << endl;
//    }
//};
//
//// ���򸴶����Ķ���
//
//class RevRepeater : public Repeater {
//public:
//    // ���򸴶���������
//    void Play() override {
//        cout << "��������һ��Ҳ�㵽��û" << endl;
//    }
//
//    // ��������
//    ~RevRepeater() override {
//        cout << "���������� ը��" << endl;
//    }
//};
//
//// ���򸴶����Ķ���
//
////��ͨ����
//Repeater* CreateRepeater(int type) {
//    //����type����ָ���ĸ�����
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