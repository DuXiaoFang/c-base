#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class Person{
public:
    Person(int x=10,int y=10):m_A(x),m_B(y) {}
    //前置++
    Person& operator++(){
        this->m_A++;
        this->m_B++;
        return *this;
    }
    //后置++
    Person operator++(int){
        Person temp = *this;
        this->m_A++;
        this->m_B++;
        return temp;
    }
private:
    int m_A;
    int m_B;
};


int main(){
    return 0;
}
