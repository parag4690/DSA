#include <iostream>
using namespace std;
// using loop with function

int fib_loop(int n){
    int x=0 , y=1 , z;
    if(n<=1){
        return n;
    }
    else{
        for(int i=2; i<=n; i++){
           z=x+y;
           x=y;
           y=z;
        }
        return z;
    }
}
// 2nd method with recursionw but time complixiy is too high o(2^n)
// 
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

// there was problem of excessive recursion solution use static array

int F[10];
int fibr(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else {
        if(F[n-2]==-1){
            F[n-2]=fibr(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fibr(n-1);
        }
        return F[n-2]+F[n-1];
    }
}
int main(){
    int n;
    cin>>n;
    // using loop 
    cout<<fib_loop(n)<<endl;
    // using recursion
    cout<<fib(n)<<endl;
    // 3rd method 
    for(int i=0; i<10; i++){
        F[i]=-1;
    }
    cout<<fibr(n)<<endl;
}