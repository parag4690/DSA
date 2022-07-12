#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
node *first=NULL;
node *second=NULL;
node *third=NULL;
//
void create(int *a , int n){
    node *t , *last;
    first = new node;
    first->data=a[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        t=new node;
        t->data = a[i];
        t->next =NULL;
        last->next = t; // first link krega t pe
        last = t;
    }
}

void create2(int *a , int n){
    node *t , *last;
    second = new node;
    second->data=a[0];
    second->next=NULL;
    last = second;

    for(int i=1; i<n; i++){
       t= new node ;
       t->data = a[i];
       t->next = NULL;
       last->next = t;
       last = t;
    }
}
//
void merge(node *p , node *q){
  node *last;
  // check 1st element 
  if(p->data<q->data){
      third = p;
      last = p;
      p=p->next;
      third->next=NULL;
  }
  else{
      third=last=q;
      q=q->next;
      third->next = NULL;
  }

  while(p!=NULL && q!=NULL){
     if(p->data<q->data){
         last->next=p; // phle ye last vale se link krega
         last=p;
         p=p->next;
         last->next=NULL;
     }
     else{
         last->next = q;
         last=q;
         q = q->next;
         last->next = NULL;
     }
  }

  if(p!=NULL){
      last->next = p;
  }
  else{
      last->next = q;
  }

}
//
void display(node *p){
    while(p!=NULL){
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<endl;
}

int main(){
    int a[5]={2,4,6,7,8};
    int b[3]={1,3,9};
    create( a , 5);
    create2(b , 3);
    display(first);
    display(second);

    // merge(first , second);
    // only for sorted list
    merge(first , second);
    display(third);
    
}