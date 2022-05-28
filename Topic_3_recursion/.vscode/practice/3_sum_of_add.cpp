#include <iostream>
using namespace std;
int sum(int m , int n){
  if(n==0){
      return m;
  }
  else{
      return (1+sum(m,n-1));
  }
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<sum(m,n)<<endl;
}