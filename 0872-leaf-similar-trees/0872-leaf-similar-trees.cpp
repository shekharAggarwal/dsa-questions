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

    vector<int> v1,v2;
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leafS(root1,&v1);
        leafS(root2,&v2);

        if(v1.size()!=v2.size()){
            return false;
        }
        else{
            for(int i=0;i<v1.size();i++){
                if(v1[i]!=v2[i])
                return false;
            }
        }

        return true;
    }
    void leafS(TreeNode* n ,vector<int> *v){
        if(n->left==nullptr && n->right==nullptr){
            v->push_back(n->val);
            return;
        }
        if(n->left!=nullptr)
        leafS(n->left,v);
        if(n->right!=nullptr)
        leafS(n->right,v);
    }
};