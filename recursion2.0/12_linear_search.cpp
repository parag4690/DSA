#include <bits/stdc++.h>
using namespace std;

int linearS(int *a , int k , int n){
   if(n==0){
      return 0;
   }
   if(a[0]==k) return 1;
   else
     return linearS(a+1 , k , n-1 );
    
}


int main(){
  int n=6;
  int a[n]={1 ,3 , 2 , 5 , 8 , 14};
  if(linearS(a  , 4,   n)) 
    cout<<"YES"<<endl;
  else 
   cout<<"NO"<<endl;
}