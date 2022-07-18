#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first = NULL , *second = NULL , *third = NULL;




void create(vector<int> v){
  node *t , *last;
  first = new node;
  first->data = v[0];
  first ->next = NULL;
  last = first;

  for(int i=1; i<v.size(); i++){
      t = new node;
      t->data = v[i];
      t->next = NULL;
      last->next = t;
      last = t;
  }
}

void create2(vector<int> v){
  node *t , *last;
  second = new node;
  second->data = v[0];
  second->next = NULL;
  last = second;

  for(int i=1; i<v.size(); i++){
      t = new node;
      t->data = v[i];
      t->next = NULL;
      last->next = t;
      last = t;
  }
}

void create3(){
    node *t , *last;
    node *p=first;
    third = new node;

    third = p;

    while(p->next != NULL){
        p=p->next;
    }
    p->next = second;
    
}

void display(node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        display(p->next);
    }
    return;
}


int main(){
  vector<int> v={1,2,3,4};
  vector<int> v2 = {5,6,7};

  create(v);
  create2(v2);
  create3();
  
  display(first);
  cout<<endl;
  display(second);
  cout<<endl;
  display(third);
  cout<<endl;

}