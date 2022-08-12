#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;

void create(vector<int> v){
    node *t , *last;
    first = new node;
    first->data = v[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
       t=new node;
       t->data = v[i];
       t->next = 0;
       last->next = t;
       last = t;
    }
}

void display(node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void insert(node *p  , int index ,  int x){
     node *t = new node;
     t->data = x;
    if(index==0){
        t->next=first;
        first = t;
    }
    else{
        for(int i=0; i<index-1; i++){
            p=p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

void del(node *p , int index){
    node *q=first , *t;
    if(index == 0){
        first=first->next;
        q->next = NULL;
        delete q;
    }
    else{
        for(int i=0; i<index-2; i++){
            q=q->next;
        }
        t=q->next;
        q->next = t->next;
        delete t;
        
    }
}

int main(){
    vector<int> v = {1,3,5,6 ,7};
    create(v);

    display(first);

    insert(first , 5 , 8);
    display(first);

    insert(first , 0 , 0);
    display(first);

    insert(first , 2 , 2);
    display(first);

    insert(first , 4 , 4);
    display(first);

    del(first , 0);
    display(first);

    del(first , 1);
    display(first);


}