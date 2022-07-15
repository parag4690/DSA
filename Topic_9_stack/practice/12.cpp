#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int a[n]={1,2,3,4,5};
    int x;
    cin>>x;
    int val;
    cin>>val;
    int i;
    for(i = n-1; i>=x; i--){
        a[i+1]=a[i];
    }
    a[x]=val;
    n=n+1;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
   
    cout<<endl;
    
    
}