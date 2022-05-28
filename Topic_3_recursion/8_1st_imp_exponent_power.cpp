#include <iostream>
using namespace std;
//int r=1; // so that value will be update even after many times calling
int power(int m,int n){
    static int r=1;
     if(n>0){
         r=r*m;
         power(m , n-1);
       //  cout<< r<<endl;
         return r;
     }
     return 1;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<power(m,n)<<endl;
}