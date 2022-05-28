#include <iostream>
using namespace std;
int  fun(int n){
    if(n>0){
      int r=fun(n/2)+n/2; // esko hmm void me ni likh skte
      cout<<r<<endl; 
      return 0;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    fun(n);
}