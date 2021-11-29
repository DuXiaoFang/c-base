#include <iostream>
using namespace std;

class Cpu{
public:
    virtual void  caculate()=0;
};

class GraphicCard{
public:
    virtual void  display()=0;
};

class Memory
{
public:
    virtual void  storage()=0;
};

class Computer
{
public:
    Computer(Cpu* cpu,GraphicCard* gpu,Memory* mem,){
        m_cpu = cpu;
        m_gpu = gpu;
        m_mem = mem;
    }
    void work(){
        m_cpu->caculate();
        m_gpu->display();
        m_mem->storage();
    }
private:
    Cpu* m_cpu;
    GraphicCard* m_gpu;
    Memory* m_mem;

};



void test(){

}

int main(){
    test();
    return 0;
}