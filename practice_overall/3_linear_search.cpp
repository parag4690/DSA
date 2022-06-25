#include <iostream>
using namespace std;
void linear(int * a , int n , int key){
    for(int i=0; i<n; i++){
        if(a[i]==key){
            cout<<a[i]<<" at "<<i<<endl;
            break;
        }
    }

}

void bineary(int *a , int n , int key){
  int l=0;
  int h=n-1;
  int mid;
  for(; l<=h;){
    mid=(l+h)/2;
    if(a[mid]==key){
        cout<<a[mid]<<" at "<<mid<<endl;
        break;
    }
    else if(key<a[mid]){
        h=mid-1;
    }
    else{
        l=mid+1;
    }
  }
}

void recursion(int *a ,int l, int h , int key){
   int mid=(l+h)/2;
   while(l<=h){
       if(a[mid]==key){
           cout<<a[mid]<<" at "<<mid<<endl;
           break;
       }
       else if(key<a[mid]){
           recursion(a , l , mid-1 , key);
       }
       else{
           recursion(a , mid+1 , h, key);
       }
   }

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        
    }
    int key;
    cin>>key;
    // linear search
    
    linear( a , n , key);
   
   // bineary search
   
   bineary(a , n ,key);

   // recursion

   recursion(a ,0, n-1 , key );

    
}