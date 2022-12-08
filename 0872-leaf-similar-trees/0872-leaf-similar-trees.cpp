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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       string v1="",v2="";
        leafS(root1,v1);
        leafS(root2,v2);

        return v1==v2;
    }
    void leafS(TreeNode* n ,string &v){
        if(n==nullptr)
            return;
        if(n->left==nullptr && n->right==nullptr){
            v+=to_string(n->val)+"-";
            return;
        }
        leafS(n->left,v);
        leafS(n->right,v);
    }
};