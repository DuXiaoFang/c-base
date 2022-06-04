#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <deque>
using namespace std;
int main(){
    map<string,string> mymap;
    //创建键值对变量
    pair<string,string> STL = { "STL教程","http://c.biancheng.net/stl/" };
    //创建一个接收 insert() 方法返回值的 pair 对象
    pair<map<string,string>::iterator,bool> ret;
    
    ret = mymap.insert(STL);
    cout<< "ret.iter = <{" << ret.first->first <<"," << ret.first->second<< "}, " << ret.second << ">" << endl;

    //以右值的方式传递临时的键值变量
    ret = mymap.insert({ "C语言教程","http://c.biancheng.net/c/" });
    //调用 pair 类模板的构造函数
    //ret = mymap.insert(pair<string,string>{ "C语言教程","http://c.biancheng.net/c/" });
    //调用 make_pair() 函数
    //ret = mymap.insert(make_pair("C语言教程", "http://c.biancheng.net/c/"));
    cout << "ret.iter = <{" << ret.first->first << ", " << ret.first->second << "}, " << ret.second << ">" << endl;

    //插入失败样例
    ret = mymap.insert({ "STL教程","http://c.biancheng.net/java/" });
    cout << "ret.iter = <{" << ret.first->first << ", " << ret.first->second << "}, " << ret.second << ">" << endl;
    return 0;
}