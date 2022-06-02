#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    cout<<sizeof(a)/sizeof(a[0])<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;

    int i=n;
    while(a[i]>x && i>=0){
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=x;
     n=n+1;
    // cout<<n<<endl;
    // we should increment array also
   
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
}