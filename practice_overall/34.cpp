#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    Node *right;
    Node(int val){
        left = right = NULL;
        data = val;
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
    void levelOrder(Node *p);
    void postOrder(Node *p);
    int countLeafNodes(Node *p);
    int height(Node *p);
    bool balancedTree(Node *p);
};
void Tree::createTree(){
    Node *p , *t;
    cout<<"enter root value ";
    int x;
    cin>>x;
    root=new Node(x);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        p = q.front();
        q.pop();
        cout<<"enter left child of root value = ";
        cin>>x;
        if(x!=-1){
            t = new Node(x);
            p->left = t;
            q.push(t);
        }
        cout<<"enter right child of root value = ";
        cin>>x;
        if(x!=-1){
            t=new Node(x);
            p->right = t;
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
            p=p->left;
        }
        else {
            p = s.top();
            s.pop();
            p=p->right;
        }
    }
    cout<<endl;
}
void Tree::inOrder(Node *p){
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
        if(p){
            s.push(p);
            p=p->left;
        }
        else{
            p=s.top();
            cout<<p->data<<" ";
            s.pop();
            p=p->right;
        }
    }
    cout<<endl;
}
void Tree::postOrder(Node *p){
    stack<long int> s;
    long int temp;
    while(p!=NULL || !s.empty()){
        if(p){
            s.push((long int)p);
            p=p->left;
        }
        else{
            temp = s.top();
            s.pop();
            if(temp>0){
                s.push(-temp);
                p=((Node*)temp)->right;
            }
            else{
                cout<<((Node*)(-1*temp))->data<<" ";
                p = NULL;
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
    if(p){
      int x = height(p->left);
      int y = height(p->right);
      return max(x , y)+1;
    }
    return 0;
}
int Tree::countLeafNodes(Node *p){
    if(p){
        int lh = height(p->left);
        int rh = height(p->right);
        if(p->left == NULL && p->right == NULL){
            return lh+rh+1;
        }
        else
          return lh+rh;
    }
    return 0;
}
int main(){

}