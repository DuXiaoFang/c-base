#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;


class Person{
    
public:
    Person(int x) {
        m_A =  new int(x);
    }

    ~Person(){
        if(m_A!=NULL){
            delete m_A;
            m_A = NULL;
        }
    }

    Person& operator=(Person p){
        if(m_A!=NULL){
            delete m_A;
            m_A = NULL;
        }
        this->m_A = new int(*p.m_A);
        return *this;
    }

    int* m_A;
};

void test(){
    Person p1 =10;
    Person p2 =20;
    Person p3 =30;

    p3 =p2= p1;
    cout<< *p3.m_A << endl;
}

int main(){
    test();
    return 0;
}