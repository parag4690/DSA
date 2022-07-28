#include <bits/stdc++.h>
using namespace std;

int subSequence(string input , string output[]){
  if(input.size() == 0 ){
      output[0]=" "; // empty
      return 1; // size 1 hai
  }


  string subString = input.substr(1); // 1 se agge k lete jane hai
  int smallOutputSize = subSequence(subString , output);

  for(int i=0; i<smallOutputSize; i++){
      output[i + smallOutputSize] = input[0] + output[i];
  }

  return 2*smallOutputSize ; // hm hr bar size kr kre hai so , jse 2^1 , se 2^3;
}

int main(){
    string input;
    cin>>input;
    string *output = new string[1000];

    int count = subSequence(input , output);
    
    for(int i=0; i<count; i++){
        cout<<output[i]<<endl;
    }

}