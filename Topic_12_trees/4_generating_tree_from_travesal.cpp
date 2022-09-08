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
        root=NULL;
    }
    void CreateTree();
    Node* generateFromTraversal(int inOrder[] , int preOrder[] , int inStart , int inEnd);
    void Preorder(Node *p);
};

void Tree::Preorder(Node *p) {
    if (p){
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
 

int searchInorder(int inOrder[] , int start , int end , int data){
    for(int i=start; i<=end; i++){
        if(inOrder[i] == data){
            return i;
        }
    }
    return -1;
}

Node* Tree::generateFromTraversal(int *inorder, int *preorder, int inStart, int inEnd) {
    static int preIndex = 0;
 
    if (inStart > inEnd){
        return nullptr;
    }
 
    Node* node = new Node;
    node->data = preorder[preIndex++];
    node->lchild=nullptr;
    node->rchild = nullptr;
 
    if (inStart == inEnd){
        return node;
    }
 
    int splitIndex = searchInorder(inorder, inStart, inEnd, node->data);
    node->lchild = generateFromTraversal(inorder, preorder, inStart, splitIndex-1);
    node->rchild = generateFromTraversal(inorder, preorder, splitIndex+1, inEnd);
 
    return node;
}
 

int main(){

    Tree bt;
    int preorder[] = {4, 7, 9, 6, 3, 2, 5, 8, 1};
    int inorder[] = {7, 6, 9, 3, 4, 5, 8, 2, 1};

    Node *T = bt.generateFromTraversal(inorder , preorder , 0 , sizeof(inorder)/sizeof(inorder[0])-1);
    bt.Preorder(T);
    
    cout<<endl;

}