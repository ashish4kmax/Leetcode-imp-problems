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
    void LevelSum(TreeNode *root,vector<int>&ls) {
        if(root==NULL)return;

        queue<TreeNode *>q;
        q.push(root);

        while(q.empty()==false) {
            int count=q.size();
            int sum = 0;
            for(int i=0;i<count;i++) {
                TreeNode *curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
            ls.push_back(sum);
        }
    }

    int maxLevelSum(TreeNode* root) {
        vector<int>ls;
        LevelSum(root,ls);

        int res = 0;
        for(int i=0;i<ls.size();i++) {
            if(ls[i]>ls[res]) {
                res = i;
            }
        }

        return res+1;
    }
};
