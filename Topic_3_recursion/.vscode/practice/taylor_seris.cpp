#include <iostream>
using namespace std;
int taloyer(int x , int n){
    static double p=1 , f=1;
    if(n==0){
        return 1;
    }
    else {
        int r=taloyer(x,n-1);
        p=p*x;
        f=f*n;
        
        return r;
    }
}
int main(){
    int x,n;
    cin>>x>>n;
    taloyer(x,n);
}