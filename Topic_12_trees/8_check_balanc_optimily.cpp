// previus code took O(n2) time but we need optimily

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



bool Tree::isBalanced(Node *p){
   return Height(root)!= -1;
}

int Tree::Height(Node *p){
    if(p==NULL)
      return 0;
    int lheight = Height(p->lchild);
    if(lheight == -1) return -1;
    int rheight = Height(p->rchild);
    if(rheight == -1); return -1;
    if(abs(lheight - rheight)>1) return -1;
    return max(lheight , rheight) + 1;
}
int main(){
    Tree t;
    t.creatTree();
    if(t.isBalanced(t.root))
      cout<<"true"<<endl;
    else
      cout<<"false"<<endl;
}
