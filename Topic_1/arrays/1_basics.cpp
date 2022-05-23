#include <iostream>
using namespace std;
int main(){
    int A[5];
    cout<<sizeof(A)<<endl; // it tells about the total bytes occupy by the array
    A[0]=12;
    A[1]=25;
    A[2]=30;
    cout<<sizeof(A)<<endl;
    cout<<sizeof(A[0])<<endl;
    cout<<A[1]<<endl;

    // using printf;

    printf("%d\n" , A[2]); 

    int B[10]={2,3,4,5,6,7}; // here only 7 elements are initialize then reset of the value will be zero
    cout<<B[8]<<endl;
    return 0;
}