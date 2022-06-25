#include <iostream>
using namespace std;

// 1st method // if there are duplicates we have to remove duplicate first

void sum1(int *a , int n , int s){
   for(int i=0; i<n; i++){
       for(int j=i+1; j<n; j++){
           if(a[i]+a[j]==s){
               cout<<"pair is "<<a[i]<< " " << a[j]<<endl;
           }
       }
   }
}

// 2nd method using hashing 

void sum2(int *a , int n , int s){
   int k=s;
   int max=a[0];
   for(int i=0; i<n; i++){
       if(a[i]>max){
           max=a[i];
       }
   }
   int H[max]={0};
   for(int i=0; i<n; i++){
       if(H[k-a[i]]!=0 && k-a[i]>=0 ){ // dyan
           cout<<a[i]<<" + "<<k-a[i]<<" = "<<k<<endl;
       }
       H[a[i]]++;
   }
}

int main(){
    cout<<"no. of elements ";
    int n;
    cin>>n;
    int a[n];
    cout<<"sum of pair ";
    int s;
    cin>>s;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

   // sum1( a , n,s);
    sum2(a  , n , s);   
}