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
    bool isSame(TreeNode* l, TreeNode* r)
    {
        if(!l || !r)
            return l == r;
        return (l->val == r->val) && isSame(l->left, r->left) && isSame(l->right, r->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
            return false;

       return isSame(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
