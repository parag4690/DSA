#include <bits/stdc++.h>
using namespace std;


int isSorted(int *a , int index , int n){
    if(index<n){
       if(a[index]<=a[index+1])
         return isSorted(a , index+1 , n);
       else 
         return 0;
    }
    else
     return 1;
}

int main(){
  int n=6;
  int a[n]={1 ,1 , 2 , 5 , 8 , 14};
  if(isSorted(a , 0 , n-1)) // n-1 dyann
    cout<<"YES"<<endl;
  else 
   cout<<"NO"<<endl;
}