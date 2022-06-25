#include <iostream>
using namespace std;
int peak(int *a , int n){
    int l=0; 
    int h=n-1;
    int mid=(l+h)/2;
    int ans;
    while(l<h){ // dyan
        if(a[mid]<a[mid+1]){ // imagine like graph
            l=mid+1;
        }
        else{
            h=mid; // dyan
        }
        mid=(l+h)/2;
    }
    return h; // or return l
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // like highest element
    cout<<"peak element " <<a[peak(a , n )]<<" is at "<<peak(a,n)<<endl;
}