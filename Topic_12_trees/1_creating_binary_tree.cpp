#include <bits/stdc++.h>
using  namespace std;
// tree

class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};

// Queue
class Queue{
    public:
    int size;
    int front;
    int rear;
    // int *s;
    // here insteal of array we are storing node and it should be double pointer

    Node **s;

    Queue(){ // default called first;
        // cout<<"enter size = ";
        // cin>>size; 
        size=10;
        front=rear = -1; 
        s=new Node*[size];
    }

    Queue(int size){
        front=rear=-1;
        this->size=size;
        s=new Node*[this->size];
    }

    void enqueue(Node  *x){
        if((rear+1)%size==size-1){
            cout<<"overflow"<<endl;
            return;
        }
        else{
            rear=(rear+1)%size;
            s[rear]=x;
        }
    }
    Node* dequeue(){
        Node* x = NULL;
        if(front == rear ){
            return x;
        }
        else{
           
            front=(front+1)%size;
            x=s[front];
        }
        return x;
    }

    int isEmpty(){
        return front==rear;
    }
     // no need
    // void display(){
    //     int p = front;
    //     while(p!=rear){
    //         p++;
    //         cout<<s[p]<<" ";
    //     }
    //     cout<<endl;
    // }
};

class Tree{
    public:
    Node *root;
    Tree(){
        root=NULL;
    }
    void createTree();
    void preOrder(Node *p); // it needs root
    void postOrder(Node *p);
    void inOrder(Node *p);
    void levelOrder(Node *p);
    int Height(Node *root);
};


void Tree::createTree(){
    Node *p , *t;
    int x;
    Queue q(100);
    cout<<"enter root value ";
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild=root->rchild=NULL;
    q.enqueue(root);

    while(!q.isEmpty()){
        p=q.dequeue();
        cout<<"enter left child of "<<p->data<<" = ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data = x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            q.enqueue(t);
        }
        cout<<"enter right child "<<p->data<<" = ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data = x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.enqueue(t);
        }
    }
}

void Tree::preOrder(Node *p){
    if(p){
        cout<<p->data<<" ";
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void Tree::inOrder(Node *p){
    if(p){
        inOrder(p->lchild);
        cout<<p->data<<" ";
        inOrder(p->rchild);
    }
}

void Tree::postOrder(Node *p){
    if(p){
        postOrder(p->lchild);
        postOrder(p->rchild);
        cout<<p->data<<" ";
    }
}
void Tree::levelOrder( Node *p)
{

    Queue q(100);
    // printf("%d ", root->data);
    q.enqueue(root);
    while (!q.isEmpty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            printf("%d ", root->lchild->data);
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
            printf("%d ", root->rchild->data);
            q.enqueue(root->rchild);
        }
        
    }
}
int Tree::Height(Node *root){
     int x = 0 , y = 0;
     if(root==0){
         return 0;
     }
     x=Height(root->lchild);
     y=Height(root->rchild);
     if(x>y){
         return x+1;
     }
     else{
         return y+1;
     }

}

int main(){
   
   Tree t;
   t.createTree();
   cout<<"preorder = ";
   t.preOrder(t.root);
   cout<<endl;
   cout<<"inOrder = ";
   t.inOrder(t.root);
   cout<<endl;
   cout<<"postOrder = ";
   t.postOrder(t.root);
   cout<<endl;
   cout<<"levelOrder = ";
   t.levelOrder(t.root);
   cout<<endl;
}
