//Simple level order traversal

//Time complexity: O(N)
//Space complexity: O(N)

class Solution {
public:
    vector<list<int>> levelOrder(TreeNode* root) {
        vector<list<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            list<int> l;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* cur=q.front();
                q.pop();
                l.push_front(cur->val);
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
        }
        return result;
    }
};