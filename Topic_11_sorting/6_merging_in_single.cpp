#include <bits/stdc++.h>
using namespace std;

void Merge(int *a , int l , int mid ,  int h){
    
    int i , j ,k;
    i=l , k = l , j = mid+1;

    int b[h+1];

    while(i<=mid && j<=h){
        if(a[i]<a[j]){
          b[k++] = a[i++];
        }
        else{
            b[k++]= a[j++];
        }
    }
    while(i<=mid){
        b[k++] = a[i++];
    }
    while(j<=h){
        b[k++]=a[j++];
    }

    for(int l =0; l<h; l++){
      a[l]=b[l];
    } 

}

int main(){
    int n=10;
    int a[10]={2,5,6,12,16,3,4,7, 9, 10};
  // at 3 second list starts so , 
    int mid = 4;
    Merge(a , 0 , mid , n );

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}