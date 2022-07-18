#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first = NULL;

void create(vector<int> v){
    node *t , *last;
    first = new node;
    first->data=v[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->next = NULL;
        last -> next = t;
        last = t;
    }
}

void insert(int x, int pos){
    node *p=first;
    node *t = new node;
    t->data = x;
    if(pos==0){
        t->next = first;
        first = t;
    }
    else{
      for(int i=0; i<pos-1; i++){
          p=p->next;
      }
      t->next = p->next;
      p->next = t;
    }
}

void del(int pos){
    node *p=first , *q=first;
    if(pos==0){
        first=first->next;
        delete p;
    }
    else{
        for(int i=0; i<pos-2; i++){
            p=p->next;
        }
        q=p->next;
        p->next = q->next;
        delete  q;
    }
}

void display(node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        display(p->next);
    }
    return;
}

int main(){
    vector<int> v={1,2,3,4};
    create(v);
    cout<<"How many u wanny insert = ";
    int h,x,pos;
    cin>>h;
    while(h--){
        cin>>x>>pos;
        insert(x ,  pos );
        display(first);
        cout<<endl;
    }

    cout<<"how may u wanna delete = ";
    int d,pos2;
    cin>>d;
    while(d--){
        cin>>pos2;
        del(pos2);
        display(first);
        cout<<endl;
    }
}