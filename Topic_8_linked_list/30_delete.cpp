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

void del(int pos){
    if(pos==1){
        node *p = first;
        first = first->next;
        int x = p->data;
        delete p;
        if(first)
        first->prev = NULL;
    }
    else {
        node *p=first;
        node *q=first;
        for(int i=0; i<pos-2; i++){
            p=p->next;
            q=q->next;
        }
        q=q->next;
        p->next=q->next;
        if(q->next){
            q->next->prev=p; // q k next ka jo prev hoga
        }
        int x = q->data;
        delete q;
    }
}
void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    vector<int> v={1,2,3,4,5};
    create(v);
    display(first);
    del(1);
    display(first);
    del(4);
    display(first);
}
