#include <bits/stdc++.h>
#include <stack>
using namespace std;
int isOperand(char s){
    if(s=='+' || s=='*' || s=='-' || s=='/')
      return 0;
    return 1;
}
int precedence(char s){
   if(s=='+' || s=='-')
     return 1;
   else if(s=='*' || s=='/')
     return 2;
   return 0;
}
char* convert(char infix[]){
  stack<char> st;
  st.push(' ');
  char *postfix;
  int len = strlen(infix);
  postfix = new char[len+2];
  int i=0 , j=0;
  while(infix[i]!='\0'){
      if(isOperand(infix[i]))
         postfix[j++]=infix[i++];
      else{
          if(precedence(infix[i])>precedence(st.top())){
            st.push(infix[i++]);
          }
          else{
              char x = st.top();
              st.pop();
              postfix[j++]=x;
          }
      }
  }
  // cout<<j<<endl;
  while(!st.empty()){
    char x = st.top();
    postfix[j++]=x;
    st.pop();
  }
  postfix[j]='\0';
  // cout<<postfix<<endl;
  cout<<"yes"<<endl;
  return postfix;
}
int main(){
    
    char *infix = new char[100];
    cin>>infix;
    char *postfix = convert(infix);
    cout<<postfix<<endl;

    // (a+b)*(c-d);
}