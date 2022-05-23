#include <iostream>
using namespace std;
int main(){
    int num=5;
    int a=num;
    int *p=&a;
    a++;
    cout<<*p<<endl;
    num++;
    cout<<*p<<endl;
}