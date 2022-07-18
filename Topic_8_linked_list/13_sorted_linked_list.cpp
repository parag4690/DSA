#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;
void create(int *a , int n){
    node *t , *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i=1; i<n; i++){
        t=new node ;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


//
void sort(node *p,int n , int x){
    node *t , *q=NULL; // make pointer
    t= new node ;
    t->data=x;
    t->next=NULL;

    //
    if(first==NULL){
        first=t;
    }
    else{
        // 1 3 and x is 2 
        while(p && p->data<x){
            q=p; // stop at 1;
            p=p->next; // stop at 3;
        }
        if(p==first){ // agr vo phla vala hua to 
            t->next = first;
            first=t;
        }
        else{
            t->next = q->next; // 1 ->2-> 3;
            q->next = t;
        }
    }
}
//
void display(node *d){
    while(d!=NULL){
        cout<<d->data<<" ";
        d=d->next;
    }
    cout<<endl;
}
int main(){
    int a[]={1,3,4,6,5};
    create(a , 5);
    int x;
    cin>>x;
    sort(first, 5 , x);
    display(first);
}