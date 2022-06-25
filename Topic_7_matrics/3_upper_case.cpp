#include <iostream>
using namespace std;
class lowerTri{
  private:
  int n;
  int *a;
  public:
  lowerTri(int n=2){
      this->n=n;
      a=new int[n*(n+1)/2];
  }
  void set(int i, int j, int x){
      if(i<=j){
          a[((i-1)*n-((i-2)*(i-1)/2)) + (j-i)]=x;
      }
  }
  int get(int i , int j){
      if(i<=j){
          return a[((i-1)*n-((i-2)*(i-1)/2))+(j-i)];
      }
      else{
          return 0;
      }
  }
  void display(){
      for(int i=1; i<=n; i++){
          for(int j=1; j<=n; j++){
              if(i<=j){
                  cout<<a[((i-1)*n-((i-2)*(i-1)/2))+(j-i)]<<" ";
              }
              else{
                  cout<<0<<" ";
              }
          }
          cout<<endl;
      }
  }
};
int main(){
  int n;
  cin>>n;
  lowerTri L(n);
  int x;
  cout<<"enter all elementsin ";
  for(int i=1; i<=n; i++){
      for(int j=1; j<=n;j++){
          cin>>x;
          L.set(i,j,x);
      }
  }
  L.display();
  cout<<endl;
  cout<<"how many elements search =";
  int t;
  cin>>t;
  while(t--){
      int i,j;
      cin>>i>>j;
      cout<<"M["<<i<<","<<j<<"]="<<L.get(i,j)<<endl;
  }
}