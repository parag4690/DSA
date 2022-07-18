#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
}*front = NULL , *rear=NULL;

void enqueue(int x){
  node *t = new node;
  if(t==NULL){
      cout<<"Queue is full"<<endl;
  }
  else{
      t->data = x;
      t->next = NULL;
      // for every first node front and rear will point first this then rear will move;

      if(front == NULL){
          front = rear = t;
      }
      else{
          rear->next = t;
          rear = t;
      }
  }
}

int dequeue(){
    int x = -1;
    if(front == NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        node *p=front;
        front=front->next;
        x = p->data;
        delete p;
    }
    return x;
}
void display(){  // i dont want to modify
node *p=front;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    // front = 0;
}
int main(){
  enqueue(10);
  display();
  enqueue(20);
  display();
}