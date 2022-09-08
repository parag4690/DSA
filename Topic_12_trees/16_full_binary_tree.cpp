#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* left ;
    int data ;
    Node* right;
};
bool isFullTree(Node *root){
    if(root==NULL)
      return true;
    if(root->left==NULL && root->right==NULL)
      return true;
    if(root->left && root->right)
      return isFullTree(root->left)&&isFullTree(root->right);
    return false;
}