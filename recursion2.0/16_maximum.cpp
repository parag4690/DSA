#include <bits/stdc++.h>
using namespace std;

int maxi(int *a , int n){
   if(n==0)
     return 0;
   if(n==1)
     return a[0];
   else{
       int mx = maxi(a , n-1);
       if(mx==0) return 0;
        if(mx<a[n-1]) 
           mx=a[n-1]; 
           
        return mx;
     
   }
}

int main(){
    int n=5;
    int a[n]={11 ,22 , 5, 43, 14};
    cout<<maxi(a , n)<<endl;
}