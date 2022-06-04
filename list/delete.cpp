#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

bool demo(double first,double second){
    return (int(first)==int(second));
}
//unique会删除 list 容器中相邻重复的元素，仅保留一份，且删除的是第二个
int main(){
    list<double> mylist{ 1,1.2,1.2,3,4,4.5,4.6 };
    mylist.unique();//{1, 1.2, 3, 4, 4.5, 4.6}
    for(auto x: mylist){
        cout<< x<<" ";
    }
    cout<< endl;

    mylist.unique(demo);//demo是二元谓词函数，是我们自定义的去重规则。
    for(auto x: mylist){
        cout<< x<<" ";
    }
    cout<< endl;  
    return 0;
}