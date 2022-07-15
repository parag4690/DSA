#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    char data;
    node *next;
}*top=NULL;

void push(char x){
    node *t = new node;
    if(t == NULL){
        cout<<"overflow"<<endl;
    }
    else{
        t->data =x;
        t->next = top;
        top = t;
    }
}

void pop(){
    if(top==NULL){
        cout<<"empty"<<endl;
    }
    else{
        node *p=top;
        top=top->next;
        delete p;
    }
}

int isBalance(char *exp){ // yha pe array ki trh
    int i;
    for(i=0; exp[i]!='\0'; i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
          if(top==NULL){
              return 0;
          }
          pop();
        }
    }
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
 char exp[] = "((a+b)*(c-d))";

 cout<<isBalance(exp)<<endl;
}