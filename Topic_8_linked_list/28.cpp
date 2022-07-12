#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    node *prev;
    int data;
    node *next;
}*first=NULL;
void create(vector<int> v){
    node *t , *last;
    first = new node;
    first->prev=NULL;
    first->data=v[0];
    first->next=NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->prev=last;
        t->next=NULL;
        last->next=t;
        last=t;
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
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    create(v);
    display(first);
}