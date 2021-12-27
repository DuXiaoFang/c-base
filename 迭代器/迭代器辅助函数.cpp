#include <iostream>
#include <string>
#include <vector>
#include <list>

#include<algorithm>

using namespace std;
int main(){

    
    int a[5] ={1,2,3,4,5};
    list<int> lst(a,a+5);
    list<int>::iterator p =lst.begin();
    advance(p,2); //p向后移动两个元素
    advance(p,-1);
    cout<< *p << endl;

    list<int>::iterator q =lst.end();
    q--;
    cout<< distance(p,q)<< endl;//p->2,q->5
    //for (p = lst.begin(); p != lst.end(); ++p) cout << *p << " ";
    iter_swap(p,q);
    for (p = lst.begin(); p != lst.end(); ++p) cout << *p << " ";
    

    return 0;
}