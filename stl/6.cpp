#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
};
class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void createTree();
    void preOrder(Node *p);
};
void Tree::createTree()
{
    Node *p, *t;
    queue<Node *> q;
    int x;
    cout << "enter root value = ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.push(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "enter left value of " << p->data << " = ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild=t;
            q.push(t);
        }
        cout << "enter right value of " << p->data << " = ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild=t;
            q.push(t);
        }
    }
}
void Tree::preOrder(Node *p)
{
    stack<Node*> s;
    while(p!=NULL || !s.empty()){
        if(p!=NULL){
            cout<<p->data<<" ";
            s.push(p);
            p=p->lchild;
        }
        else{
            p=s.top();
            s.pop();
            p=p->rchild;
        }
    }
}
int main()
{
    Tree t;
    t.createTree();
    cout << "preorder of tree is = " << endl;
    t.preOrder(t.root);
    cout << endl;
}