#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <deque>
using namespace std;
int main(){
    map<string,string> mymap;
    pair<string, string> STL = { "STL教程","http://c.biancheng.net/stl/" };
    map<string,string>::iterator it =mymap.begin();

    auto iter1 = mymap.insert(it,STL);
    auto iter2 = mymap.insert(it,pair<string, string>("C语言教程", "http://c.biancheng.net/c/"));
    
    // cout << iter1->first << " " << iter1->second << endl;
    // cout << iter2->first << " " << iter2->second << endl

    map<string,string> copymap;
    map<string,string>::iterator first = mymap.begin();
    map<string,string>::iterator second = mymap.end();

    copymap.insert(first, second);
    // for (auto iter = begin(copymap); iter != copymap.end(); ++iter) {
    //     cout <<"copymap "<< iter->first << " " << iter->second << endl;
    // }
    //不可执行
    for(auto x: copymap){
        //x 不是指针
        cout<< x.first << " " << x.second<< endl;
    }

    return 0;
}