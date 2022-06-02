#include <iostream>
using namespace std;
int main(){
    int m=5,n=5;
    int arr[m]={1,2,3,4,5};
    int arr2[n]={6,7,8,9,10};
    int arr3[m+n];
    int i=0; 
    int j=0; 
    int k=0;
    while(i<m && j<n){
       
        if(arr[i]<arr2[j]){
            arr3[k]=arr[i];
            k=k+1;
            i=i+1;
            
        }
        else{
            arr3[k++]=arr2[j++];
            
        }
    }
    // remaining elements
    for(;i<m; i++){
        arr3[k++]=arr[i];
    }
    for(;j<n; j++){
        arr3[k++]=arr2[j];
    }
    // merged
    cout<<arr3[0]<<endl;
    for (int i=0; i<m+n; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}