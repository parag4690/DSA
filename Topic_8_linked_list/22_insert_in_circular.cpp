#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*head;
void create(int a[] , int n){
    node *t , *last;
    head = new node;
    head->data = a[0];
    head->next = head;
    last = head;

    for(int i=1; i<n; i++){
        t=new node;
        t->data=a[i];
        t->next=last->next; // 
        last->next = t;
        last=t;
    }
}
void display2(node *p){
    static int flag = 0;
    if(p!=head || flag == 0) {  // flag esliye kyuki hme ke bar to chlana hai
       flag = 1;
       cout<<p->data<<" ";
       display2(p->next);
    }
    flag = 0; // if i call this funtion then flag should become 0 again;
    
}

// count 

int count(node *p){
    int x=0; 
    do{
        x++;
        p=p->next;
    }while(p!=head);
    return x;
}

// insertion;

void insert(int pos , int v){
    // create node 
    node *t=new node;
    node *p = head;
    t->data = v;
    t->next = p;

    if(pos<0 || pos>count(head)){
        return;
    }
    if(pos==1){
     
      if(head == NULL){ // if there is no head
         head = t;
         head->next = head;
      }
      else{
         while(p->next!=head){
          p=p->next;
         }
         p->next = t;
         t->next=head;
         head=t;
      }
    }

    else{
        for(int i=0; i<pos-1; i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
int main(){
  int arr[]={1,2,3,4,5};
  create(arr , 5);
  display2(head);
  cout<<endl;
  insert(1 , 3);
  display2(head);
  cout<<endl;
  insert(4,6);
  display2(head);
  cout<<endl;
  insert(12,9); // dyan
  display2(head);
  cout<<endl;
  insert(6, 90);
  display2(head);
  cout<<endl;

  
}