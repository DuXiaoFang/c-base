#include<array>
#include<iostream>

using namespace std;

int main(){
    array<int,5> a{1,2,3,4,5};


    // array<int,5>::iterator i;
    // i = a.begin();
    // cout<< *i << endl;
    // i=a.end();
    // --i;
    // cout<< *i << endl;

    // array<int,5>::reverse_iterator j;
    // j = a.rbegin();
    // cout<< *j << endl;

    // j =a.rend();
    // --j;
    // cout<< *j<< endl;
    // for(j=a.rbegin();j<a.rend();++i){
    //     cout<< *j ;
    // }
    // cout<< endl;


    cout<< a.size() << endl;
    cout<< a.max_size() << endl;
    if(!a.empty()){
        cout<< "The array a is not empty" << endl;
    }

    cout<< a.at(3)<< endl;
    //cout<< a.at(10) << endl;

    cout<< a.front() << endl;
    cout<< a.back() << endl;

    cout<< a.data() << endl;//a.data()返回的是指针，
    cout<< *a.data() << endl;

    a.fill(100);
    for(auto x:a){
        cout<< x;
    }
    cout<<endl;

    array<int,5> b{1,2,3,4,5};
    a.swap(b);
    for(auto x:a){
        cout<< x;
    }

}