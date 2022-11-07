#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
    Node(int data){
        this->data=data;
        lchild=NULL ;
        rchild=NULL;
    }
};
class Tree{
  public:
  Node *root;
  Tree(){
      root=NULL;
  }
  void createTree(){
      queue<Node*> q;
      Node *t , *p ;
      int x;
      cout<<"enter root value = ";
      cin>>x;
      root = new Node(x);
      q.push(root);
      while(!q.empty()){
          p=q.front(); q.pop();
          cout<<"enter left child value of "<<p->data<<" = ";
          cin>>x;
          if(x!=-1){
              t=new Node(x);
              p->lchild = t;
              q.push(t);
          }
          cout<<"enter right child value of "<<p->data<<" = ";
          cin>>x;
          if(x!=-1){
              t=new Node(x);
              p->rchild = t;
              q.push(t);
          }
      }
  }
  void preOrder(Node *p){
       stack<Node*> s;
       while(p!=NULL || !s.empty()){
           if(p){
               cout<<p->data<<" ";
               s.push(p);
               p=p->lchild;
               
           }
           else{
             p= s.top(); s.pop();
             p=p->rchild;
           }
       }
       cout<<endl;
  }
  void inOrder(Node *p){
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
  void postOrder(Node *p){
    stack<long int> st;
    long int temp;
    while(p!=NULL || !st.empty()){
        if(p){
            st.push((long int)p);
            p=p->lchild;
        }
        else{
            temp = st.top(); st.pop();
            if(temp>0){
                st.push(-temp);
                p=((Node*)temp)->rchild;
            }else{
                cout<<((Node*)(-1*temp))->data<<" ";
                p=NULL;
            }
        }
    }
    cout<<endl;
  }
  void levelOrder(Node *p){
      queue<Node*> q;
      cout<<p->data<<" ";
      q.push(p);
      while(!q.empty()){
          p=q.front(); q.pop();
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
  int height(Node *p){
      int x, y;
      if(p){
          x=height(p->lchild);
          y=height(p->rchild);
          if(x>y){
              return x+1;
          }
          if(y>x){
              return y+1;
          }
      }
      return 0;
  }
  int countLeafNodes(Node *p){
      int x , y;
      if(p){
          x=countLeafNodes(p->lchild);
          y=countLeafNodes(p->rchild);
          if(p->lchild==NULL && p->rchild ==NULL){
              return x+y+1;
          }
          else{
              return x+y;
          }
      }
      return 0;
  }
};
int main(){
    Tree t;
    t.createTree();
    t.preOrder(t.root);
    t.inOrder(t.root);
    t.postOrder(t.root);
    t.levelOrder(t.root);
}
