#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
node *first;
void create(int *a , int n){
    node *t , *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i=1; i<n; i++){
       t=new node ;
       t->data = a[i];
       t->next = NULL;
       last->next = t;
       last = t; // ab last t pe ajayga
    }
}

void reverse(node *p){
  node *q =NULL;  // i can write like this node *p=first again
  node *r = NULL;
  while(p!=NULL){
      r=q;
      q=p;
      p=p->next; // ye phle krna h kyuki 
      q->next=r;
  }
  first = q; // taki unhe lge ki list yha se start hai
}

void reverse2(node *q , node *p){
  if(p!=NULL){
       reverse2( p , p->next);  // hme return nhi krna kyui hme ek value thodi na krna ni hai  
      p->next = q; // ye link ko modify krta hai 
  }
  else{
      first = q;
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
    int arr[5]={1,2,3,4,5};
    create(arr , 5);
    display(first);

   
    // reverse(first); ye normal trike se tha 

    // using recursively 
   
    reverse2(NULL,first);

    cout<<"reverse of linked list is = ";
    display(first);
}
