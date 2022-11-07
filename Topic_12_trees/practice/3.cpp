#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
    Node(int data){
        this->data = data;
        lchild = rchild = NULL;
    }
};
class BST{
   public:
   Node* root;
   BST(){
       root=NULL;
   }
   void insert(int key){
       Node *t , *p , *r;
       if(root==NULL){
           t=new Node(key);
           root=t; r=t;
       }
       else{
       p=root;
       while(p){
           r=p;
           if(p->data==key)
            return ;
           else if(p->data<key)
            p=p->rchild;
           else if(p->data>key)
            p=p->lchild;
       
       }
       t=new Node(key);
       if(key<r->data)
         r->lchild = t;
       else 
        r->rchild = t;
       }
   }
   void inOrder(Node *p){
       if(p){
           inOrder(p->lchild);
           cout<<p->data<<" ";
           inOrder(p->rchild);
       }
   }
   int height(Node *p){
       int x , y;
       if(p){
           x = height(p->lchild);
           y = height(p->rchild);
           if(x>y)
             return x+1;
           else
             return y+1;
       } return 0;
   }
   bool checkBalanceTree(Node *p){
       int x , y;
       if(p==NULL) return 1;
       x=height(p->lchild);
       y=height(p->rchild);
       if(abs(x-y)>1)
        return false;
       bool left = checkBalanceTree(p->lchild);
       bool right = checkBalanceTree (p->rchild);

       if(!left || !right)
        return false;
       return true;
   }
};
int main(){
  BST b;
  b.insert(10);
  b.insert(20);
  b.insert(30);
  b.inOrder(b.root);
  cout<<endl;
}