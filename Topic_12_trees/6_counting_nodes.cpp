#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};
class Tree{
  public:
  Node *root;
  Tree(){
    root = NULL;
  }
  void createTree();
  int countNodes(Node *p);
  int height(Node *p);
  int countLeafNode(Node *p);
  int countNonLeafNode(Node *p);
  int countExcatlybinary(Node *p);
};
void Tree::createTree(){
    Node *p , *t;
    root = new Node;
    cout<<"enter root value = ";
    int x;
    cin>>x;
    root->data = x;
    root->lchild = root->rchild = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
      p=q.front();
      q.pop();
      cout<<"enter lchild of "<<p->data<<" = ";
      cin>>x;
      if(x!=-1){
        t=new Node;
        t->data = x;
        t->lchild = t->rchild = 0;
        p->lchild = t;
        q.push(t);
      }
      cout<<"enter rchild of "<<p->data<<" = ";
      cin>>x;
      if(x!=-1){
        t=new Node;
        t->data = x;
        t->lchild = t->rchild = 0;
        p->rchild = t;
        q.push(t);
      }
    }
}
int Tree::countNodes(Node *p){
  if(p){
    return countNodes(p->lchild)+countNodes(p->rchild)+1;
  }
  return 0;
}
int Tree::height(Node *p){
  int x , y;
  if(p){
    x = height(p->lchild);
    y=height(p->rchild);
    if(x>y){
      return x+1;
    }
    else{
      return y+1;
    }
  }
  return 0;
}
int Tree::countLeafNode(Node *p){  
  int x , y;
  if(p){
    x = countLeafNode(p->lchild);
    y = countLeafNode(p->rchild);
    if(p->lchild==NULL && p->rchild==NULL){
       return x+y+1;
    }
    else{
      return x+y;
    }
  }
  return 0;
}
int Tree::countExcatlybinary(Node *p){  
  int x , y;
  if(p){
    x = countExcatlybinary(p->lchild);
    y = countExcatlybinary(p->rchild);
    if(p->lchild!=NULL && p->rchild!=NULL){
       return x+y+1;
    }
    else{
      return x+y;
    }
  }
  return 0;
}
int Tree::countNonLeafNode(Node *p){  
  int x , y;
  if(p){
    x = countNonLeafNode(p->lchild);
    y = countNonLeafNode(p->rchild);
    if(p->lchild!=NULL || p->rchild!=NULL){
       return x+y+1;
    }
    else{
      return x+y;
    }
  }
  return 0;
}
int main(){
  Tree t;
  t.createTree();
  cout<<"count of Nodes = "<<t.countNodes(t.root)<<endl;
  cout<<"height of Nodes = "<<t.height(t.root)<<endl;
  cout<<"count leaf Nodes = "<<t.countLeafNode(t.root)<<endl;
  cout<<"count nonleaf Nodes = "<<t.countNonLeafNode(t.root)<<endl;
  cout<<"count exctaly binary Nodes = "<<t.countExcatlybinary(t.root)<<endl;
}