#include <bits/stdc++.h>
using namespace std;

void printing(int n){
    if(n>0){
      cout<<n<<" "; // reverse order
      printing(n-1);
      cout<<n<<" "; // increase order
    }
}

int main(){
    int n;
    cin>>n;
    printing(n);
    cout<<endl;
}