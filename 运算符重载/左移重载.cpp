#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class Person{
    friend ostream& operator<< (ostream& cout, Person& p);
public:
    // ostream& operator<< (ostream& cout){
    //     cout<< this->m_A<< endl;;
    //     return cout;
    // }
    Person(int x=10,int y=10):m_A(x),m_B(y) {}
private:
    int m_A;
    int m_B;
};

ostream& operator<< (ostream& cout, Person& p){
    cout<< p.m_A << "\t"<< p.m_B<< endl;
    return cout;
}


int main(){
    
    Person p1;
    cout<< p1 << endl;
    //p1.operator<<(cout);
    //p1 << cout;
    return 0;
}