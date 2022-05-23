#include <iostream>
using namespace std;
int main(){
    int n=9;
    int *p=&n;
    int *q=p;
    cout<<*p<<" "<<*q<<endl;
    n++;
    cout<<*p<<" "<<*q<<endl;
    
}