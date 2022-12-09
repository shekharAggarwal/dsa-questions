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
    int maxAncestorDiff(TreeNode* root) {
        if(root==nullptr)return 0;
        
        return getMaxDiff(root,root->val,root->val);
    }
    int getMaxDiff(TreeNode* r,int cMax,int cMin){
        if(r==nullptr)
            return cMax-cMin;
        
        cMax=max(cMax,r->val);
        
        cMin=min(cMin,r->val);
        return max(getMaxDiff(r->left,cMax,cMin),getMaxDiff(r->right,cMax,cMin));
        
        
    }
};