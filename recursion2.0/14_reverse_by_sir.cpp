#include <bits/stdc++.h>
using namespace std;

void str(string &s  , int i , int j){ // yha pe reference dena chahiye

    if(i<=j){
    swap(s[i] , s[j]);
    str(s , i+1 , j-1);
  }
  return;
  
}

int main(){
 string s;
 cin>>s;
  
 str(s , 0 , s.length()-1);
 cout<<s<<endl;

 return 0;
}