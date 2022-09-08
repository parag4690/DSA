// palindrome

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
} *first=NULL;

void input(int pos , int x){
  Node *t , *last;
  if(pos==0){
      t=new Node(x);
      first=t;
  }
  else{
      t=new Node(x);
      Node *p=first;
      for(int i=0; i<pos-1; i++){
          p=p->next;
      }
      t->next=p->next;
      p->next=t;
  }
}
void display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void swapped(Node *p , Node *q){
    int temp=p->data;
    p->data=q->data;
    q->data=temp;
}

int length(Node *p){
    if(p)
     return length(p->next)+1;
    return 0;
}

void bubbleSort(){
  Node *p=first;
  Node *q=p;
  int n=length(first);
  cout<<n<<endl;
  for(int i=0; i<n; i++){
      for(int j=i; j<n; j++){
          if(p->data>=q->data){
          swapped(p ,  q);
          }
         q=q->next;
      }
      p=p->next;
      q=p;
  }
  
}

int main(){
  int n , a;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>a;
    input(i , a);
  }
  display(first);
  bubbleSort();
  display(first);
}