#include <iostream>
using namespace std;
long long int binary_square(int n){
    int l=0;
    int e=n;
    long long  int mid=(l+e)/2; 
    long long int ans;
    while(l<=e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else if(mid*mid<n){
            ans=mid;
            l=mid+1;
        }
        mid=(l+e)/2;
    }
    return ans;
}

double moreprecision(int n , int precision , int tempsol){ // precision mean kha tk ans chaye
  double factor=1;
  double ans=tempsol;
  for(int i=0; i<precision; i++){
      factor=factor/10;  // o.o1 , 0.001 , 0.0001
      for(double j=ans; j*j<n; j=j+factor){
          ans=j;
      }
  }
  return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int tempsol=binary_square(n);
    cout<<"ans is "<<moreprecision(n , 3 , tempsol)<<endl;
    }
}