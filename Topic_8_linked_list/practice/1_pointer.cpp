#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,1,2,2,3,4};
    sort(arr , arr+6);
    int x;
    for(int i=0; i<6; i++){
      if(arr[i]==arr[i+1]){
          x=arr[i];
      }
      else if(arr[i]!=arr[i-1] && x!=arr[i]){
         cout<<arr[i]<<endl;
      }
    }
    
}