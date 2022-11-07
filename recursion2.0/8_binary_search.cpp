#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[]){
   int l=0 ; 
   int h = 4;
   int mid=(l+h)/2;
   while(l<=h){
       if(a[mid]==3)
         return 1;
       else if(a[mid]>3)
         h=mid-1;
       else 
         l=mid+1;
       mid=(l+h)/2;
   }
   return 0;
}


int BinarySearch(int *a , int low , int high ,  int key ){
    if(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key)
         return 1;
        else if(a[mid]>key)
         return BinarySearch(a , low , mid-1 , key );
        else 
        return  BinarySearch(a , mid+1 , high , key );
        
    }
    else 
     return 0;
}

int main(){
  int a[5]={1 ,2  , 5 , 8 , 9};
  if(BinarySearch(a , 0 , 4 , 4))
    cout<<"YES"<<endl;
  else 
   cout<<"NO"<<endl;
}