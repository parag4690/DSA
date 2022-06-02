#include <iostream>
using namespace std;
class Array{
    public:
    int A[20];
    int size;
    int length;  // no. of elements 
};
void display( Array arr){
    for(int i=0; i<arr.length ; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}
// append 

void append(Array *arr , int x){  // * because we want to modify
  if(arr->length < arr->size){
      arr->A[arr->length]=x;
      arr->length++; // ++post adding
  }
}

// insert 

void insert(Array *arr , int index , int x){
    if(index>=0 && index<=arr->length){
        for(int i=arr->length; i>index; i--){
            arr->A[i]=arr->A[i-1];
            }

            arr->A[index]=x;
            arr->length++;
        
    }
}
int main(){
   Array arr={{2,3,4,5,6},20,5}; // 1st part is arry (pointer ni lena)
    
    insert(&arr , 3 , 20 );
    append( &arr, 10);
    

    display(arr);

    

    return 0;
}