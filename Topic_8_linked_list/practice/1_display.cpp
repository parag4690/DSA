#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first = NULL;

void create(vector<int> v){
  node *t , *last;
  first= new node;
  first->data = v[0];
  first->next = NULL;
  last = first;

  for(int i=1; i<v.size(); i++){
      t=new node;
      t->data=v[i];
      t->next = NULL;
      last->next = t;
      last = t;
  }
}

int count(node *p){
    static int i=0;
    if(p!=0){
        i++;
        count(p->next);
    }
    return i;
}



void display(node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        display(p->next);
    }
    return;
}

int main(){
  vector<int> v = {1,2,3,4,5};
  create(v);
  display(first);
  cout<<endl;
  cout<<"no. of elements in linked list ="<<count(first)<<endl;
  display(first);
}