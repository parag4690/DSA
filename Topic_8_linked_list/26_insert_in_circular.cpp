#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *next;
}*head;
void create(vector<int> v , int n){
    node *t , *last;
    head = new node;
    head->data = v[0];
    head->next = head;
    last = head;

    for(int i=1;i<n; i++){
        t = new node;
        t->data = v[i];
        t->next = NULL;
        last->next = t;
        last = t; // last ->nextalwat point on 
    }
    last->next = head;
}

//
void display(node *p){
  do{
      cout<<p->data<<" ";
      p=p->next;
  }while(p!=head);
  cout<<endl;
}
// count
int count(node *p){
    static int i=0,  c=0;
    if(p!=head || i==0){
        i=1;
        count(p->next);
        c++;
    }
    return c;

}
// insert

void insert(int pos, int x){
    
  if(pos<0 || pos>count(head)){
      return ;
  }
  if(pos==1){
      node *p = head;
      node *t = new node ;
      t->data = x;
      if(head == NULL){
          head = t;
          head->next = head;
      }
      else{
          while(p->next!=head){
              p=p->next;
          }
          p->next = t;
          t->next=head;
          head = t;
      }
  }
  else{
      node *p = head;
      node *t = new node ;
      t->data = x;
      for(int i=0; i<pos-1; i++){
          p=p->next;
      }
      t->next=p->next;
      p->next = t;
      
  }
}



int main(){
  int n,a;
  cin>>n;
  vector<int> v;
  for(int i=0; i<n; i++){
      cin>>a;
      v.push_back(a);
  }
  create(v,n);

  display(head);
  
  insert(1,90);
  display(head);

  insert(2,100);
  display(head);
}