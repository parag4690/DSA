#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void duplicate1(char *c){
  char lastduplicate='0';
  for(int i=0; c[i]!='\0'; i++){
      for(int j=i+1; c[j]!='\0'; j++ ){
          if(c[i]==c[j] && c[i]!= lastduplicate){
              cout<<"duplicate element " <<c[i]<<endl;
              lastduplicate=c[i];

          }
      }
  }
}

// usng hashing

void duplicate2(char *c){
    int H[26]={0};
    int sum=0;
    for(int i=0; c[i]!='\0'; i++){
      H[c[i]-97]++;
    }
    for(int i=0; i<26; i++){
      if(H[i]>1){
        cout<<char(i+97)<<" "<<H[i]<<endl;
      }
    }
}
int main(){
  char c[]="findingigg";
  
  // duplicate method 1
 // duplicate1(c);

  // duplicate method 2

  duplicate2(c);
}