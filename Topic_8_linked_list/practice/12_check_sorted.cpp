#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first=NULL;

void create(vector<int> v){
    int n=v.size();
    node *t, *last;
    first = new node;
    first->data = v[0];
    first->next = NULL;
    last = first;
    for(int i=1 ; i<n; i++){
        t = new node;
        t->data = v[i];
        t->next = 0;
        last->next = t;
        last = t;
    }
}

void display(node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        display(p->next);
    }
    return ;
}

int checkSort(node *p){
    node *q = p->next;
    while(p->next!=NULL){
        if(p->data>q->data){
            return 0;
        }
        p=p->next;
        q=p->next;
    }
    return 1;
}

int main(){
    vector<int> v = {6,2,3,5};
    create(v);
    display(first);
    cout<<endl;
    cout<<checkSort(first)<<endl;
}