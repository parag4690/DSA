

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

int Tree::Height(Node *p){
    if(p){
        int x = Height(p->lchild);
        int y = Height(p->rchild);
        return max(x , y)+1;
    }
    return 0;
}

int Tree::diameter(Node *p){
   if(root == NULL)
     return 0;
   int lh = Height(p->lchild);
   int rh = Height(p->rchild);


   int ldiameter =  diameter(p->lchild);
   int rdiameter = diameter(p->rchild);

   return max(lh+rh, max(ldiameter , rdiameter));
}

int main(){
    Tree t;
    t.creatTree();
    cout<<t.diameter(t.root)<<endl;
}
