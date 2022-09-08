#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left ;
    int data;
    Node *right;
    Node(int data){
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
    void inOrder(Node *p);
    void postOrder(Node *p);
    void levelOrder(Node *p);
    int height(Node *p);
    int countNonleafNode(Node *p);
    int countleafNode(Node *p);
    int countExcatlyNodes(Node *p);
    int countNodes(Node *p);
};
void Tree::createTree(){
    Node *p , *t;
    queue<Node*> q;
    int x; cout<<"enter root value = ";
    cin>>x;
    root=new Node(x);
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
    stack<Node*> s;
    while(p || !s.empty()){
        if(p){
            cout<<p->data<<" ";
            s.push(p);
            p=p->left;
        }
        else{
            p=s.top(); s.pop();
            p=p->right;
        }
    }
    cout<<endl;
}
void Tree::inOrder(Node *p){
    stack<Node*> s;
    while(p || !s.empty()){
        if(p){
            s.push(p);
            p=p->left;
        }
        else{
            p=s.top(); s.pop();
            cout<<p->data<<" ";
            p=p->right;
        }
    }
    cout<<endl;
}
void Tree::postOrder(Node *p){
    stack<long int> s;
    long int temp;
    while(p || !s.empty()){
        if(p){
            s.push((long int )p);
            p=p->left;
        }
        else{
            temp=s.top();
            s.pop();
            if(temp>0){
                s.push(-temp);
                p=((Node*)temp)->right;
            }
            else{
                cout<<((Node*)(-1*temp))->data<<" ";
                p=nullptr;
            }
        }
    }
    cout<<endl;
}
void Tree::levelOrder(Node *p){
    queue<Node*> q;
    cout<<p->data<<" ";
    q.push(p);
    while(!q.empty()){
        p=q.front();
        q.pop();
        if(p->left){
            cout<<p->left->data<<" ";
            q.push(p->left);
        }
        if(p->right){
            cout<<p->right->data<<" ";
            q.push(p->right);
        }
    }
    cout<<endl;
}
int Tree::height(Node *p){
    int x , y;
    if(p){
        x=height(p->left);
        y=height(p->right);
        if(x>y){
            return x+1;
        }
        else
         return y+1;
    }
    return 0;
}
int Tree::countNodes(Node *p){
    if(p)
      return countNodes(p->left)+countNodes(p->right)+1;
    return 0;
}
int Tree::countExcatlyNodes(Node *p){
    int x , y;
    if(p){
        x=countExcatlyNodes(p->left);
        y=countExcatlyNodes(p->right);
        if(p->left!=NULL && p->right!=NULL){
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
 cout<<"preOrder = ";
 t.preOrder(t.root);
 cout<<"inOrder = ";
 t.inOrder(t.root);
 cout<<"PostOrder = ";
 t.postOrder(t.root);
 cout<<"levelOrder = ";
 t.levelOrder(t.root);
 cout<<"height of tree = "<<t.height(t.root)<<endl;
 cout<<"count leaf Nodes = "<<t.countExcatlyNodes(t.root)<<endl;

}