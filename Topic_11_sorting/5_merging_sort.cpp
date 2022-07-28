#include <bits/stdc++.h>
using namespace std;
void Merge(int a[] , int b[] , int n , int m ,int c[]){

    int i , j ,k;
    i=j=k=0;

    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }

    for(; i<n; i++){
        c[k++]=a[i];
    }

    for(; j<m; j++){
        c[k++]=b[j];
    }
    



}
int main(){
  int n=5 , m =7;
  int a[n]={1,3,5,7,8};
  int b[m]={2,4,6,9,10,12,11};
  int c[m+n];

  Merge(a , b , n , m , c);

  for(int i=0; i<m+n; i++){
      cout<<c[i]<<" ";
  }
  cout<<endl;
}