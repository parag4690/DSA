#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*front = NULL , *rear = NULL;

void enqueue(int x){
   Node *t = new Node;
   if(t==NULL){
       cout<<"full"<<endl;
   }
   else{
       t->data = x;
       t->next = NULL;
   }
   if(front==NULL){
      front = rear = t;
   }
   else{
       rear->next = t;
       rear = t;
   }
}

void dequeue(){
    if(front == rear){
       cout<<"empty"<<endl;
    }
    else{
        Node *p = front;
        front = front->next;
        delete p;
    }
}

void display(){
    Node *p = front;
    while(p!=NULL){
        cout<<p->data <<" ";
       p= p->next;
    }
    cout<<endl;
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    display();
}