#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a , a+n);
    int x;
    cin>>x;
    int fix;
    for(int i=0; i<n; i++){
        if(x<a[i]){
            fix=i;
            break;
        }
        else{
        fix=i;
        }
    }
    for(int i=n; i>=fix; i--){
        a[i+1]=a[i];
    }
    a[fix]=x;
    n=n+1;
    for(int i=0; i<n; i++ ){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    

}