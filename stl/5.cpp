#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next = NULL;
    }
};

Node* takeinput(){
    Node *head=NULL , *t , *last ;
    int n , a;
    cin>>n;
    while(n--){
    cin>>a;
   
    if(!head){
      t=new Node(a);
      head=t;last = t;
    }
    else{
        t=new Node(a);
        last->next=t;
        last=t;
    }
    }
    return head;
}

void display(Node *t){
    Node *p=t;
  while(p){
      cout<<p->data<<" ";
      p=p->next;
  }
  cout<<endl;
}

Node* reverse(Node *p){
    Node *t=p ,  *q=NULL , *r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    t=q;
    return t;
}

bool palindrome(Node *head2 , Node *h){
    Node *p=h;
    // Node *head2=head; 
    Node *check=reverse(head2);
    display(p);
    while(p&&check){
        if(p->data!=check->data)
         return 0;
        p=p->next;
        check=check->next;
    }
    return 1;
}

int main(){
  
Node *head=takeinput();
// Node *head2=takeinput();
display(head);
Node *head2 = head;
 cout<<palindrome(head2 , head)<<endl;
//  cout<<head->data<<endl; 
//  cout<<head->next->data<<endl;
 
 display(head);
}