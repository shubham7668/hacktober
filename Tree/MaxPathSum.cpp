/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int m =INT_MIN;
 
    int maxSum(TreeNode* node){
        if(node==NULL) return 0; 
        int maxL =max(0, maxSum(node->left)); 
        int maxR = max(0,maxSum(node->right)); 
        m = max(m,maxL+maxR+node->val);
        return (node->val + max(maxL,maxR)); 
    }
    int maxPathSum(TreeNode* root) {
        int l = maxSum(root); 
        
        return m; 
    }
};