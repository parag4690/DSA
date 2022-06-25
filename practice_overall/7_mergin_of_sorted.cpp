#include <iostream>
using namespace std;
int main(){
    int m=5,n=5;
    int a[m]={1,3,5,7,9};
    int b[n]={2,4,6,8,10};
    int c[m+n];
    int i=0,j=0,k=0;
    while( i<m && j<n){
        
        if(a[i]<b[j]){
            c[k]=a[i];
            k=k+1;
            i=i+1;
        }
        else if(a[j]<b[i]){
            c[k]=b[j];
            k=k+1;
            j=j+1;
        }
    }
    // remaining elements
    for(;i<m; i++){
        c[k]=b[i];
        k=k+1;
    }
    for(;j<n; j++ ){
        c[k]=b[j];
        k+=1;
    }

    cout<<"final output"<<endl;
    for(int i=0; i<m+n; i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

}