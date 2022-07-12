#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;
void create(int *a , int n){
    node *t , *last ;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    //
    for(int i=1; i<n; i++){
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next=t;
        last = t;
    }
}

void insert(node *p ,  int index , int x){
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
    int A[]={3,5,7};
    create(A , 3);
    display(first);
    int x,index;
    cin>>x>>index;
    insert(first , index , x);
    display(first);

}