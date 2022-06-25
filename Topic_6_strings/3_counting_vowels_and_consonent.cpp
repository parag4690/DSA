#include <iostream>
using namespace std;
int main(){
    char a[]="how are you";
    int i , count=0 , ccount=0;
    for(i=0; a[i]!='\0'; i++){
       if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'){
           count++;
       }
       else if((a[i]>=65 && a[i]<=90 ) || (a[i]>=97 && a[i]<=122)){
           ccount++;
       }
    }
}