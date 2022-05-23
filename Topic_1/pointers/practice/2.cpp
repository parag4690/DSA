#include <iostream>
using namespace std;
int main(){
    int i=54;
    int q=78;
    int *p=0;
    p=&i; 
    cout<<*p<<endl;
    p=&q;
    cout<<*p<<endl;
    


}