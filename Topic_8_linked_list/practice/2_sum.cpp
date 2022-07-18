#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first = NULL;


void create(vector<int> v){
    first = new node;
    node *t , *last;
    first->data = v[0];
    first->next=NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->next= NULL;
        last ->next = t;
        last = t;
    }
}

int sum(node *p){
    if(p!=NULL){
        return p->data+sum(p->next);
    }
    return 0;
}

// 

int main(){
    vector<int> v = {1,2,3,4,5};
    create(v);
    cout<<"sum of vector is = "<<sum(first)<<endl;
}