#include <iostream>
using namespace std;
void missing( int *a ,int n){
    int diff=a[0]-0;
    int diff2=diff;
    for(int i=0;i<n; i++){
        if((a[i]-i)!=diff){
           diff=a[i]-i;
           for(int j=diff-diff2; j>0; j--){
               cout<<"missing element "<<a[i]-j<<endl;
           }
           diff2=diff;
        }
    }
}

// using hash
void hashing(int *a , int n){
    int low=a[0];
   int max=a[0];
   for (int i=0; i<n; i++){
       if(a[i]>max){
           max=a[i];
       }
   }
   int H[max]={0};
   for(int i=0; i<n; i++){
       H[a[i]]++;
   }
   for(int i=low; i<max; i++){
       if(H[i]==0){
           cout<<"missing element is "<<i<<endl;
       }
   }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    missing(a , n);

    // using hash

    hashing(a , n);
}