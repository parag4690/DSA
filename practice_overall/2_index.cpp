#include <iostream>
using namespace std;
int main(){
    cout<<"no. of elements ";
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"insert element or at" ;
    int index,w;
    cin>>index>>w;
    for(int i=n; i>index; i--){
        a[i]=a[i-1];
    }
    a[index]=w;
    n=n+1;
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
    
}