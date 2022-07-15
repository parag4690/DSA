#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
}*top=NULL;

void push(int x){
  node *t = new node;
  if(t==NULL){
      cout<<"Stack is Full"<<endl;
  }
  else{
      t->data=x;
      t->next = top;
      top=t;
  }
}
int pop(){
    int x = -1;
    if(top==NULL){
      cout<<"Stack is empty"<<endl;
    }
    else{
        node *p = top;
        top=top->next;
        x = p->data;
        delete p;
    }
    return x;
}

void display(){
    node *p = top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int isEmpty(){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int StackTop(){
    return top->data;
}

// main

int isOperand(char x){
    if(x=='+' || x =='-' || x=='*' || x=='/'){
        return 0;
    }
    else{
        return 1;
    }
}

int preference(char x){
    if(x=='+' || x=='-'){
        return 1;
    }
    else  if(x=='*' || x=='/'){
        return 2;
    }
    return 0;
}

// infix to postfix
char* convert(char infix[]){
  char *postfix;
  int len = strlen(infix);
  postfix = new char[len+2]; // 1 for '\0'
  int i=0 , j=0;
  while(infix[i]!='\0'){
      if(isOperand(infix[i])){
          postfix[j++]=infix[i++];
      }
      else{
          if(preference(infix[i])>preference(top->data)){
                  push(infix[i++]);
          }
          else{
              postfix[j++]=pop();
          }
      }
  }
  while(top!=NULL){
      postfix[j++]=pop();
      
  }
  
  postfix[j]='\0';
  return postfix;
}
int main(){
  char infix[]="a+b*c-d/e";

  // push something so that it will not give error
  push(' ');
  char *posfix=convert(infix);
  cout<<posfix<<endl;
}