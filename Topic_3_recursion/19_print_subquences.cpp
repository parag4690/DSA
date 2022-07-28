#include <bits/stdc++.h>
using namespace std;
bool checkAB(char input[]){
  static int j,i=0;
  for(j = 0 ; input[j]!='\0'; j++);

  // if(input[2] =='b' || input[])


    if(input[0]=='a' && input[1]=='b'){
        if(input[2]=='a'){
          return false;
        }
        else{
        return  checkAB(input+3);
          
        }
    }
    if(input[0]=='b'){
      return false;
    }
    if(input[0] == 'a'){
      return checkAB(input+1);
      
    }
    return true;
  
  
  
}
int main(){

  char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;

}