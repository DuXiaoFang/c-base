#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
int main(){
    array<int ,4> values{3,2,7,9};
    values.at (2) = values.at(3) + 2*values.at(1);
    for(auto x: values){
        cout<< x<< " ";
    }
    cout<<endl;

    
    return 0;
}