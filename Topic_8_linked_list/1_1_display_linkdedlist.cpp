#include <bits/stdc++.h>
using namespace std;
// display linked list 
struct node{
  int data;
  struct node *next;

}*first; // global pointer it is for traversing

void create(int A[] , int n){
    int i;
    struct node *t , *last;
    first = new node;
    first->data=A[0];
    first->next=NULL;
    last = first;
    // now copy the 
    for(int i=1; i<n; i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next =t;
        last=t;
    }
}
void display(struct node *p){
  while(p!=NULL){
      cout<<p->data<<" ";
      p=p->next;
  }
  cout<<endl;
}

int main(){
  int A[]={3,5,7,10,15};
  create(A , 5);
  display(first);
  return 0;
}