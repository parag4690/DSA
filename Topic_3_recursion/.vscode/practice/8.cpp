#include <iostream>
using namespace std;
int fun(int n){
    if(n>0){
      return fun(n/2) + n/2;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
}