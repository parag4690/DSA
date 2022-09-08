#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *next;
}*head=NULL;

//
void display(node *p){
  do{
      cout<<p->data<<" ";
      p=p->next;
  }while(p!=head);
  cout<<endl;

}

// insert
void Swap(node *p , node *q){
  node *temp = p;
  p=q;
  q=temp;
}
void Swaping_Nodes
void insert( int x){
  
      node *p = head , *last;
      node *t = new node ;
      t->data = x;
      if(head == NULL){
          head = t;
          head->next = head;
      }
      else{
          while(p->next!=head){
              p=p->next;
          }
          p->next = t;
          t->next=head;
      }

}



int main(){

  
  insert(1);
//   display(head);

  insert(12);
  insert(3);
  insert(4);
  insert(5);
  display(head);
//   cout<<head->data<<endl;
}