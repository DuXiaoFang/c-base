#include <iostream>
using namespace std;

void swapint(int &a,int& b){
    int temp =a;
    a = b;
    b =temp;
}


void swapduble(double& a,double& b){
    double temp =a;
    a = b;
    b =temp;
}
// 函数模板
template<typename T>
//声明一个模板，T通用数据类型  或 可写为template<class T>
void myswap(T& a, T& b){
    T temp =a;
    a =b;
    b =temp;
}
int main(){

    //两种方式使用模板
    int a =10,b =20;

    myswap(a,b);//自推导

    myswap<int>(a,b);//显示指定类型
    return 0;
}