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
    int diameter(Node *p);
    int dHieght(Node *p , int diameter);
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
  if(p==NULL){
      return 1;
  }

      int leftHeight = Height(p->lchild);
      int rightHeight = Height(p->rchild);

      if(abs(leftHeight - rightHeight)>1)
        return false;
      bool left = isBalanced(p->lchild);
      bool right = isBalanced(p->rchild);
      if(!left || !right)
        return false;
      return true;
  
  
}

int Tree::dHieght(Node *p , int  diameter){
    if(p){
        int lh = dHieght(p->lchild , diameter);
        int rh = dHieght(p->rchild , diameter);
        diameter = max(diameter , lh+rh);
        return max(lh , rh)+1;
    }
    return 0;
}

int Tree::diameter(Node *p){
    int diameter = 0;
    dHieght(p , diameter);
    return diameter;
}
int main(){
    Tree t;
    t.creatTree();
    if(t.isBalanced(t.root))
      cout<<"true"<<endl;
    else
      cout<<"false"<<endl;
}
