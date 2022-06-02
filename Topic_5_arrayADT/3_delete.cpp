// we dont just delete the element in array means we dont leave blank space behind so we shift the element to the
// vacant.

#include <iostream>
using namespace std;
class array {
    public:
    int A[10];
    int size;
    int length;
};
void delte(array *arr , int index ){
    int x=0;
    if(index>=0 && index<=arr->length-1){  // index is valid or not
        x=arr->A[index];
        for(int i=index; i<arr->length-1; i++){
            arr->A[i]=arr->A[i+1];  // shifting of elements
        }
        arr->length--;
    }
    
}
void display( array arr){
    for(int i=0; i<arr.length ; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    array arr={{2,3,4,5,6},20,5};
    
    delte (&arr , 2);

    display(arr);

}