#include <iostream>
using namespace std;
int search(int *arr , int key, int length){

    for(int i=0; i<length; i++){
        if(arr[i]==key){
            
            return i;
            
        }
    }
    
    return 0;
}
int main(){
    int arr[]={8,9,4,7,6,3,10,5,14,2};
     int length=sizeof(arr)/sizeof(arr[0]);
      
    cout<<"search key ";
    int serch;
    cin>>serch;
    cout<<search(arr , serch,length)<<endl;
   return 0;
}