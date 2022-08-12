#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node *lchild;
    int data;
    Node *rchild;
};
class Tree{
    public:
    Node *root;
    Tree(){
        root=NULL;
    }
    void createTree();
    void preOrder(Node *p);
    void postOrder(Node *p);
    void inOrder(Node *p);
    void levelOrder(Node *p);
    int height(Node *p);
};
void Tree::createTree(){
    Node *p , *t;
    queue<Node*> q;
    int x;
    root = new Node;
    cout<<"enter root value = ";
    cin>>x;
    root->data = x;
    root->lchild=root->rchild = nullptr;
    q.push(root); // push
    while(!q.empty()){
        p=q.front();
        q.pop();
        cout<<"enter left child of "<<p->data<<" = "<<flush;
        cin>>x;
         if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }
        cout<<"enter right child of "<<p->data<<" = ";
        cin>>x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}
void Tree::preOrder(Node *p){
    if(p){
        cout<<p->data<<" ";
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}
void Tree::inOrder(Node *p){
    if(p){
        preOrder(p->lchild);
        cout<<p->data<<" ";
        preOrder(p->rchild);
    }
}
void Tree::postOrder(Node *p){
    if(p){
        preOrder(p->lchild);
        preOrder(p->rchild);
        cout<<p->data<<" ";
    }
}
void Tree::levelOrder(Node *p){
    queue<Node*> q;
    cout<<root->data<<" ";
    q.push(root);
    while(!q.empty()){
        p = q.front();
        q.pop();
        if(p->lchild){
            cout<<p->lchild->data<<" ";
            q.push(p->lchild);
        }
        if(p->rchild){
            cout<<p->rchild->data<<" ";
            q.push(p->rchild);
        }
    }
}
int Tree::height(Node *p){
    int l = 0 ,r = 0;
    if(p==nullptr)
      return 0;
    else{
      l=height(p->lchild);
      r=height(p->rchild);
    }
    if(l>r)
      return l+1;
    else
      return r+1;
    
}
int main(){
  Tree t;
  t.createTree();
  cout<<"preorder = ";
  t.preOrder(t.root);
  cout<<endl;
  cout<<"inOrder = ";
  t.inOrder(t.root);
  cout<<endl;
  cout<<"postOrder = ";
  t.postOrder(t.root);
  cout<<endl;
  cout<<"levelOrder = ";
  t.levelOrder(t.root);
  cout<<endl;
 int h = t.height(t.root);
 cout<<"height = "<<h<<endl;
}