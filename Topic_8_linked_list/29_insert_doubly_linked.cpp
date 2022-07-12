#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    node *prev;
    int data;
    node *next;
}*first;
void create(vector<int> v){
    node *t , *last;
    first=new node;
    first->prev = NULL;
    first->data=v[0];
    first->next = NULL;
    last = first;
    for(int i=1; i<v.size(); i++){
        t=new node;
        t->data=v[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last=t;
    }
}
int display(node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        
        display(p->next);
    }
    return 0;
}
// count
int count(node *p){
    static int i=0;
    if(p!=NULL){
        i++;
        count(p->next);
    }
    return i;
}
// insert
void insert(int pos , int x){
    if(pos<0 || pos>count(first)){
        return ;
    }
    if(pos==1){
        // modify three links
        node *p=first;
        node *t=new node;
        t->data=x;
        // first ko t pe le aou
        t->next=first;
        t->prev=NULL;
        first->prev=t;
        first=t;
    }
    else {
        // have to modify four links
        node *p=first;
        node *t=new node;
        t->data = x;

        for(int i=0; i<pos-2; i++ ){
            p=p->next;
        }

        t->next=p->next;
        t->prev=p;
        if(p->next){ // agr m last me hu
           p->next->prev = t; // p->next k prevous ko bhi to krna prega
        }
        p->next=t; // rev
    }
}
int main(){
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
       cin>>a;
       v.push_back(a);
    }
    create(v);
    display(first);
    cout<<endl;

    insert(1,5);
    display(first);
    cout<<endl;

    insert(6,40);
    display(first);
    cout<<endl;
    
}