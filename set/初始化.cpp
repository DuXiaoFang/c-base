#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> retset(){
    set<string> myset{ "http://c.biancheng.net/java/",
                        "http://c.biancheng.net/stl/",
                        "http://c.biancheng.net/python/" };
    return myset;
}

int main(){


    //创建空set容器
    std::set<std::string> myset;
    //空set容器不存储任何元素
    cout << "1、myset size = " << myset.size() << endl;
    //向myset容器中插入新元素
    myset.insert("http://c.biancheng.net/java/");
    myset.insert("http://c.biancheng.net/stl/");
    myset.insert("http://c.biancheng.net/python/");
    cout << "2、myset size = " << myset.size() << endl;
    //利用双向迭代器，遍历myset
    for (auto iter = myset.begin(); iter != myset.end(); ++iter) {
        cout << *iter << endl;
    }

    set<string,greater<string>> myset1{"http://c.biancheng.net/java/",
                            "http://c.biancheng.net/stl/",
                            "http://c.biancheng.net/python/"};
    set<string> copyset(myset);//调用拷贝构造；
    set<string> copyset1(retset());//调用移动构造；

    for(auto iter = myset.find("http://c.biancheng.net/python/");iter!=myset.end();iter++){
        cout<< *iter << endl;
    }
    return 0;
}