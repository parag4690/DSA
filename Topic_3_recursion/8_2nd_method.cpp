#include <iostream>
using namespace std;
int power(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        //cout<<power(m,n-1)*m<<endl;;
        // return 1;
        return power(m,n-1)*m;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<power(m,n)<<endl;
}