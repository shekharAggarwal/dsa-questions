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
    vector<int> pt;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        dp(pt,root);
        return pt;
    }
    
    void dp(vector<int> &ppt,TreeNode * r){
        if(r==NULL){
            return;
        }
        ppt.push_back(r->val);
        dp(ppt,r->left);
        dp(ppt,r->right);
    }
};