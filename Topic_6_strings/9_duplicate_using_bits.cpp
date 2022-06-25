#include <iostream>
using namespace std;
void duplicate(char a[]){
  long int H=0; 
  long int x;
  for(int i=0; a[i]!='\0'; i++){
      x=1;
      x=x<<(a[i]-97);
      if((x&H)>0){
          cout<<a[i]<<endl;
      }
      else{
          H=x|H;
      }
  }
}
int main(){
    char a[]="parag Sharma";
    duplicate(a);
}