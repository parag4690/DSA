#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
node *first;
void create(node *p , int index , int key){
  // create a new node ;
  node *t;
  t=new node;
  t->data=key;
  t->next=NULL;
  //

  if(index<0){
      cout<<"invalid index"<<endl;
  }
  else if(index==0) {

      t->next = first;
      first=t;
  }
  else{

      for(int i=0; i<index-1; i++){
          p=p->next;
      }
      t->next=p->next;
      p->next = t;

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

// 

void duplicat(node *p ){
  node *t = first;
  node *q= first->next;

  while(q!=NULL){
        if(t->data!=q->data){
          t=q;
          q=q->next;
          
      }
     else if(t->data==q->data){
        
        
        t->next=q->next; // it is link
        delete q;
        q=t->next; // point on q's next 
        // cout<<"d"<<q->data<<endl;
      }
     
  }

}
int main(){
  cout<<"length of linked list=";
  int n, key;
  cin>>n;
  for(int i=0 ; i<n; i++){
     cin>>key;
    create(first , i , key);
  }
  display(first);
  duplicat(first);
  display(first);
}