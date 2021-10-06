Solution for **4.5 VALIDATE BST**

Approach 1:
Inorder traversal of tree, if it is sorted than it is a BST.

Approach 2:
//We want left node must be small and right node should be greater than the root node

//Time complexity: O(N)
//Space complexity: O(N)
class Solution {
public:
    bool validateTree(TreeNode* root, long long int min, long long int max){
        if(root==NULL){
            return true;
        }
        
        if(root->val<min || root->val>max){
            return false;
        }
        long long int no =root->val;
        return validateTree(root->left,min,no-1) && validateTree(root->right,no+1,max);
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL or (root->left==NULL and root->right==NULL)){
            return true;
        }
        return validateTree(root, -1e18, 1e18);
    }
};