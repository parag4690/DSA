#include <iostream>
using namespace std;

#include <bits/stdc++.h>
#include <vector>

void helper(vector<int> input , int index , vector<int> &output ,  vector<vector<int>> &ans){
    // base case
    if(index>= input.size()){
        ans.push_back(output);
        return ;
    }

    // exclude 
    helper(input , index+1 , output , ans);

    // include 
    int element = input[index];
    output.push_back(element);
    helper(input , index+1 , output , ans);
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
   vector<int> inpu , output ;
   vector<vector<int> >ans;
   for(int i=0; i<size; i++)
     inpu.push_back(input[i]);

    helper(inpu , 0 , output , ans);

    cout<<ans.size()<<endl;

    for(int i=0; ; i++){
        // for(int j=0; j<ans[i].size(); j++)
        //   cout<<ans[i][j]<<" ";
        // cout<<ans[i].size()<<endl;
        // cout<<ans[i][0]<<endl;
        cout<<i<<endl;
    }


}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}