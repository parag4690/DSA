#include <iostream>
using namespace std;
int pivot(int *a , int n){
    int l=0; 
    int e=n-1;
    int mid=(l+e)/2;
    while(l<e){
        if(a[mid]>=a[0]){
            l=mid+1;
        }
        else{
            e=mid;
        }
        mid=(l+e)/2;
    }
    return l; 
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"pivot element is "<<a[pivot(a , n)]<<endl;

}