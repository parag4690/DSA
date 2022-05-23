#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *p=&a;
    cout<<p<<endl;
    cout<<&p<<endl;
    int **ptr=&p;
    cout<<ptr<<endl;
}