#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    bool check=1,check2=1;
  vector<float> v;
  for(int i=0;i <n; i++){
      cin>>a;
      v.push_back(a);
  }
  int d=abs(v[1]-v[0]);
//   float b = float(v[1]);
  float g=(v[1]/v[0]);
  cout<<g<<endl;
  for(int i=1; i<v.size(); i++){
      int d2 = abs(v[i]-v[i-1]);
      float g2 =((v[i]/v[i-1]));
      if(d!=d2){
          check = 0;
          cout<<"NO"<<endl;
      }
      if(g!=g2){
          cout<<v[i]/v[i-1]<<endl;
          cout<<g2<<endl;
          check2 = 0;
          cout<<"NO GP"<<endl;
      }
    //   cout<<g2<<endl;
  }
  if(check){
      cout<<"AP"<<endl;
  }
  if(check2){
      cout<<"GP"<<endl;
  }
}