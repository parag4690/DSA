#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    // balanced factor , 
    int height;
    Node *rchild;
    Node(int data){
        this->data=data;
        lchild=rchild=NULL;
    }
}*root=NULL;

int NodeHeight(Node *p){
    int x , y;
    if(p){
        x=NodeHeight(p->lchild);
        y=NodeHeight(p->rchild);
        if(x>y)
         return x+1;
        return y+1;
    }
    return 0;
}

// balanced factor

int BalanceFactor(Node *p){
   int hl;
    int hr;
 
    hl = (p && p->lchild) ? p->lchild->height : 0;
    hr = (p && p->rchild) ? p->rchild->height : 0;
 
    return hl - hr;
}

Node *LLRotation(Node *p){
     Node* pl = p->lchild;
    Node* plr = pl->rchild;
 
    pl->rchild = p;
    p->lchild = plr;
 
    // Update height
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
 
    // Update root
    if (root == p){
        root = pl;
    }
    return pl;
}

Node *LRRotation(Node *p){
    Node *pl=p->lchild;
    Node *plr=pl->rchild;

    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;

    plr->lchild=pl;

    plr->rchild = p;
    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height=NodeHeight(plr);

    if(root==p)
      root=plr;
    return plr;
}

// insert

Node *RInsert(Node *p , int key){
    Node *t=NULL;
    if(p==NULL){
        t=new Node(key);
        // on leaf nodes height = 1;
        t->height = 1;
        return t;
    }
    if(key<p->data)
      p->lchild=RInsert(p->lchild , key);
    else if(key>p->data)
      p->rchild=RInsert(p->rchild , key);

    // update every nodes height at return 
    p->height=NodeHeight(p); 
    // check balanced 
    if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1){ // mean LL rotaton mean new insertion done onleft sid
       return LLRotation(p);
    }
    else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1){ // mean LL rotaton mean new insertion done onleft sid
       return LRRotation(p);
    }
    // else if(BalanceFactor(p)==-2 && BalanceFactor(p->lchild)==-1){ // mean LL rotaton mean new insertion done onleft sid
    //    return RRRotation(p);
    // }
    // else if(BalanceFactor(p)==-2 && BalanceFactor(p->lchild)==1){ // mean LL rotaton mean new insertion done onleft sid
    //    return LLRotation(p);
    // }
    return p;
}

void inOrder(Node *p){
    if(p){
        cout<<p->data<<" ";
        inOrder(p->lchild);
        inOrder(p->rchild);
    }
}

int main(){
    // for ll rotaion 
//   root=RInsert(root , 5);
//   RInsert(root , 1); // here root is 
//   RInsert(root , 2); // 

 // for lr rotaion

  root=RInsert(root , 50);
  RInsert(root , 10); // here root is 
  RInsert(root , 20);
  inOrder(root); cout<<endl;
  cout<<root->data<<endl;
  return 0;
}