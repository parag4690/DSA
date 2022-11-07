// Change in the given string itself. So no need to return or print anything
#include <bits/stdc++.h>
using namespace std;
void helper(char *input , int index , int size){
   if(size==index+1) return ;
   if(input[index]=='p' && input[index+1]=='i'){
	   input[index]='3'; input[index+1]='.';
       
	   for(int i=size; i>=index+2; i--){
           input[i+1]=input[i];
	   }
       input[index+2]='1';
       size++;
       for (int i = size ; i >= index+3; i--) {
         input[i+1] = input[i];
       }
       input[index+3] = '4'; 
	   size++;
    //    return;  
	// cout<<"in "<<input<<endl;
      helper(input , index+1 , size);
   } else {
      cout<<index<<" i "<<endl;
    //   return;
     helper(input , index+1 , size);
   }
}
void replacePi(char input[]) {
	// Write your code here
	int j=0;
	while(input[j]!='\0') j++;
    helper(input , 0 , j);
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

