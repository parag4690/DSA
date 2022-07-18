#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *a , int n){
  int flag;
  for(int i=0; i<n-1; i++){
      flag = 1;
      for(int j=0; j<n-1-i; j++){ // dyan muje hr pass me start se check krna h
          if(a[j]>a[j+1]){
              swap(a[j] ,a[j+1]);
              flag = 0;
          }
      }
      if(flag){
          return;
      }
  }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bubbleSort(a , n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}