#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first = NULL;

void create(vector<int> v){
    node *t , *last;
    first = new node;
    first->data=v[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->next = NULL;
        last -> next = t;
        last = t;
    }
}

void sort(int x){
   node *p = first , *q=first;
   node *t = new node;
   t->data = x;
   t->next = NULL;

   if(first == NULL){
       first = t;
   }
   else{
       // 1
       while(p && p->data<x){
           q=p; // 
           p=p->next;
       }
       if(p==first){
           t->next = p;
           first = t;
       }
       else{
           t->next = q->next;
           q->next = t;

       }
   }
   
  
}

void display(node *p){
    if(p!=0){
        cout<<p->data<<" ";
        display(p->next);
    }
    return ;
}

int main(){
    vector<int> v={1,2,4 ,5};
    create(v);
    int x;
    cin>>x;
    sort(x);
    display(first);
    cout<<endl;
}