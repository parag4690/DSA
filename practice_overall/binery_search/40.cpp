#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v , v2;
    int n , a , max = INT_MIN , sum=0; 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<n; i++){
        sum=v[i];
        
        v2.push_back(v[i]);
        for(int j=i+1; j<n; j++){
          sum+=v[j];
          v2.push_back(v[j]);
          if(max<sum){
              max = sum;
          }
          else{
              v2.clear();
          }
        }
    }
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<max<<endl;
}