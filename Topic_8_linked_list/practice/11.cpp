#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
}*first;

void create(vector<int> v){
    node *t , *last;
    first = new node;
    first->data=v[0];
    first->next= NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t=new node;
        t->data = v[i];
        t->next=NULL;
        last->next = t;
        last = t;
    }
}

void display(node *p){
  while(p!=NULL){
      p=p->next;
  }
  cout<<p->data<<endl;
}

void display2(node *p){
    while(p->next !=NULL){
        p=p->next;
    }
    cout<<p->data<<endl;
}

int main(){
    vector<int> v={1,2,3,4};
    create(v);
    display2(first);
    display(first); // error becaouse it is pointing on 5
}