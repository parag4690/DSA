#include <bits/stdc++.h>
using namespace std;
// it contains three data's in node
class node {
    public:
    node *prev; 
    int data;
    node *next;
}*first=NULL;
void create(vector<int> v , int n){
    node *t,*last;
    first=new node;
    first->prev=NULL;
    first->data=v[0];
    first->next = NULL;
    last = first;
    for(int i=1; i<n; i++){
        t=new node;
        t->prev=last;
        t->data = v[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }
    
}

void display(node *p)
{
    while(p){
        cout<<p->data;
        p=p->next;
    }
    cout<<endl;
}

int length(node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}

int main(){
// a node is having a pointer on next node as well as privious node; it is bidirectionly
// eg our contact list in mobile where we scroll up and down  
// benifit is that we can travese the list in evry direction we want;

int n ,a ;
cin>>n;
vector<int> v;
for(int i=0; i<n; i++){
    cin>>a;
    v.push_back(a);
}
create(v,n);
display(first);
cout<<length(first)<<endl;

}