#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    Node *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
class BST{
    public:
    Node *root;
    BST(){
        root=NULL;
    }
    void insert(Node *p , int key);
    void inOrder(Node *p);
    void preOrder(Node *p);
    void postOrder(Node *p);
};
void BST::insert(Node *p , int key){
    Node *t , *r;
    if(root==NULL){
      root=new Node(key);
      return;
    }
    p=root;
    while(p){
        r=p;
        if(p->data==key)
         return;
        else if(p->data<key)
          p=p->right;
        else 
          p=p->left;
    }
    t=new Node(key);
    if(key>r->data)
     r->right=t;
    else
     r->left=t;
}

void BST::inOrder(Node *p){
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
        if(p){
            s.push(p);
            p=p->left;
        }
        else{
            p=s.top(); s.pop();
            cout<<p->data<<" ";
            p=p->right;
        }
    }
    cout<<endl;
}

void BST::preOrder(Node *p){
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
        if(p){
            cout<<p->data<<" ";
            s.push(p);
            p=p->left;
        }
        else{
            p=s.top(); s.pop();
            p=p->right;
        }
    }
    cout<<endl;
}

void BST::postOrder(Node *p){
    stack<long int> s;
    long int temp;
    while(p!=NULL || !s.empty()){
        if(p!=NULL){
            s.push((long int)p);
            p=p->left;
        }
        else{
            temp=s.top(); s.pop();
            if(temp>0){
                s.push(-temp);
                p=((Node*)(temp))->right;
            }
            else{
                cout<<((Node*)(-1*temp))->data<<" ";
                p=NULL;
            }
        }
    }
    cout<<endl;
}

int main(){
  BST b;
  int n , a;
  cin>>n;
  while(n--){
      cin>>a;
      b.insert(b.root , a);
  }
  cout<<"PreOrder = ";
  b.preOrder(b.root);
  cout<<"InOrder = ";
  b.inOrder(b.root);
  cout<<"PostOrder = ";
  b.postOrder(b.root);
}