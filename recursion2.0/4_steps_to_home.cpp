#include <bits/stdc++.h>
using namespace std;

int steps(int n){
    if(n==0)
      return 0;
    else 
      {
          cout<<n<<" ";
      return n+steps(n-1);
      }
}

int main(){
    int n; 
    cin>>n;
     cout<<steps(n)<<endl;
}