TreeNode* minValue(TreeNode* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

TreeNode* inOrderSucessor(TreeNode* root, TreeNode* node){
    if(node->right!=NULL){
        return minValue(node->right);
    }

    TreeNode* p = node->parent;
    while(p!=NULL && p->right==n){
        n=p;
        p=p->parent;
    }
    return p;
}