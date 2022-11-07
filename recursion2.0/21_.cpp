#include<iostream>
using namespace std;

#include <bits/stdc++.h> 
#include <vector>
void helper(int input[] , vector<int> &output ,   int x , int size , int index){
   if(index>=size){
     return;
   }
   if(input[index]==x){
     output.push_back(index);
     helper(input , output , x , size  ,  index+1 );
   }
   else
   helper(input , output  , x , size ,  index+1);
}
int allIndexes(int input[], int size, int x, int output[]) {
   vector<int> out; 
   helper(input , out ,  x , size , 0);
   for(int i=0; i<out.size(); i++)
     output[i]=out[i];
   return out.size();
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}


