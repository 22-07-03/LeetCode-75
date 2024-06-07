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
 void count(TreeNode * root, int val, int&ans){
    if(!root){return ;}
    if(root->val>=val){ans++; val = root->val;}

    count(root->left, val, ans);
    count(root->right, val, ans);
 }
    int goodNodes(TreeNode* root) {
        int ans =0;
        int val = root->val;
        count(root, val,ans);

        return ans;
    }
};
