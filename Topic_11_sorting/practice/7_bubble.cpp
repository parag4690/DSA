#include <bits/stdc++.h>
using namespace std;
class bubbleSort{
  public:
  
  void bubblesort(int *a , int n){
      int flag;
      for(int i=0; i<n-1; i++){
          flag = 1;
          for(int j=0; j<n-1-i; j++){
               if(a[j]>a[j+1]){
                   swap(a[j] , a[j+1]);
                   flag = 0;
               }
          }
          if(flag){
              return ;
          }
      }
  }
};
int main(){
    int n=5;
    int a[5]={5,4,3,2,1};
    bubbleSort b;
    b.bubblesort(a , 5);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


