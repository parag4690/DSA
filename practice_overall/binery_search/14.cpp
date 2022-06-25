#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"how many elements ";
    int t;
    cin>>t;
    while(t--){
    int i,x;
    cin>>i>>x;
    for(int j=n; j>=i; j--){
        a[j+1]=a[j];
    }
    a[i]=x;
    n=n+1;
    }
    for(int j=0; j<n; j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
}