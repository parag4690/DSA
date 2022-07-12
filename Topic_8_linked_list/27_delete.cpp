#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *next;
}*head;
void create(vector<int> v ){
    node *t , *last;
    head = new node;
    head->data = v[0];
    head->next = head;
    last = head;

    for(int i=1;i<v.size(); i++){
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
// delete

void del(int pos){

  if(pos<0 || pos>count(head)){
      return ;
  }
  if(pos==1){
      node *p=head;
      node *q=head;
      if(head ==NULL){
          free(head);
          head=NULL;
      }
      else{
      while(p->next!=head){
          p=p->next;
      }
      p->next=head->next;
      head=head->next;
      int x = q->data;
      delete q ;
      }
  }
  else{
      node *p = head;
      node *q = head;
      for(int i=0; i<pos-2; i++){
          p=p->next;
      }
      q=p->next;
      p->next=q->next; // q ka next
      int x = q->data;
      
      delete q;
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
  create(v);

  display(head);

//   del(1);
//   display(head);
  
  del(2);
  display(head);
  
}