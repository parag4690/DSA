#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*head;

void create(int *a , int n){
    node *t,*last; // last help always add on last 
    head = new node;
    head->data = a[0];
    head->next = head; // point on self it self;
    // last->next=head;
    last = head;
    // 
    for(int i=1; i<n; i++){
       t= new node;
       t->data = a[i];
       t->next = last->next; // hme to repeat krna hai , circular
       last->next=t; // last t pe ajayga
       last = t;
    }
}

void display(node *p){
  do{
      cout<<p->data<<" ";
      p=p->next;
  }while(p!=head);  // kyuki hme ye ek bar to chlana hai
  cout<<endl;
}

// display using recursion

void display2(node *p){
    static int flag = 0;
    if(p!=head || flag == 0) {  // flag esliye kyuki hme ke bar to chlana hai
       flag = 1;
       cout<<p->data<<" ";
       display2(p->next);
    }
    flag = 0; // if i call this funtion then flag should become 0 again;
    
}
int main(){
    int arr[]={1,2,3,4,5};
    create(arr , 5);
    display(head);

    display2(head);
    cout<<endl;
}