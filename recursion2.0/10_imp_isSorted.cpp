#include <bits/stdc++.h>
using namespace std;


bool isSorted(int *a , int n){
   if(n==0 || n==1)
    return true;
   if(a[0]>a[1])
    return false;
   else 
    return isSorted(a+1 , n-1); // a+1 mean 0+1 hota rhga , ab ek size bhi to km hogya
}

int main(){
  int n=6;
  int a[n]={1 ,1 , 2 , 5 , 8 , 14};
  if(isSorted(a  ,  n)) // n-1 dyann
    cout<<"YES"<<endl;
  else 
   cout<<"NO"<<endl;
}