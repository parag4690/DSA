#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> s;
    if(expression[0]=='(' || expression[0]==')'){
        if(expression[1]!='(')
        return false;
    }
    for(int i=1; expression[i]!='\0'; i++){
        if(expression[i]=='('){
            s.push(expression[i]);
            if(expression[i-1]=='(' || expression[i-1]=='+'){
                s.pop();
            }
        }
        else if(expression[i]==')'){
            s.push(expression[i]);
            if(expression[i+1]==')' || expression[i+1]== '+');
            s.pop();
        }
    }
    if(s.empty()){
        return true;
    }
    return false;
}
int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}