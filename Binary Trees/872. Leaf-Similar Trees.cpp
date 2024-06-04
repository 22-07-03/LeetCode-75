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
    void allleavesfromlefttoright(TreeNode* root, vector<int>& leaves) {
        if (!root) return;

        if (!root->left && !root->right) {
            leaves.push_back(root->val);
        }

        allleavesfromlefttoright(root->left, leaves);
        allleavesfromlefttoright(root->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        vector<int> vec1, vec2;
           
        allleavesfromlefttoright(root1, vec1);
        allleavesfromlefttoright(root2, vec2);

        return vec1 == vec2;
    }
};
