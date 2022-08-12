#include <iostream>
#include <string>
using namespace std;

#include <stack>
int countBracketReversals(string input) {
	// Write your code here
     int c = 0;
     cout<<c<<endl;
    stack<char> s;
    for(int i=0; input[i]!='\0'; i++ ){
        if(input[i]=='{'){
            s.push(input[i]);
        }
        else if(input[i]=='}'){
            s.pop();
        }
        cout<<"yes"<<endl;
    }
    cout<<"out"<<endl;
    while(!s.empty()){
        if(s.top()=='{'){
            c++;
        }
        s.pop();
    }
    cout<<c<<endl;
    if(c%2==0){
        return true;
    }
    return -1;
}
int main() {
    string input="{{{}}{{";
    
    cout << countBracketReversals(input);
}