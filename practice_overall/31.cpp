#include <iostream>
#include <stack>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void reverse(Node *head){
    Node *p = head , *q = NULL , *r = NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next = r;
        
    }
    head = q;
// cout<<head->data<<endl;

    
    
    Node *t= head;
    while(t->data==9 && t->next!=NULL){
    //    cout<<"yes"<<endl;
       t->data = 0;
       t=t->next;
    }
   
    
    t->data += 1;
    //  cout<<t->data<<" t " <<endl;
     
    Node *s = head , *w = NULL , *h=NULL;
   
    while(s){
        h=w;
        w=s;
        s=s->next;
        w->next = h;
    }
    head = w;
    
    Node *a = head;
    
   
}

Node* NextLargeNumber(Node *head) {
  Node *p = head , *q = head;
  if(head->next ==NULL){
      head->data+=1;
      return head;
  }
  while(p->next!=NULL){
      p=p->next;
  }
  if(p->data !=9){
      p->data+=1;
  }
  else{
      reverse(head);
  }
  return head;
}

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();
    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}



