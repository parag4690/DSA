#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
     int n,max=0,c=0;
     cin>>n;
     int a[n];
     for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>=max){
            max=a[i];
        }
     }
     //cout<<max<<endl;
     int lastdigit=0;
     int H[max+1];
     for(int i=0; i<n; i++){
         if(a[i]!=0 && a[i]!=lastdigit){
         H[a[i]]=1;
         lastdigit=a[i];
         }
         
     }
    //sort(H , H+max, greater<int>());
     for(int i=0; i<max+1; i++){
        //cout<<"p "<<H[i]<<endl;
       // cout<<a[i]<<endl;
       if(H[i]==1){
           c++;
       }
     }
    cout<<c<<endl;
 }
}