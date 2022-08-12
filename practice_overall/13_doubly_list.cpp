#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
}*first , *back;

void create(vector<int> v){
    Node *t , *last , *p ;
    first = new Node;
    first->data = v[0];
    first->next = NULL;
    first->prev=NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t=new Node;
        t->data= v[i];
        t->next=NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }
  
    
}

void display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void reverse(Node *p){
    while(p->next!=NULL){  // dyan 
        p=p->next;
    }
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->prev;
    }
    
    cout<<endl;
}

int main(){
    vector<int> v ={1,2,3,4,5};
    create(v);
    display(first);
    reverse(first);
}