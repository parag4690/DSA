#include <iostream> 
using namespace std;
int main(){
    int a[]={5,3,4,4};
    int *p=a[0];
    p++;
    cout<<p<<endl;
}