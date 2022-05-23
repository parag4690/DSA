#include <iostream>
using namespace std;
int main(){
    // pointer_to_array
    int A[5]={2,4,6,8,10};
    int *p;
    p=&A[0];  // a[0]=a  , &A == wrong;

    for(int i=0; i<5; i++){
        p=&A[i];
        cout<<*p<<endl;  // or p[i] , this is crated in stack;
    }
}