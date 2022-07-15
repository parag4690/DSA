#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
}*top=NULL;

void push(int x){ // always come at first
    node *t = new node;
    if(t==NULL){
        cout<<"Stack is full "<<endl; // very less chance to get 
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){
    int x=-1;
    if(top==NULL){
        cout<<"empty"<<endl;
    }
    else{
        node *p = top;
        top=top->next;
        x = p->data;
        free(p);
    }
    return x;
}

int isEmpty(){
    if(top==NULL){
        return true;
    }
    return false;
}