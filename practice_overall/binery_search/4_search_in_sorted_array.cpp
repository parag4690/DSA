#include <iostream>
using namespace std;
int pivot(int *a , int n){
    int l=0;
    int h=n-1;
    int mid=(l+h)/2;
    while(l<h){
        if(a[mid]>=a[0]){
            l=mid+1;
        }
        else{
            h=mid;
        }
        mid=(l+h)/2;
    }
    return h;
}
//
int bineary(int a[], int s , int e , int n , int key){
    int start=s;
    int end=e;
    int mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int p=pivot(a , n);
    int key;
    cin>>key;
    if(a[p]<=key && key<=a[n-1]){
        // bineary search on 2nd array;
        if(bineary(a , p , n-1 , n , key)==-1){
            cout<<"element is not present "<<endl;
        }
        else{
        cout<<"element is at "<<bineary(a , p , n-1 , n , key)<<endl;
        }

    }
    else{
        //bineary search on 1st line;
        if(bineary(a , p , n-1 , n , key)==-1){
            cout<<"element is not present "<<endl;
        }
        else{
        cout<<"element is at "<<bineary(a , 0 , p-1 , n , key)<<endl;
        }
    }
}