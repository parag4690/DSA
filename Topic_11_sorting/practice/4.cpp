#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        int flag = 1;
        for(int j=0; j<n-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=0;
            }
        }
        if(flag){
            return;
        }
    }
}
int main(){
     vector<int> v = {5,4,1,2,6,3};
    bubbleSort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}