#include <bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
  int val;
  TreeNode *left;
  TreeNode *right;
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)
            return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        stack<TreeNode*> s;
        q.push(root);
        TreeNode* t;
        int len , flag = 1; // 1 is for left to right and 0 is for right to left
        while(!q.empty()){
           len = q.size();
            vector<int> v;
            for (int i=0; i<len; i++){
                t=q.front();
                q.pop();
                v.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(flag==1){
                flag=0;
                ans.push_back(v);
            }
            else{
                flag=1;
                reverse(v.begin() , v.end());
                ans.push_back(v);
            }
        }
        return ans;
    }
};