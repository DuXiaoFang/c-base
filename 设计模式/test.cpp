#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <deque>

#include<string.h>
using namespace std;


int main(){
    char const *a ="jdksaf";
    char* url = strpbrk(a,"js");
    *url ++ ='\0';
    cout<< url<< endl;
    return 0;

}