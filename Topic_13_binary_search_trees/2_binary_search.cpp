#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    Node *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
class BST{
    public:
    Node *root;
    BST(){
        root=NULL;
    }
    void insert(Node *p , int key);
    void inOrder(Node *p);
    int search( Node * p , int key);
    Node *Delete(Node *p , int key);
};
void BST::insert(Node *p , int key){
   Node *r , *t; 
   if(root==NULL){  // yha pe root vali hi condition dalni hogi tabhi chlega
      root=new Node(key);
      return ;
   }
   while(p!=NULL){
     r=p;
     if(p->data<key){
         p=p->right;
     }
     else if (p->data>key){
         p=p->left;
     }
     else{
         return ;
     }
   }

   t=new Node(key);
   if(key<r->data){
       r->left=t;
   }
   else{
       r->right=t;
   }
}
void BST::inOrder(Node *p){
    if(p!=NULL){
       
        inOrder(p->left);
        cout<<p->data<<" ";
        inOrder(p->right);
    }
}

int BST::search(Node *p ,  int key){
    while(p!=NULL){
        if(p->data==key){
            return 1;
        }
        else if(p->data > key){
            p=p->left;
        }
        else{
            p=p->right;
        }
    }
    return 0;
}
int Height(Node *p){
    int x , y ;
    if(p==NULL ) return 0 ;
    else{
        x=Height(p->left);
        y=Height(p->right);
        if(x>y){
            return x+1;
        }
        else 
          return y+1;
    }
}

Node *InPre(Node *p){
    while(p&&p->right)
     p=p->right; // max 
    return p;
}

Node *InSucc(Node *p){
    while(p&& p->left){
        p=p->left;
    }
    return p;
}

Node* BST::Delete(Node *p , int key){

    Node *q;
    if(p==NULL){
        return NULL;
    }
    if(p->left == NULL && p->right == NULL){
        if(p==root)
          root=NULL;
        free(p);
        return NULL;
    }
    if(key<p->data)
     p->left=Delete(p->left , key); // first search
    else if(key>p->data)
     p->right=Delete(p->right , key);
    else{
        if(Height(p->left) > Height(p->right)){ // based 
            q = InPre(p->left);
            p->data = q->data;
            p->left = Delete(p->left , q->data); // agin modification in whole 
        }
        else{
            q=InSucc(p->right);
            p->data = q->data;
            p->right = Delete(p->right , q->data);
        }
    } 
    return p;
}
int main(){
  BST b;
  int n,a;
  cin>>n ;
  while(n--){
      cin>>a;
      b.insert(b.root , a);
  }
  cout<<"inOrder = ";
  b.inOrder(b.root);
  cout<<endl;
  cout<<b.search(b.root , 6) <<endl;

  // 
  b.Delete(b.root , 1);

  b.inOrder(b.root); 
  cout<<endl;
}