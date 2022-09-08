#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};
class preOrder{
    public:
    Node *root;
    preOrder(){
      root=NULL;
    }
    void insert(Node *p , int *arr , int n);
    void inOrder(Node *p);
};
void preOrder::insert(Node *p , int *pre , int n){
    int i = 0;
    root = new Node;
    root->data = pre[i++];
    root->lchild = nullptr;
    root->rchild = nullptr;
 
    // Iterative steps
    Node* t;
    p = root;
    stack<Node*> stk;
 
    while (i < n){
        // Left child case
        if (pre[i] < p->data){
            t = new Node;
            t->data = pre[i++];
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            stk.push(p);
            p = t;
        } else {
            // Right child cases
            if (pre[i] > p->data && pre[i] < (stk.empty() ? 32767 : stk.top()->data)){
                t = new Node;
                t->data = pre[i++];
                t->lchild = nullptr;
                t->rchild = nullptr;
                p->rchild = t;
                p = t;
            } else {
                p = stk.top();
                stk.pop();
            }
        }
    }
}
void preOrder::inOrder(Node *p){
    if(p){
        inOrder(p->lchild);
        cout<<p->data<<" ";
        inOrder(p->rchild);
    }
}
int main(){
  preOrder p;
  int prOrder[]={30 , 20 , 10 , 15 , 25 , 40 , 50 , 45};
  p.insert(p.root , prOrder , 8 );
  p.inOrder(p.root);
}