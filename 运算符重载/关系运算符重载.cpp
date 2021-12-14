#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class Person{
public:
    Person(int x=10,int y=10):m_A(x),m_B(y) {}

    bool operator==(Person& p){
        if(this->m_A == p.m_A && this->m_B == p.m_B){
            return true;
        }
            return false;
    }

    bool operator!=(Person& p){
        if(this->m_A == p.m_A && this->m_B == p.m_B){
            return false;
        }
            return true;
    }

private:
    int m_A;
    int m_B;
};

void test(){
    Person p1(10,10);
    Person p2(10,15);

    if(p1!= p2){
        cout<< "1" << endl;
    }
    else{
        cout<< "sad" << endl;       
    }
}


int main(){
    test();
    return 0;
}