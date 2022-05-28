#include <iostream>
using namespace std;
double e(int x , int n) // x-> power of e , n= how many terms
{
    static double p=1 , f=1;
    double r;
    if(n==0){return 1;}
    else{
      r=e(x,n-1);
      p=p*x;
      f=f*n;
      return r+p/f;
    }
}
int main(){
    cout<<e(1,10)<<endl;
    return 0;
}