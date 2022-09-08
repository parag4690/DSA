#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
    Node(int data){
        lchild=rchild=NULL;
        this->data=data;
    }
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
};
void Tree::createTree(){
  Node *p , *t;
  queue<Node*> q;
  int x;
  cout<<"enter root value = ";
  cin>>x;
  root=new Node(x);
  q.push(root);
  while(!q.empty()){
      p=q.front();
      q.pop();
      cout<<"enter left child of = "<<p->data<<" = ";
      cin>>x;
      if(x!=-1){
          t=new Node(x);
          p->lchild=t;
          q.push(t);
      }
      cout<<"enter right child of = "<<p->data<<" = ";
      cin>>x;
      if(x!=-1){
          t=new Node(x);
          p->rchild=t;
          q.push(t);
      }
  }
}
void Tree::preOrder(Node *p){
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
    if(p!=NULL){
        cout<<p->data<<" ";
        s.push(p);
        p=p->lchild;
    }
    else{
        p=s.top();
        s.pop();
        p=p->rchild;
    }}
    cout<<endl;

}
void Tree::inOrder(Node *p){
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
        if(p){
            s.push(p);
            p=p->lchild;
        }
        else{
            p=s.top(); s.pop();
            cout<<p->data<<" ";
            p=p->rchild;
        }
    }
    cout<<endl;
}
void Tree::levelOrder(Node *p){
    queue<Node*> q;
    q.push(p);
    cout<<p->data<<" ";
    while(!q.empty()){
       p=q.front(); q.pop();
       if(p->lchild){
           q.push(p->lchild);
           cout<<p->lchild->data<<" ";
       }
       if(p->rchild){
           cout<<p->rchild->data<<" ";
           q.push(p->rchild);
       }
    }
    cout<<endl;
}
void Tree::postOrder(Node *p){
    stack<long int> s;
    long int temp;
    while(p!=NULL || !s.empty()){
        if(p!=NULL){
            s.push((long int)p);
            p=p->lchild;
        }
        else{
            temp = s.top(); 
            s.pop();
            if(temp>0){
                s.push(-temp);
                p=((Node*)temp)->rchild;
            }
            else{
                cout<<((Node*)(-1*temp))->data<<" ";
                p=nullptr;
            }
        }
    }
    cout<<endl;
}
int main(){
 Tree t;
 t.createTree();
 cout<<"preOrder of this tree = ";
 t.preOrder(t.root);
 cout<<"inOrder of this tree = ";
 t.inOrder(t.root);
 cout<<"levelOrder of this tree = ";
 t.levelOrder(t.root);
 cout<<"postOrder of this tree = ";
 t.postOrder(t.root);
 cout<<endl;
}