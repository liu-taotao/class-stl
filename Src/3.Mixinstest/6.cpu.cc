//组装电脑的案例

#include <iostream>
#include <string>
using namespace std;
//抽象出来不同零件类
class CPU
{
public:
    virtual void calculate() = 0;
};
//显卡类
class VideCode
{
public:
    virtual void display() = 0;
};
//内存条
class Memory
{
public:
    virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
    Computer(CPU *cpu,VideCode * vc, Memory * mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    void work()
    {
        //让零件工作起来，调用接口
        m_cpu->calculate();

        m_vc->display();

        m_mem->storage();
    }

    ~Computer()
    {
        //释放CPU零件
        if(m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        //释放显卡零件
        if(m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        //释放内存条零件
        if(m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }
private:
    CPU *m_cpu;//CPU指针
    VideCode *m_vc;//显卡零件指针
    Memory * m_mem;//内存条零件指针
};
//具体厂商
class IntelCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel的CPU开始计算了!" << endl;
    }
};

class IntelVideoCard:public VideCode
{
public:
    virtual void display()
    {
        cout << "Intel的显卡开始显示了!" << endl;
    }
};
class IntelMemory:public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel的内存条开始存储了!" << endl;
    }
};

//联想厂商
class LenovoCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "Lenovo的CPU开始计算了!" << endl;
    }
};

class LenovoVideoCard:public VideCode
{
public:
    virtual void display()
    {
        cout << "Lenovo的显卡开始显示了!" << endl;
    }
};
class LenovoMemory:public Memory
{
public:
    virtual void storage()
    {
        cout << "Lenovo的内存条开始存储了!" << endl;
    }
};
void test01()
{
    //第一台电脑的零件
    CPU * interCpu = new IntelCPU;
    VideCode * interCard = new IntelVideoCard;
    Memory * intelMem = new IntelMemory;
    //创建第一台电脑
    Computer * Computer1 = new Computer(interCpu,interCard,intelMem);
    Computer1->work();
    delete Computer1;

    cout << "-------------------------------" << endl;
    //第二天电脑组装
    Computer * Computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
    Computer2->work();
    delete Computer2;

    cout << "-------------------------------" << endl;
    //第二天电脑组装
    Computer * Computer3 = new Computer(new LenovoCPU,new IntelVideoCard,new LenovoMemory);
    Computer3->work();
    delete Computer3;
}   
int main()
{


    test01();

    system("pause");
    return 0;

}