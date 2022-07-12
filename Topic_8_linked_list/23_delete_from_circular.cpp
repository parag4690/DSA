#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*head;
void create(int *a , int n){
 node *t , *last;
 head=new node;
 head->data = a[0];
 head->next = head;
 last = head;

 for(int i=1; i<n; i++){
     t=new node;
     t->data = a[i];
     t->next = last->next;
     last->next = t;
     last = t;
 } 
}
//

//
int main(){
    int a[]={1,2,3,4,5};
    create(a , 5);
}