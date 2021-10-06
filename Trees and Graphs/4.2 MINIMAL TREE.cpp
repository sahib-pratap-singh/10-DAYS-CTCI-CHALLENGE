Solution for **4.2 MINIMAL TREE**
Approach 1:
Preorder traversal with considering right mid node as root;

`class Solution {
public:
    TreeNode* createTree(vector<int>& nums,int start,int end){
        if(start>end){
            return NULL;
        }
        //considering the mid as every right element
        int mid=(start+end)%2!=0?(start+end)/2 + 1:(start+end)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=createTree(nums,start,mid-1);
        root->right=createTree(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createTree(nums,0,nums.size()-1);
    }
};`

Approach 2:
Preorder traversal with considering left mid node as root;
Only one line change:

`class Solution {
public:
    TreeNode* createTree(vector<int>& nums,int start,int end){
        if(start>end){
            return NULL;
        }
        //considering the mid as every right element
      //--------------------------------------------------------->>>>>>>>>
        int mid=(start+end)/2;   //Only change
    // ----------------------------------------------------->>>>>>>>>>>
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=createTree(nums,start,mid-1);
        root->right=createTree(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createTree(nums,0,nums.size()-1);
    }
};`