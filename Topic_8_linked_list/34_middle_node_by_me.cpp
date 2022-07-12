#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;
void create(vector<int> v){
    node *t , *last;
    first = new node ;
    first->data=v[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t= new node;
        t->data = v[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int count(node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
void middle(node *p){
    int len = count(first);

        for(int i=0; i<(len)/2; i++){
            p=p->next;
        }
        cout<<"middle element " <<p->data<<endl;
        
}
void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
  vector<int> v={1,2,3,4,5};
  create(v);
  display(first);

  middle(first);
}
// *********************************                imp        ***************8888



// we have done this in two scans , we want to do this in single scan above que;