#include <iostream>
using namespace std;
class Array{
    public:
    int *A;
    int size;
    int length;  // no. of elements 
};
void display( Array arr){
    for(int i=0; i<arr.length ; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Array arr;
    cout<<"enter size of an array ";
    int s;
    cin>>s;
    arr.size=s;
    int l=arr.size;
    // now create a array through pointer in heap
    cout<<l<<endl;
    arr.A=new int[l];

    // 

    arr.length=0;

    cout<<"enter how many numbers ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr.A[i];
    }
    arr.length=n;
    
    display(arr);

    return 0;
}