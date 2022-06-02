#include <iostream>
using namespace std;
int isSorted(int *a , int n){
   for(int i=0; i<n-1; i++){
       if(a[i]>a[i+1]){
           return false;
       }
   }
   return true;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<isSorted(a , n)<<endl;

}