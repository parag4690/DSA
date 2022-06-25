#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void arrangement(int *a , int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]>0){
          i++;
        }
        if(a[j]<0){
          j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    arrangement(a , n);

    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}