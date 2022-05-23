#include <iostream>
using namespace std;
int main(){
    int a[2]={45,67};
    int *p=&a[0];
    cout<<*p<<endl;
    p++;  // addres shift hogya
    cout<<*p<<endl;
}