#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
   // 0! = 1
//    if(n==0)
//      return 1;
//    int smallerProblem=factorial(n-1);
//    int biggerProblem = n*smallerProblem;
   
//    return biggerProblem;

   //

   if(n==0)
     return 1;
   return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    
    cout<<factorial(n)<<endl;
}