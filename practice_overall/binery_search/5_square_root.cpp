#include <iostream>
using namespace std;
int binary_square(int n){
    int l=0;
    int e=n;
    int mid=(l+e)/2; // long long int lgao  jb bdi value ki multiple bdi value se hogi to vo int ki range se bhr chla jayga
    int ans;
    while(l<=e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else if(mid*mid<n){
            ans=mid;
            l=mid+1;
        }
        mid=(l+e)/2;
    }
    return mid;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    cout<<binary_square(n)<<endl;
    }
}