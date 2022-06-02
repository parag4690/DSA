// recursion

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binsearch(int *arr , int key, int l , int h){
    int mid;
   while(l<=h){
       mid=(l+h)/2;
       if(key==arr[mid]){
           return mid;
       }
       else if(arr[mid]>key){
           return binsearch(arr , key , l , mid-1);
       }
       else {
           return binsearch(arr , key , mid+1 , h);
       }
   }
   return -1;
}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s;
    cin>>s;
    int l=0;
    int h=n-1;
    sort(a,a+n);
    cout<<binsearch(a , s,l,h);
}