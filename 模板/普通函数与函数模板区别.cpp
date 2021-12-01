#include <iostream>
using namespace std;

//函数模板
int myadd01(int a,int b){
    return a+b;
}

void myadd03(int a,int b){
    cout << "普通"<<endl;
}

template<class T>
void myadd03(T a, T b){
    cout<< "模板" << endl; 
}
template<class T>
T myadd02(T a, T b){

    return a+b;
}



int main(){
    int a =10;
    int b =20;
    /*
    char c ='c';// 'a'=97
    cout<<myadd01(a,c)<< endl;//普通函数会发生隐式转换

    cout<<myadd02<int>(a,c)<< endl;//函数模板在此情况下可以隐式转化
    return 0;
    */

    myadd03(a,b);
    myadd03<>(a,b);
}
