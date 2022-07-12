#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
}*first = NULL , *second = NULL,*third=NULL;

void create1(vector<int> v){
    node *t  , *last;
    first=new node;
    first->data = v[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t=new node;
        t->data = v[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(vector<int> v){
    node *t  , *last;
    second=new node;
    second->data = v[0];
    second->next = NULL;
    last = second;

    for(int i=1; i<v.size(); i++){
        t=new node;
        t->data = v[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void create3(node *p , node *q){
    node *t , *last;
    
    // for 1st element 
    if(p->data<q->data){
      third = p;
      last = p;
      p=p->next;
      third->next = NULL;
      
    }
    else{
       third = q;
       last = q;
       q=q->next;
       third->next = NULL;
    }
    while(p!=NULL && q!=NULL){
         if(p->data<q->data){
             last->next=p; // phle ye pichle valye se link krega
             last = p;
             p=p->next;
             last->next = NULL;
         }
         else{
             last->next = q;
             last = q;
             q=q->next;
             last->next=NULL;
         }
    }
    if(p){
        last->next = p;
    }
    else{
        last->next = q;
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
    vector<int> v = {1,2,3,4};
    vector<int> v2 = {3,4,5};
    create1(v);
    display(first);
    create2(v2);
    display(second);
    create3(first , second);
    display(third);
}
