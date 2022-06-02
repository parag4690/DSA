// swap 1elements with last one;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int *arr){
 for(int i=0; i<2; i++){
     swap(arr[i],arr[5-i-1]);
 }
}

// or 

void reverse2(int *arr){
    for(int i=0; i<2; i++){
        int temp=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=temp;
    }
}

int main(){
   int arr[5]={1,2,3,4,5};
   reverse2 (arr);
   for(int i=0; i<5; i++){
       cout<<arr[i];
   }
   cout<<endl;
}