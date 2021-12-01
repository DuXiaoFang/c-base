#include <iostream>
using namespace std;


template<class T>

void choosesort(T arr[], int len){
    for(int i =0;i<len-1;i++){
        int minindex=i;        
        for(int j=i+1;j<len;j++){

            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        T temp =arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}
int main(){
    int a[]= {4,2,6,8};

    int len = sizeof(a)/sizeof(a[0]);
    choosesort(a,len);  
    for(int i =0;i<(sizeof(a)/sizeof(a[0]));i++){
        cout<<a[i]<<"\t";
    }
    cout<< endl;

    char a2[] = {'a','x','c','g'};

    int len2 = sizeof(a2)/sizeof(a2[0]);
    choosesort(a2,len2);    
    for(int i =0;i<len ;i++){
        cout<<a2[i]<<"\t";
    }
    cout<< endl;

    return 0;
}