#include <iostream>
using namespace std;
#include<string>

struct stu
{
    string name;
    string stunumber;
};

class Student
{
public: 
    stu s1;
    Student * input(stu * s1)
    {
        string n, sn;
        cin >> n >> sn;
        s1->name = n;
        s1->stunumber = sn;
        return this;
    }
void print()
{
    cout << "姓名：" << s1.name << endl;
    cout << "姓名：" << s1.stunumber << endl;
}
};
int main()
{
    Student p1;
    Student* p2;
    struct stu * test;
    p2 = p1.input(test);
}