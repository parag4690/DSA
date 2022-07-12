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


void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

//  

void middle(node *p){
    node *q = first;
    // node *p =
    while(q!=NULL){ 
        q=q->next;
        // i have to check if q become null or not
        if(q){
            q=q->next;
        }
        if(q){  ///////////////    ********************************   check **************
        p=p->next;
        }
    }
    cout<<"middle element"<<p->data<<endl;
}
int main(){
  vector<int> v={1,2,3,4,5,6,7,8};
  vector<int> v2 = {1,2,3,4,5};  // we have to make second linked list by making other
  
  create(v);
  
  display(first);

  // we will take two pointer , one will move by one move , and q will move by two 
  // if (q==null) then p will auto matically at middle;

  middle(first);
}