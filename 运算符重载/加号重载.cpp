#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
class Person{
public:
    int m_A;
    int m_B;

    //通过成员函数重载 等效于operator+
    // Person PersonAddPerson(Person &p){
    //     Person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;
    // }
    Person operator+ (Person &p){
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }

};
//通过全局函数重载
Person operator+(Person& p1, Person& p2){
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B+ + p2.m_B;
    return temp;
}

int main(){
    Person p1;
    Person p2;
    p1.m_A=10;
    p1.m_B=10;
    p2.m_A=10;
    p2.m_B=10;


    Person p3 = p1.operator+(p2);
    // Person p3 = p1 +p2;
    
    cout<< p3.m_A << "\t"<< p3.m_B<< endl;
    return 0;
}