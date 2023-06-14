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
    void inorder(TreeNode* root,vector<int>&diffs) {
        if(root!=NULL) {
            inorder(root->left,diffs);
            diffs.push_back(root->val);
            inorder(root->right,diffs);
        }
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int>res;
        inorder(root,res);

        
        int diff = res[1]-res[0];
        for(int i=1;i<res.size()-1;i++) {
            diff = min(diff, abs(res[i+1]-res[i]));
        }
        return diff;
    }
};
