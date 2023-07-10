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
    int minDepth(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        // Corner case. Should never be hit unless the code is
        // called on root = NULL
        if (root == NULL)
            return 0;
 
        // Base case : Leaf Node. This accounts for height = 1.
        if (root->left == NULL && root->right == NULL)
            return 1;
   
        int l = INT_MAX, r = INT_MAX;
        // If left subtree is not NULL, recur for left subtree
   
        if (root->left)
            l = minDepth(root->left);
 
        // If right subtree is not NULL, recur for right subtree
        if (root->right)
            r =  minDepth(root->right);
 
        //height will be minimum of left and right height +1
        return min(l , r) + 1;
    }
};
