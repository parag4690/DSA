#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;
void create(int *a , int n){
    node *t , *last;
    first=new node;
    first->data=a[0];
    first->next = NULL;
    last = first;
    //
    for(int i=1; i<n; i++){
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }
}

void del(int x){
    if(x==1){
    node *p = first;
    first=first->next;
    int s = p->data;
    delete p; // for delete the node 
    }
    else {
        node *l = first;
        node *q = first;
        for(int i=0; i<x-1; i++){
             q=l;
             l=l->next;
        }
        q->next = l->next;
        int s = l->data;
        delete l;
    }
}

int count(node *p){
    static int c=0;
    if(p==NULL){
        // c++;
        return c;
    }
    else{  
         c++;
         return count(p->next);
    }
}

int sum(node *p){
    if(p!=NULL){
        return sum(p->next)+p->data;
    }
    return 0;
}

void display(node *p ){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    int a[]={6,2,3,4};
    create(a , 4);
    del(1); // endex
    display(first);
 cout<<count(first)<<endl;
 cout<<sum(first)<<endl;
}