#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &v){
    int max = INT_MIN;
    int n = v.size();
    for(int i=0; i<n; i++){
        if(v[i]>=max){
            max = v[i];
        }
    }   

    int H[max+1]={0};
    for(int i =0; i<n; i++){
        H[v[i]]++;
    }
    int j =0 , i=0;

/************************8                       by me
     for(int i=0; i<max+1; i++){
         while(H[i]>0){
           v[j++]=i;
           H[i]--;
         }
     }

    */ //                                        or by sir

    while(i<max+1){
        if(H[i]>0){
            v[j++]=i;
            H[i]--;
        }
        else{
            i++;
        }
    }

   

}
int main(){
  vector<int> v = {6,3,9,10,15,6,8,12,3,6};
  countSort(v);

  for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" ";
  }
  cout<<endl;

}