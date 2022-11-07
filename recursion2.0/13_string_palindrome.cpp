#include <bits/stdc++.h>
using namespace std;

void str(string s , string &s1  , int n){
  if(n==0)
    return ;
  else{
      s1+=s[n-1];
      str(s , s1 , n-1);  
  }
}

int main(){
 string s , s1;
 cin>>s;

 str(s , s1 , 5);
 cout<<s1<<endl;

 return 0;
}