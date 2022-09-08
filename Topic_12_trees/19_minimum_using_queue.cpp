//   if(!root) return -1;
//     queue<Node*> q;
//     int min=root->data;
//     q.push(root);
//     while(!q.empty()){
//         root=q.front();
//         q.pop();
//         if(root->left){
//             if(min>root->left->data)
//               min=root->left->data;
//             q.push(root->left);
//         }
//         if(root->right){
//             if(min>root->right->data)
//              min=root->right->data;
//             q.push(root->right);
//         }
//     }
//     return min;

// **************               imp           left jate jayge to smalles hi hoga

int minValue(Node* root) {
    // Code here
   if(!root) return -1;
   Node *p ;
   while(root){
       p=root;
       root=root->left;
   }
   return p->data;
}