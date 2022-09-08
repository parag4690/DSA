#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
}*first=NULL;

void insert(int pos , int x){
    Node *t=new Node(x) , *last , *p=first;
    if(pos==0){
        t->next=first;
        first=t;
    }
    else {
        
        for(int i=0; i<pos-1; i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

void display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

// display even and odd;
void display2(Node *p){
    while(p){
        if(p->data%2==0)
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int length(Node *p){
  if(p!=NULL)
   return length(p->next)+1;
  return 0;
}

// reverse a linked list;

void reverse(Node *p){
    Node *q=NULL , *r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

int findaNode(Node *p , int n){
  int i=0;
  while(p){
      if(p->data==n)
       return i;
      i++;
      p=p->next;
  }
  return -1;
}

void del(int pos){
    if(length(first)<pos){
        return ;
    }
    else{
        Node *p=first , *q=first;
        for(int i=0; i<pos-1; i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        free(q);
        q=p;
    }
}

void insertSorted(int x){
    Node *p=first , *t=new Node(x);
    if(p->data>=x){
        t->next=first;
        first=t;
        return ;
    }
    else{ int y=1;
        Node *q;
        while(p->next!=NULL){
            if(p->next->data>=x){
                q=p;y=0;  break; 
            }
            p=p->next;
        }
    
        if(y==1){q=p; }
        t->next=q->next;
        q->next=t;
    }
}

int main(){
    insert(0,2);
    insert(1,2);
    insert(2,3);
    insert(3,5);
    display(first);
    // display even odd;
    display2(first);
    cout<<"length of list = "<<length(first)<<endl;
    cout<<"reverse"<<endl;
    reverse(first);
    display(first);
    reverse(first);
    display(first);
    int x=3 , y=4;
    if(findaNode(first , x)!=-1){
        cout<<x<<" found at "<<findaNode(first , x)<<endl;
    }
    if(findaNode(first , y)==-1){
        cout<<x<<" not found "<<endl;
    }
    cout<<"yes"<<endl;
    del(3);
    display(first);
    insert(3 , 5);
    insert(4 , 6);
    display(first);
    insertSorted(4);
    display(first);
    insertSorted(7);
    display(first);
    insertSorted(6);
    display(first);
    insertSorted(1);
    display(first);
}
