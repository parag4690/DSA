#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
}*first=NULL;
void swap(Node *&p , Node *&q){
    Node *temp=p;
    p=q;
    q=temp;
}
int length(Node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    } 
    return c;
}
void swapNodes(Node *p ){
    Node *a=NULL , *b=NULL;
    int len = length(p);
    if(len%2==0){
    while(p){
        a=p;
        b=p->next;
        swap(*a , *b);
        swap(a->next , b->next);
        p=p->next->next;
    }
    }
    else{
        while(p->next!=NULL){
        a=p;
        b=p->next;
        swap(*a , *b);
        swap(a->next , b->next);
        p=p->next->next;  
    }
    }
   
}
void insert(int i , int x){
   Node *t ;
   if(first==NULL && i==0){
      first=new Node(x);
   }
   else{
       Node *p = first;
       for(int j=0; j<i-1; j++)
         p=p->next;
       t=new Node(x);
       t->next = p->next;
       p->next = t;
   }
}
void display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
  int n , a;
  cout<<"enter values = ";
  cin>>n;
  for(int i=0; i<n; i++){
      cin>>a;
      insert(i , a);
  }
  display(first);
//   cout<<"enter swapes values"<<endl;
//   int x , y;
//   cin>>x>>y;
  swapNodes(first);
  display(first);

}