#include <bits/stdc++.h>
using namespace std;
void selectionSort(int *a  , int n){
    int j , k ;
   for(int i=0; i<n-1; i++){
       for(j=k=i; j<n-1; j++){
           if(a[k]>a[j]){
               k=j;
           }
       }
       swap(a[i] , a[k]);
   }
}

void display(int *a , int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
   int n = 5;
   int a[n]={3,4,2,1,5};
   selectionSort(a , n);
   display(a,n);
}