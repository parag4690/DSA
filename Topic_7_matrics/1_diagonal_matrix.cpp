#include <iostream>
using namespace std;
class diagonal{
    private:
    int n;
    int *a; // dynamic array;
    public:
    diagonal(int n=2){
        this->n=n;
        a=new int[n];
    }
    void set(int i, int j , int x){
        if(i==j){
            a[i-1]=x;
        }
    }
    int get(int i, int j);
    void display(){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    cout<<a[i]<<" ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
    ~diagonal(){    // ye dynamic ko delete krne k liye j;
        a=NULL;
        delete []a;
    }

};
int diagonal::get(int i, int j){
    if(i==j){
        return a[i-1];
    }
    else{
        return 0;
    }
}
int main(){
  int n;
  cin>>n;
  diagonal d(n);
  int p=1;
  while(p<=n){
      int x;
      cin>>x;
      d.set(p , p , x );
      p++;
  } 
  d.display();
  cout<<endl;
  cout<<"how many search ";
  int t;
  cin>>t;
  while(t--){
      int i,j;
      cin>>i>>j;
      cout<<"M["<<i<<","<<j<<"]="<<d.get(i,j)<<endl;
  }
} 