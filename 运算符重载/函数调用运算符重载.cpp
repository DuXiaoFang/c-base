#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
class MyPrint{
public:
    void operator()(string test){//
        cout<< test << endl;
    }
};

void test(){
    MyPrint myprint;
    myprint("Hello");
}


int main(){
    test();
    return 0;
}