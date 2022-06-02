#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n;i++){
        int temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
    }
    a[n-1]=a[-1]; // left rotation  
    a[n-1]=0; // left shift 
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}