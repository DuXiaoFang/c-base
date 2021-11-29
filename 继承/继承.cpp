#include<iostream>
using namespace std;


class Father{
public:
    int a;
private:
    int b;
protected:
    int c;
};


class Son :public Father{
public:
    void func(){
        a =10;
        c =10;
        //b =10;
    }
};

class Son2 :protected Father{
public:
    void func(){
        a =10;
        c =10;
        //b =10;
    }
};

class Son3 :private Father{
private:
    void fun(){
        c =10;
        cout<< c << endl;
        a =10;
        cout<< a << endl;

    }

public:
    void func(){
        a =10;
        cout<< a << endl;
    }
};



void test01(){
    Son s;
    s.a=10;
    //s.b=10;
}

int main(){
    test01();
    return 0;
}