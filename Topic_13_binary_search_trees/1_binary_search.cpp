#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
  Node *lchild;
  int data;
  Node *rchild;
};
class BST{
    public:
    Node *root;
    BST(){
        root = NULL;
    }
    void insert(int key);
    void inOrder(Node *p);
    Node* search(int key);
};
void BST::insert(int key){
 
    Node* t = root;
    Node* p;
    Node* r;
 
    // root is empty
    if (root == nullptr){
        p = new Node;
        p->data = key;
        p->lchild = nullptr;
        p->rchild = nullptr;
        root = p;
        return;
    }
 
    while(t != nullptr){
        r = t;
        if (key < t->data){
            t = t->lchild;
        } else if (key > t->data){
            t = t->rchild;
        } else {
            return;
        }
    }
 
    // Now t points at NULL and r points at insert location
    p = new Node;
    p->data = key;
    p->lchild = nullptr;
    p->rchild = nullptr;
 
    if (key < r->data){
        r->lchild = p;
    } else {
        r->rchild = p;
    }
    
}

// sorted => inorder 

void BST::inOrder(Node *p){
    if(p!=NULL)
    {
        inOrder(p->lchild);
        cout<<p->data<<" ";
        inOrder(p->rchild);
    }
}

Node* BST::search(int key){
    Node *t = root;
    while(t!=NULL){
        if(key==t->data){
            return t;
        }
        else if(key>t->data){
            t=t->rchild;
        }
        else{
            t=t->lchild;
        }
    }
    return NULL;
}


int main(){
   BST b;
   Node *temp;
   b.insert(10);
   b.insert(5);
   b.insert(20);
   b.insert(8);
   b.insert(30);

  b.inOrder(b.root);
   cout<<endl;

   //

   temp = b.search(10);
   if(temp!=NULL){
       cout<<"element is found"<<endl;
   }
   else{
       cout<<"element is not found"<<endl;
   }

   return 0;
}