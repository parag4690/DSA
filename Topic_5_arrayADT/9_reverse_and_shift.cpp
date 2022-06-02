#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int b[size];
     int i , j;
    // 1st method using 2nd array //   a-->b copy in revese order  // then copy b---> a;
    for(i=size-1,j=0; i>=0; i-- , j++){
           b[j]=a[i];
    }
    for(i=0,j=0; i<size; i++ , j++){
           a[j]=b[i];
    }
    for(int k=0; k<size; k++){
        cout<<a[k]<<endl;
    }
    
}