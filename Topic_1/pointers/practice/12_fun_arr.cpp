#include <iostream>
using namespace std;
int getsum(int *arr,int n){  // we can write instead   int arr[] 

    cout<<"size :"<<sizeof(arr)<<endl; // eska size 40 anna chahye tha but 8 a rha h pointer
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];

    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"sum is "<<getsum(arr,5)<<endl;
}