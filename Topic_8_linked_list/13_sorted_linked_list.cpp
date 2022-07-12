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
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){ // agr vo phla vala hua to 
            t->next = first;
            first=t;
        }
        else{
            t->next = q->next;
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
    int a[]={1,3,4,5,6};
    create(a , 5);
    int x;
    cin>>x;
    sort(first, 5 , x);
    display(first);
}