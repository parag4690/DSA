// to display n numbers
#include <iostream>
using namespace std;
// reverse order
void fun(int x){
    if(x>0){
        cout<<x<<" ";
        fun(x-1);
    }
}
// normal order
void fun1(int x){
    if(x>0){
        fun1(x-1);
        cout<<x<<" ";  // return calling
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
    cout<<endl;
    fun1(n);
    cout<<endl;
    return 0; 
}