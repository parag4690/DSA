#include <bits/stdc++.h>
using namespace std;

int Operand(char a){
   if(a=='+' || a=='*' || a=='/' || a=='-' )
    return 0;
   return 1;
}

int precendence(char a){
    if(a=='+' || a=='-') return 1;
    else if(a=='*' || a=='/') return 2;
    else return 0;
}

char *convert(char *infix){
  stack<char> st;
  st.push(' ');
  int length = strlen(infix);
  char *postfix = new char[length+2];
  int i=0 , j=0;
  while(infix[i]!='\0'){
      if(Operand(infix[i])){ postfix[j++] = infix[i++] ; }
      else{
          if(precendence(infix[i])>precendence(st.top()))
            st.push(infix[i++]);
          else{
              char x = st.top();
              postfix[j++]=x;
              st.pop();
          }
      }
  }
  while(!st.empty()){
     postfix[j++] = st.top();
     st.pop();
  }
  return postfix;
}

int main(){
    char* infix=new char[100];
    cin>>infix;
    char *postfix = convert(infix);
    cout<<postfix;
}