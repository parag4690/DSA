#include <bits/stdc++.h>
using namespace std;
int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
      return 0;
    return 1;
}
int precedence(char x){
    if(x=='+' || x=='-' )
      return 1;
    else if(x=='*' , x=='/')
      return 2;
    return 0;
}
// 1 4 2 2 1 5
string* convert(string s){
    stack<char> st;
    st.push(' ');
    int i =0 , j=0;
    int len = s.length();
    // cout<<len<<endl;
    string *postfix = new string[len+2];
     cout<<" 1 "<<endl;
    while(s[i]!='\0'){
        cout<<i<<endl;
        if(isOperand(s[i]))
           postfix[j++] = s[i++];
          
        else{
            if(precedence(s[i])>st.top()){
                cout<<st.top()<<endl;
                char x = s[i++];
                cout<<x<<endl;

                st.push(x);
            }
            else{
                char x = st.top();
                st.pop();
                postfix[j++]=x;
            }

        } 
           
    }
    while(!st.empty()){
        char x = st.top();
        st.pop();
        postfix[j++] = x; 
    }

    postfix[j]='\0';
    return postfix;
}
int main(){
   string s="a+b*c-d/e";
   
   string* s2=convert(s);
   cout<<s2<<endl;
    
}