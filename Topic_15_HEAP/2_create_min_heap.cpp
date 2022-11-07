#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &v , int key){
    int i=v.size();
    // int temp = v[i];
    v.push_back(key);

    while(i>0 && key<v[i&2==0 ? (i/2)-1 : i/2]){
        v[i]=v[i%2==0 ? (i/2)-1 : i/2];
        i=i%2==0 ? (i/2)-1 : i/2;
    }
    v[i]=key;
}
int main(){
     vector<int> v = {45, 35, 15, 30, 10, 12, 6, 5, 20};
  insert(v , 4);
  for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" , ";
  }
  cout<<endl;
}