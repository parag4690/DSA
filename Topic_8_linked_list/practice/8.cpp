#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;
void create(vector<int> v){
    node *t , *last;
    first=new node;
    first->data = v[0];
    first->next=NULL;
    last = first;
    for(int i=1 ; i<v.size(); i++){
        t=new node;
        t->data=v[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}
int count(node *p){
    static int c=0;
    if(p!=NULL){
        c++;
        count(p->next);
    }
    return c;
}
void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void insrt(int pos , int x){
    if(pos<0 || pos>count(first)){
        return ;
    }
    if(pos==1){
        node *t;
        t=new node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else {
        node *t;
        t=new node;
        t->data = x;
        node *p=first;
        for(int i=0; i<pos-2; i++){
            p=p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

void del(int pos){
    if(pos==1){
        node *q=first;
        first=first->next;
        delete q;
    }
    else{
        node *p = first;
        node *q=  first;
        for(int i=0; i<pos-2; i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        delete q;
    }
}
void reverse(node *p){
    node *q=NULL;
    node *r = NULL;
    while(p!=NULL){
       r=q;
       q=p;
       p=p->next;
       q->next=r;
    }
    first = q;

    
}
int main(){
    vector<int> v = {1,2,3,4,5};
    create(v);
    display(first);
    insrt(1 , 6);
    display(first);
    insrt(2,7);
    display(first);
    insrt(8,90);
    display(first);
    del(1);
    display(first);
    del(2);
    display(first);
    reverse(first);
    display(first);
}
