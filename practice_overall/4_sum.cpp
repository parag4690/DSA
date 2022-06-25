#include <iostream>
using namespace std;
int recursion_sum(int *a , int n){
   if(n>=0){
    return recursion_sum(a , n-1)+a[n];
   }
   return 0;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<recursion_sum(a , n-1)<<endl;
}