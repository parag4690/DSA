#include <bits/stdc++.h>
using namespace std;

int fabbi(int n){
   if(n==0)
    return 0;
   else if(n==1)
    return 1;
   else
    return fabbi(n-1)+fabbi(n-2);
}



int main(){
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
       cout<< fabbi(i) <<" ";
    } cout<<endl;
}