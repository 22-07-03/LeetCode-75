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
    int maxDepth(TreeNode* root) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        if(root == nullptr){return 0;}
    ///   if(root->left==nullptr && root->right==nullptr){return 1 ;} // it increases the time of execution

        
        int leftheight= maxDepth(root->left);
      
      int rightheight = maxDepth(root->right);

        return max(leftheight, rightheight)+1;
    }
};
