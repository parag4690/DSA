#include <iostream>
using namespace std;
int main(){
    int a[5]={2,3,4,5,6};
    int *p=a;
    cout<<*p<<endl; // point at beggenr element of array
    for(int i=0; i<5; i++){
        int *q=&a[i];
        cout<<*q<<" ";
    }
}