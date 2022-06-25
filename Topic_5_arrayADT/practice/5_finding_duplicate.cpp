#include <iostream>
using namespace std;

// 1st method using hashtable 

void duplicate(int *a , int n){
   int max=0;
   int l=a[0]-0;
   for(int i=0; i<n; i++){
       if(a[i]>max){
           max=a[i];
       }
   }
   int H[max]={0};
   for(int i=0; i<n; i++){
       H[a[i]]++;
   }
   for(int i=0; i<=max; i++){
       if(H[i]>1){
       cout<<"duplicate elements are "<<i<<endl;
       }
   }
}

// counting of duplicate element by hashtable


int counting(int *a , int n){
  int max=a[0];
  for(int i=0 ; i<n; i++){
      if(a[i]>max){
          max=a[i];
      }
  }
  int H[max]={0} , sum=-0;
  
  for(int i=0; i<n; i++){
      H[a[i]]++;
  }
  int l=a[0];
  for(int i=l; i<=max ; i++){
      if(H[i]>1){
          sum=sum+H[i];
          
      }
  }
  return sum;
}


int main(){
   cout<<"no. of elements ";
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
   // only for sorted array
   duplicate(a , n);

   cout<<counting(a , n)<<endl;

}