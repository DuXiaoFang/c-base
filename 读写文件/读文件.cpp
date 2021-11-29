#include <iostream>
#include<fstream>//包含头文件
using namespace std;

void test(){
    ifstream ifs;//创建流对象
    ifs.open("temp.txt",ios::in);
    if(!ifs.is_open()){
        cout<< "no txt"<< endl;
        return ;
    }
    //第一种
    char buf[1024]={0};
    while(ifs>>buf){
        cout<< buf<< endl;
    }

    // second
    // char buf[1024]={0};
    // while(ifs.getline(buf,sizeof(buf))){
    //     cout<< buf<<endl;
    // }

    //third
    // string buf;
    // while(getline(ifs,buf)){
    //     cout<<buf<< endl;
    // }

    ifs.close();
}
int main(){

    test();
    return 0;
}