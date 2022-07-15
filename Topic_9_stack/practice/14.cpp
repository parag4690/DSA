#include <iostream>
using namespace std;

void pairStar(char input[]) {
    // Write your code here
    static int j;
    for(j=0; j<input[j]!='\0'; j++);
    static int i=0;
    
    if(i==j-1){
        return ;
    }
    else{
        if(input[i]==input[i+1]){
            int x = i,k;
           
            return;
            for( k=j; k>x; k--){
                input[k+1]=input[k];
            }
            input[x+1]='*';
            j=j+1;
        }
        i=i+1;
        pairStar(input);
        
    }
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
