#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
}*first=NULL , *second=NULL,*intersection;
void create1(vector<int> v){
    node *t , *last;
    first=new node;
    first->data = v[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t=new node;
        t->data = v[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    node *p=first;
    for(int i=0; i<2; i++){ // 3
        p=p->next;
    }
    // cout<<p->data;
    intersection = p;
}
void create2(vector<int> v){
    node *t , *last;
    second=new node;
    second->data = v[0];
    second->next = intersection;
    last = second;

    for(int i=1; i<v.size(); i++){
        t=new node;
        t->data = v[i];
        t->next = intersection;
        last->next = t;
        last = t;
    }
}
// find intersection point using stack store address 

void Intersection(node *p , node *q){
    // populate first stack
    stack<node*> stk1;
    while(p!=NULL){
        stk1.push(p); // storing the address in stack
        p=p->next;
    }
    // second 
    stack<node*> stk2;
    while(q!=NULL){
        stk2.push(q);
        q=q->next;
    }

    node* r;
    while(stk1.top() == stk2.top()){
        r = stk1.top(); // traversing from back , and store so that when  i get out 
        stk1.pop();
        stk2.pop();  
    }

    cout<<"intersection Node: "<<r->data<<endl;
}




void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    vector<int> v={1,2,3,4};
    create1(v);
    display(first);
    vector<int> v2={4,5,6}; // inter section
    create2(v2);
    display(second);

    Intersection(first , second);
}