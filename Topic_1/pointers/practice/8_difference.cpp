// both have differnt size , 

#include <iostream>
using namespace std;
int main(){
    int a[10];
    cout<<sizeof(a)<<endl;
    int *p=&a[0];
    cout<<sizeof(p)<<endl;

    cout<<sizeof(*p)<<endl;

    int *q=a;

    cout<<sizeof(q)<<endl;
    cout<<sizeof(++q)<<endl;
}