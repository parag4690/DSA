#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
    Node(int data){
        lchild = NULL;
        this->data = data;
        rchild = NULL;
    }
};
class Tree{
    public:
    Node *root;
    Tree(){
        root=NULL;
    }
    void creatTree();
    int Height(Node *p);
    bool isBalanced(Node *p);
};
void Tree::creatTree(){
    Node *p , *t;
    queue<Node*> q;
    cout<<"enter root value = ";
    int x;
    cin>>x;
    root = new Node(x);
    q.push(root);
    while(!q.empty()){
        p=q.front();
        q.pop();
        cout<<"enter left child of "<<p->data <<" = ";
        cin>>x;
        if(x!=-1){
            t = new Node(x);
            p->lchild = t;
            q.push(t);
        }
        cout<<"enter right child of "<<p->data<<" = ";
        cin>>x;
        if(x!=-1){
            t= new Node(x);
            p->rchild = t;
            q.push(t);        
        }
    }
}
int Tree::Height(Node *p){
    int x , y ;
    if(p){
        x = Height(p->lchild);
        y = Height(p->rchild);
        return max(x , y)+1;
    }
    return 0;
}
bool Tree::isBalanced(Node *p){
    int x , y;
    if(p==NULL){
      return 1;
    }
    x = Height(p->lchild); // find left subtree height;
    y = Height(p->rchild);

    if(abs(x-y)>1){
      return false;
    }
    // now if above does not get false then we need to check left and right child 
    bool left = isBalanced(p->lchild);
    bool right = isBalanced(p->rchild);

    if(!left || !right){
     return false; // agr enme se ek bhi false to pura false
    }
    return true;
}
int main(){
    Tree t;
    t.creatTree();
    if(t.isBalanced(t.root))
      cout<<"true"<<endl;
    else
      cout<<"false"<<endl;
}
