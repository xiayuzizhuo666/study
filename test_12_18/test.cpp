//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//
//class TR1 {
//private:
//    double x, y, z; // �����������ߵĳ���
//
//public:
//    // ���캯��
//    TR1(double x1, double y1, double z1) {
//        // �ж��������Ƿ��ܹ���������
//        if (x1 + y1 > z1 && x1 + z1 > y1 && y1 + z1 > x1) {
//            x = x1;
//            y = y1;
//            z = z1;
//        }
//        else {
//            std::cerr << "�޷����������Σ������˳���" << std::endl;
//            exit(1);
//        }
//    }
//
//    // ���������ε����
//    virtual double area() {
//        double s = (x + y + z) / 2;
//        return sqrt(s * (s - x) * (s - y) * (s - z));
//    }
//
//    // ���������ε��ܳ�
//    double peri() {
//        return x + y + z;
//    }
//};
//
//class COL : public TR1 {
//private:
//    double height; // ����ĸ߶�
//
//public:
//    // ���캯��
//    COL(double x1, double y1, double z1, double h) : TR1(x1, y1, z1), height(h) {}
//
//    // ����������������
//    double volume() {
//        return area() * height; // ��� = ����� �� ��
//    }
//
//    // ������������ı����
//    double area() {
//        double baseArea = TR1::area(); // ��ȡ�����
//        double basePerimeter = peri(); // ��ȡ�����ܳ�
//        return 2 * baseArea + basePerimeter * height; // ����� = 2 * ����� + �����ܳ� * ��
//    }
//};
//
//int main() {
//    double x1, y1, z1, h;
//    std::cout << "�����������εĵ���߳��͸ߣ�" << std::endl;
//    std::cin >> x1 >> y1 >> z1 >> h; // ���������ε������ߺ͸߶�
//
//    COL col(x1, y1, z1, h); // ���������������
//
//    std::cout << "������������Ϊ��" << col.volume() << std::endl; // ������
//    std::cout << "��������ı����Ϊ��" << col.area() << std::endl; // ��������
//
//    return 0;
//}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// ��������TR1
class TR1 {
private:
    double x, y, z;  // �ֱ��ʾ�����������ߵĳ���

public:
    // ���캯�����ж��ܷ񹹳������Σ�����������ʾ���˳�
    TR1(double x1, double y1, double z1) {
        x = x1;
        y = y1;
        z = z1;
        if (x + y <= z || x + z <= y || y + z <= x) {
            cout << "����ı߳����ܹ��������Σ����������룡" << endl;
            exit(1);
        }
    }

    // �麯�����������������
    virtual double area() {
        double s = (x + y + z) / 2;
        return sqrt(s * (s - x) * (s - y) * (s - z));
    }

    // �����������ܳ�
    double peri() {
        return x + y + z;
    }
};

// ����������COL������������TR1��
class COL : public TR1 {
private:
    double height;  // ��ʾ��������ĸ߶�

public:
    // ���캯������ʼ�����������������
    COL(double x1, double y1, double z1, double h) : TR1(x1, y1, z1) {
        height = h;
    }

    // ���������������
    double volume() {
        return this->area() * height; // ���û����area()��������
    }

    // ��д����������������ڼ���������������
    double area() {
        return 2 * TR1::area() + TR1::peri() * height; // ���û����peri()�����ܳ�
    }
};

int main() {
    double x, y, z, h;
    cout << "�����������εĵ���߳��͸ߣ�";
    cin >> x >> y >> z >> h; // ���������εı߳��͸߶�
    COL col(x, y, z, h); // ���������������
    cout << fixed << setprecision(3); // �����������ΪС�������λ
    cout << "������������Ϊ��" << col.volume() << endl; // ������
    cout << "��������ı����Ϊ��" << col.area() << endl; // ��������
    return 0;
}
