Solution for **4.10 CHECK SUBTREE**

//Need to check for every node
`class Solution {
public:
    bool isBothSame(TreeNode* root, TreeNode* subroot){
        if(root==NULL && subroot==NULL){
            return true;
        }
        if(root==NULL || subroot==NULL){
            return false;
        }
        if(root->val != subroot->val){
            return false;
        }
        return isBothSame(root->left,subroot->left) && isBothSame(root->right,subroot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL){
            return false;
        }
        if(isBothSame(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};`