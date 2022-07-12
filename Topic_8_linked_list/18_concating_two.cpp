#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
node *first=NULL;
node *second=NULL;
//
void create(int *a , int n){
    node *t , *last;
    first = new node;
    first->data=a[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        t=new node;
        t->data = a[i];
        t->next =NULL;
        last->next = t; // first link krega t pe
        last = t;
    }
}

void create2(int *a , int n){
    node *t , *last;
    second = new node;
    second->data=a[0];
    second->next=NULL;
    last = second;

    for(int i=1; i<n; i++){
       t= new node ;
       t->data = a[i];
       t->next = NULL;
       last->next = t;
       last = t;
    }
}

void concatinate(node *p){
   
   while(p->next!=NULL){ // / three pe anne k bad ye check krega kya four null h ya nhi 
       p=p->next;
   }
   p->next = second;
}

void display(node *p){
    while(p!=NULL){
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<endl;
}

int main(){
    int a[5]={1,2,3,4,5};
    int b[3]={6,7,8};
    create( a , 5);
    create2(b , 3);
    display(first);
    display(second);

    concatinate(first);
    // mene first k andr kiya hai
    cout<<"new list = ";
    display(first);
}