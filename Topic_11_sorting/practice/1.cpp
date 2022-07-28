#include  <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &v){
  for(int i=0; i<v.size()-1; i++){
      int flag=1;
      for(int j=0; j<v.size()-1-i; j++){
          if(v[j]>v[j+1]){
            swap(v[j], v[j+1]);
            flag = 0;
          }
      }
      if(flag){
          return;
      }
  }
 
}

int main(){
    vector<int> v;
    int n,a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }

    bubbleSort(v); // important 

   for(int i=0; i<n; i++){
       cout<<v[i]<<" ";
   }
   cout<<endl;

}