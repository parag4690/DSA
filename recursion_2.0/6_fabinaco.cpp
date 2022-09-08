#include <bits/stdc++.h>
using namespace std;
int fabinaco(int n){
    if(n==0)
      return 0;
    if(n==1)
      return 1;
    return fabinaco(n-1)+fabinaco(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fabinaco(n)<<endl;
}