#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *right , *left;
};


class Solution {
public:
    bool isleaf(Node *root){
        return !root->left && !root->right;
    }
    
    void addLeftBoundry(Node *root , vector<int> &ans){
        Node *cur = root->left;
        while(cur){
            if(!isleaf(cur)) ans.push_back(cur->data);
            if(cur->left) cur= cur->left;
            else{
                cur = cur->right;
            }
        }
    }
    
    void addRightBoundry(Node *root , vector<int> &ans){
        Node *cur = root->right;
        vector<int> temp;
        while(cur){
            if(!isleaf(cur)) temp.push_back(cur->data);
            if(cur->right) cur = cur->right;
            else{
                cur = cur->left;
            }
        }
        for(int i=temp.size()-1; i>=0; i--){
            ans.push_back(temp[i]);
        }
    }
    
    void addLeaves(Node *root , vector<int> &ans){
        if(isleaf(root)){
            ans.push_back(root->data);
            return ;
        }
        if(root->left) addLeaves(root->left , ans);
        if(root->right) addLeaves(root->right , ans);
          
    }
      
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(!root) return ans;
        if(!isleaf(root)) ans.push_back(root->data);
        
        addLeftBoundry(root , ans);
        addLeaves(root , ans);
        addRightBoundry(root , ans);
        
        return ans;
    }
};