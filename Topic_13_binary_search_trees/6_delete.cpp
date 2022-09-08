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
    Node *Delete(Node *p , int key);
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

int height(Node *p){
    int x , y;
    if(p){
        x=height(p->left);
        y=height(p->right);
        if(x>y)
         return x+1;
        else
         return y+1;
    }
    return 0;
}

Node *Inpre(Node *p){
    while(p&&p->right)
      p=p->right;
    return p;
}

Node *InSuc(Node *p){
    while(p&&p->left)
     p=p->left;
    return p;
}

Node* BST::Delete(Node *p , int key){
    Node *q;
    if(p==NULL)
     return NULL;
    if(p->left ==NULL && p->right == NULL){
        if(p==root)
          root=NULL;
        free(p);
        return NULL;
    }
    if(key<p->data)
      p->left = Delete(p->left , key);
    else if(key>p->data)
      p->right = Delete(p->right , key);
    else{
        if(height(p->left)>height(p->right)){
            q=Inpre(p->left);
            p->data=q->data;
            p->left=Delete(p->left , q->data);
        }
        else{
            q=InSuc(p->right);
            p->data = q->data;
            p->right = Delete(p->right , q->data);
        }
    }
    return p;
}

int main(){
  BST b;
  int n , a;
  cin>>n;
  while(n--){
      cin>>a;
      b.insert(b.root , a);
  }
  b.inOrder(b.root);
  b.Delete(b.root , 4);
  b.inOrder(b.root);
  b.Delete(b.root , 1);
  b.inOrder(b.root);
}