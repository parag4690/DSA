#include <iostream>
using namespace std;
int main(){
    char a[]="how are you"; // this is store like space 
    int i , word=0;
    for(i=0; a[i]!='\0'; i++){
       if(a[i]==' ' && a[i-1]!=' '){ // space 
           word++;
       }
    }
    cout<<word+1<<endl;

    // white space when we have more than one space // solution // check its previous one space or not
}