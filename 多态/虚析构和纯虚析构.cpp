#include<iostream>
using namespace std;
#include<string>


class Animal{
public:
    Animal(){
        cout<<"animal构造"<< endl;
    }
    virtual ~Animal(){
        cout<<"animal析构"<< endl;
    }
    //void speak(){ 
    virtual void speak(){        
        cout<<"animal"<< endl;
    }
};

class Cat:public Animal{

public:
    Cat(string name){
        cout<<"cat构造"<< endl;       
        m_name = new string(name);
    }
    void speak(){
        cout<<"cat"<< *m_name<< endl;
    }
     ~Cat(){
        if(m_name!=nullptr){
            cout<<"cat析构"<< endl;
            delete(m_name);
            m_name = NULL;
        }
    }

    string* m_name;
};


void test(){
    Animal* animal = new Cat("tom");
    animal->speak();
    //父类指针在析构的时候
    delete animal;

}


int main(){
    test();
    return 0;
}
