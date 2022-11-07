#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left ;
    int data;
    Node *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
class BST{
    public:
    Node* root;
    BST(){
        root=NULL;
    }
    void insert(int key){
        Node *t , *p , *r;
        if(root==NULL){
            root=new Node(key); return;
        }
        p=root;
        while(p){
            r=p;
            if(p->data==key)
              return;
            else if(p->data>key)
               p=p->left;
            else
               p=p->right;
        }
        t=new Node(key);
        if(r->data>key)
          r->left=t;
        else if(r->data<key)
          r->right = t;
    }
    void inOrder(){
        stack<Node*> s;
        Node *p=root;
        while(p!=NULL || !s.empty()){
            if(p){
                s.push(p);
                p=p->left;
            }
            else{
                p=s.top(); s.pop();
                cout<<p->data<<" ";
                p=p->right;
            }
        }
        cout<<endl;
    }
    bool search(int key){
        Node *p=root;
        while(p){
            if(p->data==key)
              return true;
            else if(p->data<key)
              p=p->right;
            else
              p=p->left;
        } return false;
    }
    int height(Node *p){
        int x , y;
        if(p){
            x=height(p->left);
            y=height(p->right);
            if(x>y)
                return x+1;
            else 
                return y+1;
        } return 0;
    }
    Node *inPre(Node *p){
        while(p&&p->right){
            p=p->right;
        } return p;
    }
    Node *inSuc(Node *p){
        while(p&&p->left)
          p=p->left;
        return p;
    }
    Node* Delete(Node *p , int key){
        Node *q;
        if(p==NULL) return NULL;
        if(p->left ==NULL && p->right==NULL) {
            if(p==root)
              root=NULL;
            free(p);
            return NULL;
        }
        if(p->data>key)
            p->left=Delete(p->left , key);
        else if(p->data<key)
         p->right = Delete(p->right , key);
        else{
             if(height(p->left)>height(p->right)){
                q=inPre(p->left);
                p->data = q->data;
                p->left = Delete(p->left , key);
             }
             else{
                q=inSuc(p->right);
                p->data = q->data;
                p->right = Delete(p->right , key);
             }
        }
        return p;
    }

};

int main(){
  BST b;
  b.insert(5);
  b.insert(4);
  b.insert(2);
  b.insert(10);
  b.inOrder();
  cout<<b.search(10)<<endl;
  b.Delete(b.root , 2);
  b.inOrder();
}