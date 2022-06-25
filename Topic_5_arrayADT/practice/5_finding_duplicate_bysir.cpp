#include <iostream>
using namespace std;

void duplicate(int *a , int n){
    int lastduplicate=0;
    for(int i=0; i<n; i++){
        if(a[i]==a[i+1] && a[i]!=lastduplicate){
            cout<<"duplicate element is "<<a[i]<<endl;
            lastduplicate=a[i];
        }
    }
}

// using indeces

void counting(int *a , int n){
  int i; 
  int j=0;
  int sum=0;
  for(i=0; i<n-1; i++){
     if(a[i]==a[i+1]){
         j=i+1;
         while(a[j]==a[i]){
             j++;
         }
         cout<<j-i<<endl;
         // dyan i ko to agge bdana h
         i=j-1;
     }
  }
}
int main(){
    cout<<"no. of element ";
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    duplicate(a , n);
    
    counting(a ,n);

}