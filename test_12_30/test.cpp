#include <iostream>
using namespace std;

class CPU // 抽象类CPU
{
public:
    virtual void calculate() = 0;
};

class VideoCard // 抽象类显卡
{
public:
    virtual void display() = 0;
};

class Memory // 抽象类内存
{
public:
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU* cpu, VideoCard* vc, Memory* mem) : m_cpu(cpu), m_vc(vc), m_mem(mem) {}

    void work()
    {
        m_cpu->calculate(); // CPU零件指针
        m_vc->display();    // 显卡零件指针
        m_mem->storage();   // 内存零件指针
    }

    ~Computer()
    {
        delete m_cpu; // 直接删除指针，若采用nullptr初始化，可以省略判断
        delete m_vc;
        delete m_mem;
    }

private:
    CPU* m_cpu;
    VideoCard* m_vc;
    Memory* m_mem;
};

class IntelCPU : public CPU
{
public:
    void calculate() override
    {
        cout << "Intel的cpu开始计算工作！" << endl;
    }
};

class IntelVideoCard : public VideoCard
{
public:
    void display() override
    {
        cout << "Intel的显卡开始工作！" << endl;
    }
};

class IntelMemory : public Memory
{
public:
    void storage() override
    {
        cout << "Intel的内存开始工作！" << endl;
    }
};

class ARMCPU : public CPU
{
public:
    void calculate() override
    {
        cout << "ARM的cpu开始计算工作！" << endl;
    }
};

class ARMVideoCard : public VideoCard
{
public:
    void display() override
    {
        cout << "ARM的显卡开始工作！" << endl;
    }
};

class ARMMemory : public Memory
{
public:
    void storage() override
    {
        cout << "ARM的内存开始工作！" << endl;
    }
};

void test01()
{
    // 创建第一台电脑
    CPU* intelCpu = new IntelCPU;
    VideoCard* intelCard = new IntelVideoCard;
    Memory* intelMemory = new IntelMemory;

    Computer* computer1 = new Computer(intelCpu, intelCard, intelMemory);
    computer1->work();

    cout << "------------------------" << endl;

    // 创建第二台电脑
    CPU* armCpu = new ARMCPU;
    VideoCard* armCard = new ARMVideoCard;
    Memory* armMemory = new ARMMemory;

    Computer* computer2 = new Computer(armCpu, armCard, armMemory);
    computer2->work();

    delete computer1; // 释放第一台电脑
    delete computer2; // 释放第二台电脑
}

int main()
{
    test01(); // 调用测试函数
    return 0;
}
