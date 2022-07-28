#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &v){
    int n = v.size();
    int j , k;
    for(int i=0; i<n-1; i++){
       for(j=k=i; j<n; j++){
           if(v[k]>v[j]){
               k=j;
           }
       }
       swap(v[i],v[k]);
    }
}
int main(){
    vector<int> v = {5,4,1,2,6,3};
    selectionSort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}