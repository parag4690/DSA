#include <bits/stdc++.h>
using namespace std;

void insertSort(int *a , int n){
  for(int i=1; i<n; i++){
      int j = i-1;
      int x = a[i];
      while(j>-1 && a[j]>x){
          a[j+1]=a[j]; // shifting
          j--;
      }
      a[j+1]= x;
  }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    insertSort(a , n);
     
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}