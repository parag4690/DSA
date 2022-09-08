

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
    int Height(Node *p , int &diameter);
    int diameter(Node *p);
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

int Tree::Height(Node *p , int &diameter){
    if(p){
      int lh = Height(p->lchild , diameter);
      int rh = Height(p->rchild , diameter );
      diameter = max(diameter , lh+rh);
      return max(lh , rh)+1;
    }
    return 0;
}

int Tree::diameter(Node *p){
   int diameter  = 0;
   Height(p , diameter);
   return diameter;
}

int main(){
    Tree t;
    t.creatTree();
    cout<<t.diameter(t.root)<<endl;
}
