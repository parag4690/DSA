#include <bits/stdc++.h>
using namespace std;

int steps(int n){
    if(n<0) return 0;
    
    // else if(n==1) // wrong
    //  return 1;
    // else if(n==2)
    //  return 2;
    // else 
    //  return steps(n-1)+steps(n-2);


    else if(n==0) // zero se zero 1 
     return 1;
    else 
     return steps(n-1)+steps(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<steps(n)<<endl;
}