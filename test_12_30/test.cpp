#include <iostream>
using namespace std;

class CPU // ������CPU
{
public:
    virtual void calculate() = 0;
};

class VideoCard // �������Կ�
{
public:
    virtual void display() = 0;
};

class Memory // �������ڴ�
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
        m_cpu->calculate(); // CPU���ָ��
        m_vc->display();    // �Կ����ָ��
        m_mem->storage();   // �ڴ����ָ��
    }

    ~Computer()
    {
        delete m_cpu; // ֱ��ɾ��ָ�룬������nullptr��ʼ��������ʡ���ж�
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
        cout << "Intel��cpu��ʼ���㹤����" << endl;
    }
};

class IntelVideoCard : public VideoCard
{
public:
    void display() override
    {
        cout << "Intel���Կ���ʼ������" << endl;
    }
};

class IntelMemory : public Memory
{
public:
    void storage() override
    {
        cout << "Intel���ڴ濪ʼ������" << endl;
    }
};

class ARMCPU : public CPU
{
public:
    void calculate() override
    {
        cout << "ARM��cpu��ʼ���㹤����" << endl;
    }
};

class ARMVideoCard : public VideoCard
{
public:
    void display() override
    {
        cout << "ARM���Կ���ʼ������" << endl;
    }
};

class ARMMemory : public Memory
{
public:
    void storage() override
    {
        cout << "ARM���ڴ濪ʼ������" << endl;
    }
};

void test01()
{
    // ������һ̨����
    CPU* intelCpu = new IntelCPU;
    VideoCard* intelCard = new IntelVideoCard;
    Memory* intelMemory = new IntelMemory;

    Computer* computer1 = new Computer(intelCpu, intelCard, intelMemory);
    computer1->work();

    cout << "------------------------" << endl;

    // �����ڶ�̨����
    CPU* armCpu = new ARMCPU;
    VideoCard* armCard = new ARMVideoCard;
    Memory* armMemory = new ARMMemory;

    Computer* computer2 = new Computer(armCpu, armCard, armMemory);
    computer2->work();

    delete computer1; // �ͷŵ�һ̨����
    delete computer2; // �ͷŵڶ�̨����
}

int main()
{
    test01(); // ���ò��Ժ���
    return 0;
}
