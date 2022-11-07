#include <iostream>
using namespace std;

#include <bits/stdc++.h>
#include <vector>

void helper(vector<int> input, vector<int> &v1 , vector<vector<int>> &ans , int index , int sum2 , int k){
   if(index>=input.size()){
     return;
   }
   if(input[index]>k-sum2){
     v1.clear();
     helper(input , v1 , ans , index+1 , 0 , k );
   }
   if(input[index]<k-sum2){
       v1.push_back(input[index]);
       helper(input , v1 , ans , index+1 , sum2+input[index] , k);
   }
   else{
      v1.push_back(input[index]);
      ans.push_back(v1); v1.clear();
      helper(input,v1 , ans , index+1 , 0 , k);
   }
}

void printSubsetSumToK(int inut[], int size, int k) {
    // Write your code here
    vector<int> input , output;
    vector<vector<int>> ans;
    for(int i=0; i<size; i++) input.push_back(inut[i]);
    sort(input.begin() , input.end());
   helper(input , output , ans , 0 , 0 , k);
   cout<<ans.size()<<endl;
   for(int i=0; i<ans.size(); i++){
       for(int j=0; j<ans[i].size(); j++){
           cout<<ans[i][j]<<" ";
       } cout<<endl;
   }

}


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
