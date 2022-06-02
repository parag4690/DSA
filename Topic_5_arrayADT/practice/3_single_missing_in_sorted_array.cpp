#include <iostream>
using namespace std;
void natural(int *a , int n){
    // sum of natural number is ==  n(n+1)/2
  int h=a[n-1];
  int sum1=(h*(h+1))/2;
  int sum2=0;
  for(int i=0; i<n; i++){
    sum2=sum2+a[i];
  }
  cout<<"Missing elements "<<endl;
  cout<<sum1-sum2<<endl;
}

// 

void random(int *a , int n){
    int i;
    int diff=a[0]; // dyan depend on index
    for(int i=0; i<n; i++){
        if(a[i]-i!=diff){
          cout<<"missing element is "<<a[i]-1<<endl;
          break;
        }
    }
}

//

void multiple(int *a ,  int n){
  int i;
    int diff=a[0]; // dyan depend on index
    for(int i=0; i<n; i++){
        if(a[i]-i!=diff){
          cout<<"missing element is "<<a[i]-1<<endl;
          diff+=1;
        }
    }
}
int main(){
    cout<<"no. of elements ";
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int l=a[0];
    int h=a[n-1];

    if(l==1){
        natural(a , n);
    }
    else{
      //random( a , n);

      // if multi missing element are present 
    
      multiple(a , n);
    }
    

}