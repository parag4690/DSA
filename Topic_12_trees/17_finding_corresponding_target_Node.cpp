#include <bits/stdc++.h>
using namespace std;
class TreeNode{
  public:
  TreeNode *left ;
  int val;
  TreeNode *right;
};
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> q , q1;
        if(cloned->val == target->val)
            return cloned;
        q1.push(cloned);
        while( !q1.empty()){
            cloned = q1.front();
            q1.pop();
            if( cloned->left){
                if( cloned->left->val==target->val){
                    return cloned->left;
                }
                q1.push(cloned->left);
            }
             if(cloned->right){
                if(cloned->right->val==target->val){
                    return cloned->right;
                }
                q1.push(cloned->right);
            }
        }
        return cloned; 
        
    }
};

// 2nd method 

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        static TreeNode* ans ;
        if(cloned==NULL)
            return cloned;
        if(cloned->val == target->val)
            ans =  cloned;
        getTargetCopy(original , cloned->left , target);
        getTargetCopy(original , cloned->right  , target);
        return ans;
    }
};