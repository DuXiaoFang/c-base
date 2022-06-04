#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
int main(){
    deque<int> d1{1,2,3,4,5};
    deque<int> d2(10);
    deque<int> d3(10,5);
    deque<int> d4(d3.begin()+1,d3.end());

    int a[] ={1,2,3,4,5};
    deque<int> d5(a+2,a+4);


    for(auto i=d1.begin();i<d1.end();i++){
        cout<< *i << " ";
    }

    d1.push_back(1);
    auto first = d1.begin();
    cout<< *first << endl;
    d1.push_back(1);
    cout<< *first << endl;
    return 0;   
}
