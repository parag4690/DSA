#include <bits/stdc++.h>
using namespace std;
void merge(int *a , int l ,int mid ,  int h){
    int i = l , k = l;
    int j = mid+1;
    int b[h+1];
    while(i<=mid && j<=h){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }

    while(i<= mid){
        b[k++]= a[i++];
    }
    while(j<= h){
        b[k++]=a[j++];
    }

    for(int i = l; i<h ; i++){
        a[i]=b[i];
    }
}

void mergesort(int *a , int n){
    int l , h , i , j  , mid;
    for(i=2; i<n; i=i*2){
        for(j = 0; j+i-1<n; j=j+i){
      
        }
    }
}
int main(){

}