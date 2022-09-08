
class Solution{
public:    
    bool isCompleteBT(Node* root){
        //code here
       
        queue<Node*> q;
        q.push(root);
        queue<int> q2;
        q2.push(root->data);
        while(!q.empty()){
           
            root=q.front(); q.pop();
            
            if(root->left){
              q.push(root->left);
              q2.push(root->left->data);
            }
            else {
                q2.push(-1);
            }
            if(root->right){
                q.push(root->right);
                q2.push(root->right->data);
               
            }
            else{
                q2.push(-1);
            }
        }
        int x , flag=1;
        while(!q2.empty()){
            if(q2.front()==-1){
                x=-1; flag=0;
            }
            if(flag==0 && q2.front()!=x){
                return false;
            }
            
            q2.pop();
        }
       return true;
    }
};