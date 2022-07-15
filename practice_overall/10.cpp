#include <iostream>
#include <string>
using namespace std;
// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    static int c=0;
   if(input[0]=='\0'){
       return;
   }
   if(input[0]!='x'){
       cout<<input+1<<endl;
       removeX(input+1); // 
   }
   else{
    
       int i=1;
       for(; input[i]!='\0'; i++){
           input[i-1] = input[i];
       }
       cout<<"i"<<input[i]<<endl;
       input[i-1]=input[i];
       
       c++;
       removeX(input);
   }
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
