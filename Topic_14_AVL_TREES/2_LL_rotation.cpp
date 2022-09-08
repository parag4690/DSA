#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    int height;
    Node *right;
    Node(int data){
        this->data = data;
        left = right= NULL;
    }

};

Node *root=NULL;

int NodeHeight(Node *p){
    int hl , hr;
    if(p){
        hl = NodeHeight(p->left);
        hr = NodeHeight(p->right);
        if(hl>hr)
            return hl+1;
        return hr+1;
    }
    return 0;
}

int balanceFactor(Node *p){
    int hl , hr;
    hl=(p&&p->left) ? p->left->height : 0;
    hr = (p&& p->right) ? p->right->height : 0;

    return hl-hr;
}

Node *LLRotation(Node *p){
   Node *pl = p->left;
   Node *plr = pl->right;

   pl->right = p;
   p->left = plr;

   // update
   p->height = NodeHeight(p);
   pl->height = NodeHeight(pl);
   if(root==p)
     root=pl;
   return pl;
}

Node *insert(Node *p , int key){
    Node *t = NULL;
    if(p==NULL){
        t=new Node(key);
        t->height = 1;
        return t;
    }
    else if(key<p->data){
        p->left=insert(p->left , key);
    }
    else if(key>p->data){
        p->right = insert(p->right , key);
    }
    //

    p->height = NodeHeight(p);

    if(balanceFactor(p)==2 && balanceFactor(p->left)==1)
      return LLRotation(p);

    return p;

}

int main(){
  root = insert(root , 10);
  insert(root , 5);
  insert(root , 2);

  cout<<root->data<<endl;
}