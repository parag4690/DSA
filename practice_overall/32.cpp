#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *rchild;
    int data;
    Node *lchild;
};
class Tree{
 public:
 Node *root;
 Tree(){
     root=NULL;
 }

 void createTree(){
     Node *p , *t;
     int x;
     queue<Node*> q; // dyan 
     cout<<"enter root "<<endl;
     cin>>x;
     root = new Node;
     root->data = x;
     root->lchild->rchild = NULL;
     q.push(root);
     while(!q.empty()){
         p=q.front();
         q.pop();
         cout<<"enter left child data of "<<p->data<<" = ";
         cin>>x;
         if(x!=1){
             t=new Node;
             t->data = x;
             t->lchild = t->rchild = NULL;
             p->lchild = t;
             q.emplace(t);
         }
         cout<<"enter right child data of "<<p->data<<" = ";
         cin>>x;
         if(x!=1){
             t=new Node;
             t->data = x;
             t->lchild=t->rchild = NULL;
             p->lchild = t;
             q.emplace(t);
         }
     }
 }
 void preorder(){
     Node *p = root;
     if(p){
         cout<<p->data <<" ";
         preorder()
     }
 }
};
int main(){

}