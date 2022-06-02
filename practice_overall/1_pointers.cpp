#include <iostream> 
using namespace std;
int main(){
    int a[]={5,3,4,4};
    int *p=a++;
    p++;
    cout<<p<<endl;
}