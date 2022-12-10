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
#include<bits/stdc++.h>
class Solution {
    long long int t=0,rp=0;
public:
    int maxProduct(TreeNode* root) {
        t = getVal(root);
        getVal(root);
        return rp%int(pow(10,9)+7);
    }
    
    int getVal(TreeNode *r){
        if(!r) return 0;
        int stree = getVal(r->left)+getVal(r->right)+r->val;
        rp= max(rp,(t-stree)*stree);
        
        return stree;
        
    }
};