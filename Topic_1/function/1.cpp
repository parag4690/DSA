#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int c=sum(a,b);
    cout<<c<<endl;
}