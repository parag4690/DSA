#include <iostream>
using namespace std;
void name1(char *name){
    int len=0;
    while(name[len]!='\0'){
        len++;
    }
    for(int i=0; i<len/2; i++ ){
        swap(name[i],name[len-1-i]);
    }
}
void name2(char *name){
     int len=0;
    while(name[len]!='\0'){
        len++;
    }
    char nam[len];
    int i;
    int j=len;
    // a-->b
    for( i=0; name[i]!='\0'; i++){
        nam[i]=name[j-1-i];
    }
    // b--->
    for(int i=0; i<len; i++){
        name[i]=nam[i];
    }
}
int main(){
    char name[]={'p','a','r','a','g','\0'};
    // method 1

   name1(name);
   cout<<name<<endl;
  // mehtod 2 copy a-->b-->a
    name2(name);
    cout<<name<<endl;
}