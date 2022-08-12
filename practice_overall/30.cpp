#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first = NULL;
void insert(int index , int ele){
    // Node *first = new Node;
    Node *t = new Node , *last;
    if(index == 0){
        t->data = ele;
        t->next = NULL;
        first = t;
    }
    else {
        Node *p = first;
        for(int i=0; i<index-1; i++){
          p=p->next;
        }
        t->data=ele;
        p->next = t;
        t->next = NULL;
    }
}
void display(Node *p){
    while(p->next!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
//   insert(0 , 1);
//   insert(1,3);
//   int a[5]={1,2,3,4,5};
//   for(int i=0; i<5; i++){
//       insert(i , a[i]);
//   }
  int n,a;
  cin>>n;
  for(int i=0; i<n; i++){
      cin>>a;
      insert(i , a);
  }
  display(first);
}