#include <iostream>
using namespace std;
int fab(int n){
   if(n<=1){
       F[n]=n;
       return n;
   }
   else { 
       if(F[n-2]==-1){
           F[n-2]=fab(n-2);
           
       }
       if(F[n-1]==-1){
           F[n-1]=fab(n-1);
       }
       return F[n-2]+F[n-1];
       
   }
}
int F[10];
int main(){
  int n;
  cin>>n;
  for(int i=0; i<10; i++){
      F[i]=-1;
  }
  cout<<fab(n)<<endl;

}