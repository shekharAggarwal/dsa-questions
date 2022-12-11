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
    int maxPathSum(TreeNode* root) {
        s= INT_MIN;
        maxSum(root);
        return s;
    }
    
    int s;
    
    int maxSum(TreeNode* r){
        if(!r)
            return 0;
       int gl = maxSum(r->left);
        gl = max(gl,0);
        int gr  = maxSum(r->right);
        gr=max(gr,0);
        int t = gl+gr+r->val;
        s=max(s,t);
        
        return max(gl+r->val,gr+r->val);
    }
};