//含有纯虚函数的类叫抽象类
#include <iostream>
using namespace std;


class Base
{
public:
    //无法实例化对象
    //抽象类子类必须重写父类的纯虚函数，否则也属于抽象类
    virtual void  func() =0;
    virtual void func1(){

    }

};


class Son: public Base{
public:
    void func(){
        
    }
};

void test01(){
    //Base b; 不允许使用抽象类类型 "Base" 的对象: -- 函数 "Base::func" 是纯虚拟函数
    // new Base
    Base* base = new Son;


}




int main(){
    test01();
    return 0;
}