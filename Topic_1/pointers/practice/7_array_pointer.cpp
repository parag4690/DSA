#include <iostream>
using namespace std;
int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    int *p=a; // *p=&a ye nhi aye ga
    for(int i=0; i<8; i++){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    int *q=a;
    q=q+4;
    
    cout<<*q<<endl;
    
    int *x=a;
    cout<<*(a+4)<<endl;

    cout<<*x+1<<endl;

    // formula  a[i]=*(a+i)   or  

    // imortant  == >   i[arr]=*(i+arr)  // there is no error  dyan 

    int *y=a;
    for(int i=0; i<8; i++){
        cout<<*(i+a)<<" ";
    }
}