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
        root=NULL;
    }
    void createTree();
    void preOrder(Node *p);
    void inOrder(Node *p);
    void postOrder(Node *p);
    void levelOrder(Node *p);
};
void Tree::createTree(){
    Node *p , *t;
    queue<Node*> q;
    cout<<"enter root = ";
    int x;
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.push(root);
    while(!q.empty()){
        p=q.front();
        q.pop();
        cout<<"enter left child of "<<p->data<<" = ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data = x;
            t->lchild=t->rchild = NULL;
            p->lchild = t;
            q.push(t);
        }
        cout<<"enter right child of "<<p->data<<" = ";
        cin>>x;
        if(x!=-1){
            t= new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.push(t);
        }
    }
}
void Tree::preOrder(Node *p){
    Node *t;
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
        if(p!=NULL){
            cout<<p->data<<" ";
            s.push(p);
            p=p->lchild;
        }
        else{
            p=s.top(); // right child k liye vapis use jgah a jayga 
            s.pop();
            p=p->rchild;
        }
    }
    cout<<endl;
}
void Tree::inOrder(Node *p){
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
        if(p!=NULL){
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
    long int t;
    while(p!=NULL || !s.empty()){
        if(p!=NULL){
            s.push((long int)p);
            p=p->lchild;
        }
        else{
            t=s.top(); // node nhi likhna
            s.pop();
            if(t>0){
                s.push(-t);
                p=((Node *)t)->rchild;
            }
            else{
                cout<<((Node*)(-1*t))->data<<" ";
                p=NULL;
            }
        }
    }
    cout<<endl;
}

void Tree::levelOrder(Node *p){
    queue<Node*> q;
    cout<<p->data<<" ";
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
 cout<<"PREORDER = ";
 t.preOrder(t.root);
 cout<<"INORDER = ";
 t.inOrder(t.root);
 cout<<"POSTORDER = ";
 t.postOrder(t.root);
 cout<<"LEVELORDER = ";
 t.levelOrder(t.root);
}