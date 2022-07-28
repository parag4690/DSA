#include <bits/stdc++.h>
using namespace std;
void merge(int *a , int l , int mid , int h){
    int i,k,j;
    i=k=l; 
    j=mid+1;
    int b[h+1];
    while(i<=mid && j<=h ){
        
        if(a[i]<a[j]){
          b[k++] = a[i++];
        }
        else{
            b[k++] =a[j++];
        }
    }

    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=h){
        b[k++]=a[j++];
    }
    for(int f = l; f<=h; f++){
        a[f]=b[f];
    }
}
void mergeRecursive(int *a , int l , int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        mergeRecursive(a , l , mid );
        mergeRecursive( a , mid+1 , h);
        merge(a,l,mid,h);
    }
}

int main(){
   int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    mergeRecursive(a , 0 , n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}