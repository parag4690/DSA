#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    Node *right;
    Node (int data){
        this->data=data;
        left=right=NULL;
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
};
void Tree::createTree(){
    Node *p , *t;
    cout<<"enter root value = ";
    int x; cin>>x;
    root=new Node(x);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        p=q.front(); q.pop();
        cout<<"enter left child of "<<p->data<<" ";
        cin>>x;
        if(x!=-1){
            t=new Node(x);
            p->left=t;
            q.push(t);
        }
        cout<<"enter right child of "<<p->data<<" ";
        cin>>x;
        if(x!=-1){
            t=new Node(x);
            p->right=t;
            q.push(t);
        }
    }
}
void Tree::preOrder(Node *p){
    if(p){
        cout<<p->data<<" ";
        preOrder(p->left);
        preOrder(p->right);
    }

}
int main(){
 Tree t;
 t.createTree();
 cout<<"preordre of "<<endl;
 t.preOrder(t.root);
 cout<<endl;
}