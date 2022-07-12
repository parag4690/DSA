#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    node *prev;
    int data;
    node *next;
}*first;
void create(vector<int> v){
    node *t , *last;
    first = new node;
    first->data = v[0];
    first->next=NULL;
    first->prev=NULL;
   last = first;
    for(int i=1; i<v.size(); i++){
        t=new node;
        t->data=v[i];
        t->next = NULL;
        t->prev = last;
        last->next =t;
        last = t;
    }
}


void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

// ******************************       reverse by me     not optimal         ***************
void reverse(node *p){
    while(p->next!=NULL){  // dyan 
        p=p->next;
    }
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->prev;
    }
    
    cout<<endl;
}

// *****************************      reverse by sir            ****************

// swap the pointers

void reverse2(node *p){
    node *temp;
    while(p!=NULL){
        temp = p->next;
        p->next=p->prev; // next become prev and prev became next
        p->prev= temp ;  // ab p agge move krega ab prev next bn gya
       if( p->prev==NULL && p!=NULL){  // last null  important
           first = p;
       }
       p=p->prev;
    }
    
}

int main(){
    vector<int> v={1,2,3,4,5};
    create(v);
    display(first);

    reverse2(first);
 
    display(first);
    
}
