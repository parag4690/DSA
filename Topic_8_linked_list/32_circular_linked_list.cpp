#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    node *prev;
    int data;
    node *next;
}*head;
void create(vector<int> v){
    node *t , *last;
    head=new node;
    head->data=v[0];
    head->prev=head;
    head->next = head;
    last = head;

    for(int i=1; i<v.size(); i++){
        t=new node;
        t->data = v[i];
        t->next=last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

// insert - same as double linked list // modify four links // simply says head previous
 
 
//
void display(node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}
int main(){
    vector<int> v={1,2,3,4,5};
    create(v);
    display(head);
}