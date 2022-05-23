
//4.
//Write a program to print a number which is entered from keyboard using pointer.


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<&n<<endl;
    int *p=&n;
    cin>>*p;
    cout<<*p<<endl;
    cout<<n<<endl;
    cout<<p<<endl;

}