#include <bits/stdc++.h>
using namespace std;

// 1st method 
int sum(int *a , int n){
   if(n<0) return 0;
   else 
    return a[n]+sum(a , n-1);
}

//2nd

int sum2(int *a , int n){
   if(n<0) return 0;
   else 
    return a[0]+sum(a+1 , n-1);
}

// 3rd

int sum3(int *a , int size){
    if(size==0) return 0;
    // if(size==1) return a[0];
    else 
      return a[0]+sum2(a+1 , size-1);
}

int main(){
    int n=5;
    int a[n]={3 , 2 , 5, 1, 6};
    cout<<sum(a , n-1)<<endl;
    cout<<sum2(a , n-1 )<<endl;
    cout<<sum3(a , n)<<endl;
    

}