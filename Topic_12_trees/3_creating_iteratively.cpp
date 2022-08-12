#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};
class Tree{
    public:
    Node *root;
    Tree(){
        root = NULL;
    }
    void createTree();
    void preOrder(Node *p);
    void inOrder(Node *p);
    void postOrder(Node *p);
    void levelOrder(Node *p);
};
void Tree::createTree(){
    Node *p , *t;
    queue<Node*> q;
    cout<<"enter root value = ";
    int x;
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = 0;
    q.push(root);

    while(!q.empty()){
        p = q.front();
        q.pop();
        cout<<"enter left child value of "<<p->data<<":";
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->data= x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.push(t);
        }
        cout<<"enter right child value of "<<p->data<<":";
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.push(t);
        }
    }
}

void Tree::preOrder(Node *p){
   stack<Node*> s;
   while(p!=NULL || !s.empty()){
       if(p!=NULL){
           cout<<p->data<<" ";
           s.push(p);
           p=p->lchild;
       }
       else{
           p = s.top();
           s.pop();
           p=p->rchild;
       }
   }
   cout<<endl;
}
void Tree::inOrder(Node *p){
  stack<Node*> s;
  while(p!=NULL || !s.empty()){
      if(p!=NULL){
          s.push(p);
          p=p->lchild;
      }
      else{
          p=s.top();
          s.pop();
          cout<<p->data<<" ";
          p=p->rchild;
      }
  }
  cout<<endl;
}

void Tree::postOrder(Node *p) {
    stack<long int> stk;
    long int temp;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            stk.emplace((long int)p);
            p = p->lchild;
        } else {
            temp = stk.top();
            stk.pop();
            if (temp > 0){ // right child k liye
                stk.emplace(-temp);
                p = ((Node*)temp)->rchild;
            } else {
                cout << ((Node*)(-1 * temp))->data << " " << flush;
                p = nullptr;
            }
        }
    }
    cout << endl;
}
void Tree::levelOrder(Node *p){
    queue<Node*> q;
    cout<<root->data<<" ";
    q.push(root);
    while(!q.empty()){
        p=q.front(); // p es address pe chla jaye
        q.pop();
        if(p->lchild){
            cout<<p->lchild->data<<" ";
            q.push(p->lchild); // correct order 
        }
        if(p->rchild){
            cout<<p->rchild->data<<" ";
            q.push(p->rchild);
        }
    }
    cout<<endl;
}
int main(){
  Tree t;
  t.createTree();
  cout<<"PREORDER = ";
  t.preOrder(t.root);
  cout<<"INORDER = ";
  t.inOrder(t.root);
  cout<<"POSTORDER = ";
  t.postOrder(t.root);
  cout<<"LEVELORDER = ";
  t.levelOrder(t.root);
}