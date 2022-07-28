#include <bits/stdc++.h>
using namespace std;
void insertSort(vector<int> &v){
    int n = v.size();
    int j;
    for(int i=1; i<n; i++){
        j=i-1;
        int x = v[i];
        while(j>-1 && v[j]>x){
            v[j+1]=v[j]; // shifting
            j--; // hm piche ja rhe 
        }
        v[j+1]= x;
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

    insertSort(v); // important 

   for(int i=0; i<n; i++){
       cout<<v[i]<<" ";
   }
   cout<<endl;

}