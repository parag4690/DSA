

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
    int Height(Node *p , int &sum);
    int maxPathSum(Node *p);
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

int Tree::Height(Node *p , int &sum){ // because i am changing
    if(p){
      int lh = max(0 , Height(p->lchild , sum)); // for negative values
      int rh = max(0 , Height(p->rchild , sum));
      sum = max(sum , lh+rh+p->data);
      return p->data + max(lh , rh);
    }
    return 0;
}

int Tree::maxPathSum(Node *p){
   int sum  = INT_MIN;
   Height(p , sum);
   return sum;
}

int main(){
    Tree t;
    t.creatTree();
    cout<<t.maxPathSum(t.root)<<endl;
}
