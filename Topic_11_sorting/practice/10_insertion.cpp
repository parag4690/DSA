#include <bits/stdc++.h>
using namespace std;
void insertionSort(int *a , int n){
  int i , j , x;
  for(i=1; i<n-1; i++){
      j=i-1;
      x = a[i];
      while(j>-1 && a[j]>x){
          a[j+1] = a[j];
          j--;
      }
      a[j+1]= x;
  }
}
void display( int *a , int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 5;
    int a[n]={3,4,5,1,2};
    insertionSort( a, n);
    display( a, n);
}