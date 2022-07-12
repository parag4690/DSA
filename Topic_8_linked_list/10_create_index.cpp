#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;

void insert(node *p , int x , int index){
   // create new node
  node *t;
    t=new node;
    t->data=x;
    
    // 

   if(index < 0 || index > x){
       cout<<"Invalid index"<<endl;
   }
   else if(index == 0){
      t->next = first;
      first = t;
   }
   else{
       for(int i=0; i<index-1; i++){
           p=p->next;

       }
       t->next=p->next;
       p->next=t;
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
    int n,value;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>value;
      insert(first ,value , i);

    }
    display(first);
}