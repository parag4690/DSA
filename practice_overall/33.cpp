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
    void preOrder(Node *p);
    void inOrder(Node *p);
    void postOrder(Node *p);
    void levelOrder(Node *p);
    int count(Node *p);
    int Height(Node *p);
};
void Tree::createTree(){
    Node *p , *t;
    root = new Node;
    cout<<"enter root value = ";
    int x ;
    cin>>x;
    root->data = x;
    root->lchild = root->rchild = NULL;
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
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.push(t);
        }
        cout<<"enter rchild of "<<p->data<<" = ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data = x;
            t->rchild = t->lchild = NULL;
            p->rchild = t;
            q.push(t);
        }
    }
}

void Tree::preOrder(Node *p){
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
        if(p){
            cout<<p->data<<" ";
            s.push(p);
            p=p->lchild;
        }
        else{
            p=s.top();
            s.pop();
            p=p->rchild;
        }
    }
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
            p=s.top();
            s.pop();
            cout<<p->data<<" ";
            p=p->rchild;
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
              p=NULL; 
          }
      }
   }
   cout<<endl;
}

void Tree::levelOrder(Node *p){
    queue<Node*> q;
    cout<<root->data<<" ";
    q.push(root);
    while(!q.empty()){
      p=q.front();
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
    cout<<endl;
}

int main(){
  Tree t;
  t.createTree();
  cout<<"preorder = ";
  t.preOrder(t.root);
  cout<<"inOrder = ";
  t.inOrder(t.root);
  cout<<"postOrder = ";
  t.postOrder(t.root);
  cout<<"levelOrder = ";
  t.levelOrder(t.root);
}