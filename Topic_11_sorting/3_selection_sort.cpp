#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *a , int n){
  int i , j , k;
  for(i=0; i<n-1; i++){
      for(j=k=i; j<n; j++){
          if(a[j]<a[k]){
              k=j;
          }
      }
      swap(a[i],a[k]);
  }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    selectionSort(a , n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}