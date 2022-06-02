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
   int i=0;
   int j=n-1;
   while(i<j){
       while(a[i]<0){
         i++;
       }
       while(a[j]>0){
           j--;
       }
       if(i<j){
       swap(a[i],a[j]);

       } 
       
   }
   for(int k=0; k<n; k++){
       cout<<a[k]<<" ";
   }
   cout<<endl;
}