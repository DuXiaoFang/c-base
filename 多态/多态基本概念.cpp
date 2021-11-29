#include<iostream>
using namespace std;


class Animal{
public:
    //void speak(){ 
    virtual void speak(){            //加了virtual 函数可以不用提前绑定，运行阶段绑定
        cout<<"animal"<< endl;
    }
};

class Cat:public Animal{

public:
    void speak(){
        cout<<"cat"<< endl;
    }
};

void doSpeak(Animal &animal){        //地址早绑定
    animal.speak();
}

void test(){
    Cat cat;
    doSpeak(cat);
}


void test02(){
    cout<< sizeof(Animal)<< endl;
    cout<< sizeof(Cat)<< endl;
}//非静态的成员函数 不属于类的存储   不加virtual输出是1   加上virtual关键字类内
//有一个指针（vfptr：虚函数（表）指针  指向虚函数表


int main(){
    test02();
    return 0;
}


// 动态多态满足：
//重写（返回值 函数名 参数类型都相同）父类虚函数
// 父类指针或者引用 指向子类对象
