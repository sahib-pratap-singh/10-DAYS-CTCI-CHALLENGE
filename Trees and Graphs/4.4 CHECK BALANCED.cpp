Solution for **4.4 CHECK BALANCED**
//Approach 1
//Calculate the leftheight and right height if their diffrence is < 2 than it is
//height balanced

//Time complexity: O(n^2)
//Space complexity: O(n)

`class Solution {
public:
    //Calculating the height
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        return abs(leftHeight-rightHeight)<2 and isBalanced(root->left) and isBalanced(root->right);
    }
};`

//Approach 2
//Efficient solution by taking a pair of height and balanced

//Time complexity: O(N)
//Space complexity: O(N)

`class pair1{
    public:
    int height;
    bool balanced;
};
class Solution {
public:
    pair1 checkBalanced(TreeNode* root){
        pair1 p;
        if(root==NULL){
            p.height=0;
            p.balanced=true;
            return p;
        }
        pair1 left=checkBalanced(root->left);
        pair1 right=checkBalanced(root->right);
        
        p.height=1+max(left.height,right.height);
        if(abs(left.height-right.height)<2 and left.balanced and right.balanced){
            p.balanced=true;
        }
        else{
            p.balanced=false;
        }
        return p;
    }
    bool isBalanced(TreeNode* root) {
        return checkBalanced(root).balanced;
    }
};`