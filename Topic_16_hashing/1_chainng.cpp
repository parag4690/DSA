#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
  Node(int data){
      this->data = data;
      next = NULL;
  }
}*head=NULL;

void SortedInsert(Node **p , int key){
     Node *t , *q= NULL , *r=*p;
     t=new Node(key);
    if(*p==NULL){
        *p = t;
    }
    else{
        while(r && r->data<key){
            q=r;
            r=r->next;
        }
        if(r==*p){
            t->next=*p;
            *p = t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
         
    }
}

Node* search(Node * p , int key){
   while(p){
       if(key==p->data)
         return p;
       p=p->next;
   } return NULL;
}

void del(int key){
    Node *p = head , *t;
    int flag = 0;
    if(key==head->data)
      head=head->next;
    else{
        while(p){
           
            if(p->data==key){ 
               flag = 1;
               break;
            }  t=p;
            p=p->next;
        }
        if(flag)
         t->next=t->next->next;

    }
}

void print(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

//  main

int hesh(int key){
    return key%10;
}

void Insert(Node *H[] , int key){
  int index = hesh(key);
  SortedInsert(&H[index] ,  key);
}

int main(){

//  print(head);
//  del(10);
//  print(head);

  // hashtable

  Node *HT[10];
  for(int i=0; i<10; i++)
      HT[i]=NULL;
  Insert(HT  , 12);
  Insert(HT , 22); // same chain 
  Insert(HT , 42);

  Node *temp = search(HT[hesh(42)] , 42);
  cout<<temp->data<<endl;

}