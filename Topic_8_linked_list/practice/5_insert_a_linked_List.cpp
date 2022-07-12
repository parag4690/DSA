#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
node *first;

void create(vector<int> v , int n){
    node *t , *last;
    first=new node;
    first->data=v[0];
    first->next = NULL;
    last = first;
    for(int i=1 ; i<n; i++){
        t = new node;
        t->data = v[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void insert(node *p , int index , int x){
    // create a node ;
   node *t ;
   t = new node;
   t->data = x;
   
   if(index<0 ){
       cout<<"INVALID INDEX"<<endl;
   }
   else if(index == 0){
      t->next = first;
      first = t; // ab first t bn gya hai
   }
   else {
       node *l = first;
       node *q = first->next;
       for(int i=0; i<index-1; i++){
           l=q;
           q=q->next;
       }
       l->next = t;
       t->next = q;
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
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    create(v, n);
    display(first);
    int i,x;
    cin>>i>>x;
    insert(first , i , x );
    display(first);
    
}