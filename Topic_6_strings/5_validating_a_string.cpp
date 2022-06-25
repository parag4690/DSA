#include <iostream>
using namespace std;
int valid(char *name){
  int i;
  for(i=0; name[i]!='\0'; i++){
      if(!(name[i]>=65 && name[i]<=90)  && !(name[i]>=92 && name[i]<=127) && !(name[i]>=48 && name[i]<=57)){
          return false;
      }
  }
  return true;
}
int main(){
    // password like only alphabet or num are valid
    char name[]="parag!690";
    cout<<valid (name)<<endl;
}