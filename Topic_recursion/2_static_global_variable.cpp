#include <iostream>
using namespace std;
// normal
int fun(int x){
   if(x>0){
       return fun(x-1)+x;
   }
   return 0;
} 
//gbobal & stattic  
int fun2(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun2(n-1)+x;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
    cout<<fun2(n)<<endl;
    cout<<fun2(n)<<endl; // dyan
    cout<<fun(n)<<endl;
}