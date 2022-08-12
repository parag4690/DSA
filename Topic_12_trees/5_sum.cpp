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
      root = NULL;
  }
  void creatTree();
  int sum(Node *p);
};
void Tree::creatTree(){
    Node *p , *t;
    root = new Node;
    cout<<"enter root value = ";
    int x;
    cin>>x;
    queue<Node*> q;
    root->data = x;
    root->lchild = root->rchild;
    q.push(root);
    while(!q.empty()){
        p = q.front();
        q.pop();
        cout<<"enter left child of "<<p->data<<" = ";
        cin>>x;
        if(x!=-1){
          t = new Node;
          t->data = x;
          t->lchild = t->rchild = NULL;
          p->lchild = t;
          q.push(t);
        }
        cout<<"enter right child of "<<p->data <<" = ";
        cin>>x;
        if(x!=-1){
          t= new Node;
          t->data = x;
          t->lchild = t->rchild = 0 ;
          p->rchild = t;
          q.push(t);
        }
    }
}
int Tree::sum(Node *p){
  if(p!=NULL){
    return sum(p->lchild)+p->data+sum(p->rchild);
  }
  return 0;
}
int main(){
  Tree t;
  t.creatTree();
  cout<<t.sum(t.root)<<endl;
}
