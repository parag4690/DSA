#include <iostream>
using namespace std;
class array{
    public:
    int a[20];
    int size;
    int length;
};
int get(array arr , int index){
    if(index>=0 && index<arr.length){
        return arr.a[index];
    }
    else{
        return -1;
    }
}
void set(array *arr , int index , int x) // if want to change the thats' why we use pointer here
{
   if(index>=0 && index<arr->length){
       arr->a[index]=x;
       
   }
  
   
}
int max(array arr){
    int max=arr.a[0];
    for(int i=0; i<arr.length; i++){
        if(arr.a[i]>max){
            arr.a[i]=max;
            
        }
    }
    return max;
}
void display(array arr){
    for(int i=0; i<arr.length; i++){
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    array arr={{2,3,4,5,6},10,5};
    set(&arr , 0 , 15);
    display(arr);
}