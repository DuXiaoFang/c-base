#include <iostream> 
using namespace std;
#include<string>


class AbstractCalcualtor{
public:
    virtual int getResult(){
        return 0;
    }
    int m_Num1;
    int m_Num2;

};


class Add:public AbstractCalcualtor{
public:
    int getResult(){
        return m_Num1+m_Num2;
    }
};

class Mul:public AbstractCalcualtor{
public:
    int getResult(){
        return m_Num1*m_Num2;
    }
};

void test(){

    //多态使用条件
    //父类指针或者引用指向子类对象
    AbstractCalcualtor* abc = new Add;//创建在堆区
    abc->m_Num1=10;
    abc->m_Num2 =10;
    cout<< abc->getResult()<< endl;


    delete(abc);//销毁数据


    abc = new Mul;
    abc->m_Num1=10;
    abc->m_Num2 =10;
    cout<< abc->getResult()<< endl;
    delete(abc);

}

int main(){
    test();
    return 0;
}