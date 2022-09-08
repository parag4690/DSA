

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
    Node *root2;
    Tree(){
        root=NULL;
        root2=NULL;
    }
    void creatTree();
    int Height(Node *p );
    int identical(Node *p , Node *q);
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
      int lh = Height(p->lchild );
      int rh = Height(p->rchild );
      return max(lh , rh)+1;
    }
    return 0;
}

int Tree::identical(Node *p , Node *q){
           if(Height(p)!=Height(q)){
            return false;
        }
        stack<Node*> s , s1;
        while((p!=NULL && q!=NULL) || (!s.empty() && !s1.empty())){
            if(p && !q || !p&&q)
                return false;
            if(p&&q){
                if(p->data != q->data){
                    return false;
                }
                s.push(p);
                s1.push(q);
                p=p->lchild;
                q=q->lchild;
            }
            else{
                p=s.top();
                q=s1.top();
                s.pop(); s1.pop();
                p=p->rchild;
                q=q->rchild;
            }
        }
          return true;
}

int main(){
    Tree t;
    t.creatTree();
    cout<<t.identical(t.root , t.root2)<<endl;
}
