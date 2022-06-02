#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void shifting(int *a , int n){
   int i=0;
   int j=n-1;
   while(j>i){
       while(a[i]<0){
           i=i+1;
       }
       while(a[j]>0){
           j=j-1;
       }
       if(j>i){ // imp
       swap(a[i] , a[j]);
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
    shifting(a , n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}