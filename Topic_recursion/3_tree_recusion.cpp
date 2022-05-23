// when function is calling itself more than one time then we will use this;

#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main(){
fun(3);
cout<<endl;
return 0;
}