// create heap of n elements // n log n time
// go on delete element of heap and store them in deleted space //  nlog n 
// total time in heap sort  = 2nlogn

#include <bits/stdc++.h>
using namespace std;

void insert(int H[] , int n){ // n is postion
    int i = n , temp;
    temp = H[i];

    while(i>1 && temp > H[i/2]){
           H[i]=H[i/2];
           i=i/2;
    }
    H[i]=temp;
}

int Dele(int A[] , int n){
    int i , j , x;
    int val = A[1];
    x=A[1]; // only root
    A[1]=A[n]; // last element copy on first place;
    A[n]=val;
    i=1; j=i*2;
    while(j<=n-1){
       if(j<n-1 && A[j+1] > A[j] )
         j=j+1;
       if(A[i]<A[j]){
           swap(A[i] , A[j]);
           i=j;
           j=2*j;
       }
       else 
        break;
    }
    return val;
}



int main(){
 // zero is ignorabale

 int H[] = {0 , 10 , 20 , 30 , 25, 5 , 40 , 35};
 for(int i=2; i<=7; i++){
     insert(H , i);
 } cout<<"YES"<<endl;
 cout<<Dele(H , 7)<<endl;
 for(int i=1; i<=7; i++){
     cout<<H[i]<<" ";
 } cout<<endl;
 return 0;
}