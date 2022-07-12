#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *next;
} *first;
void create(int *a , int n){
    node *t, *last;
    first = new node;
    first->data=a[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        t = new node;
        t->data=a[i];
        t->next = NULL;
        last->next=t;
        last = t;
    }
}
void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}

bool isLoop(node *f){
    node *p , *q;
    p=q=f;
    do{
        // p will take one steps and q will take two step
        p=p->next;
        q=q->next; // one step done

        if(q!=NULL){
            q=q->next; // second step
        }
       

    } while(p && q  && p!=q);
    if(p==q){
        return true;
    }
    else{
        return false; // mean linear
    }
    
}
int main(){
int arr[]={1,2,3,4};
create(arr , 4);
display(first);

cout<<isLoop(first)<<endl; // mean linear;

// making list loop

node *t1 , *t2;
t1 = first->next->next; // 2
t2 = first->next ->next ->next;
t2->next = t1; // loop

cout<<isLoop(first)<<endl;
}