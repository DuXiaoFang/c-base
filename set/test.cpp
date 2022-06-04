#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    set<int,greater<int>> myset{1,2,3,4};
    for(auto x:myset){
        cout<< x << endl;
    }
    cout<< endl;
    set<int,greater<int>>::iterator a = myset.begin();
    
    myset.insert(++(++a),10);
        for(auto x:myset){
        cout<< x << endl;
    }
    return 0;
}