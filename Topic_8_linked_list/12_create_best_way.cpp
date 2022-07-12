#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first , *last;
void insert(int x){ // at the end of link 
    node *t = new node;
    last = new node;
    first=new node;
    t->data = x;
    t->next = NULL;
    if(first = NULL) {
        first=last = t;
    }
    else{
        last->next = t;
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
int main(){
    int n,value;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>value;
        insert(value);
    }
    display(last);
}