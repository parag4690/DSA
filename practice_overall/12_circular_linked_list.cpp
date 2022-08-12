#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*head;

int count(Node *p){
    int i=0;
    do{
        i++;
        p=p->next;
    }while(p!=head);
    return i;
}

void create(vector<int> v){
    Node *t , *last; 
    head = new Node;
    head->data = v[0];
    head->next=head;
    last = head;

    for(int i=1; i<v.size(); i++){
       Node *t = new Node;
       t->data = v[i];
       t->next = last->next; // or NULL
       last->next = t;
       last = t;
    }
    last->next = head;
}

void display(Node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}

void insert(Node *p , int i , int x){
    Node *t=new Node , *q=head;
    t->data = x;
    if(p==NULL){
        t->next = t;
    }
    
    if(i<0 || i>count(head)){
        cout<<"index is not present here"<<endl;
        return;
    }

    if(i==0){
        while(q->next != head){
            q=q->next;
        }
        q->next = t; // ye sequence me hone jruri hai
        t->next = head;
        head = t;
    }
    else if(i==count(head)){
       while(q->next!=head){
           q=q->next;
       }
       q->next = t; // sequence
       t->next = head;
    }
    else{
        for(int j=0; j<i-1; j++){
            q=q->next;
        }
        t->next = q->next;
        q->next = t;
        
    }


}

void del(int pos){

    Node *p = head , *q;
    if(p==NULL ){
        return ;
    }
    if(pos==0){
        if(p->next == head){
            delete p;
        }
        else{
            while(p->next != head){
                p=p->next;
            }
            q = head;
            head = head->next;
            p->next = head;
            delete q;
        }
    }
  
    else{
        for(int i=0; i<pos-2; i++){
            p=p->next;
        }
        q=p->next;
        p->next = q->next;
        delete q;
    }

}

int main(){
    vector<int> v = {1,2,3,4,5};
    create(v);
    display(head);
    cout<<count(head)<<endl;
    insert(head , 0 , 9);
    // cout<<head->data<<endl;
    display(head);
    insert(head , 6 , 10);
    display(head);
    insert(head , 3 , 99);
    display(head);
    del(0);
    display(head);
    del(7);
    display(head);
    del(3);
    display(head);
}

