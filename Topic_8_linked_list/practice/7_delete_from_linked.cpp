#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;
void create(node *p , int i , int x){
    // create a node;
    node *t = new node;
    t->data = x;

   if(i==0){
     t->next = first;
     first = t;
   }
   else {
       for(int j=0; j<i-1; j++){
           p=p->next;
       }
       
       t->next=p->next;
       p->next = t;
   }
}

//
void del(int x){
  
  if(x==1){
      node *p = first;
      // hme to first ko move krana hoga
      first=first->next;
      
      delete p;
      
  }
  else{
    
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
//

int count(node *p){
    static int i=0;
    if(p!=NULL){
        
        count(p->next);
        i++;
    }
    return i;
}

//
void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        create(first , i , x);
    }
    display(first);
    int in;
    cin>>in;
    del(in);
    display(first);
    // cout<<count(first)<<endl;
}