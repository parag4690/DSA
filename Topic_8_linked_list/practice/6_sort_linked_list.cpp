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
void insert(node *p , int x){
   // create a node ;
   node *t = new node;
   node *q = NULL;
   t->data=x;
   if(first==NULL){
       // mene first ko second pe bj diya
       first = t;
   }
   else {
       while(p && p->data<x){
          q=p;  // do esliye taki muje mere main position se phle mil jaye
          p=p->next;
       }
       if(p==first){
           t->next = first;
           first = t;
       }
       else{
           t->next = q->next;
           q->next = t;
       }
   }
  
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
    insert(first , in);
    display(first);
}