#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*top=NULL;

void push(int x){
    node *t=new node;
    if(t==NULL){  // if stack is full
      cout<<"Stack is Full"<<endl;
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){
    int x = -1;
    if(top == NULL)
    cout<<"Stack is Empty"<<endl;
    else{
        node *t;
        t=top;
        top=top->next;
        x = t->data ;
        free(t);
    }
    return x;
}

void display(){
    node *p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    
    display();

    cout<<pop()<<endl;
}