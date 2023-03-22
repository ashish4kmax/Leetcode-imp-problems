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
    int leftsum(TreeNode *root) {
        TreeNode *temp=root;
        int ls=0;
        int i=0;
        while(temp!=NULL) {
            if(i>=1) {
               ls+=temp->val;
            }
            temp=temp->left;
            i++;
        }

        return ls;
    }

    int rightsum(TreeNode *root) {
        TreeNode *curr=root;
        int rs=0;
        int i=0;
        while(curr!=NULL) {
            if(i>=1) {
                rs+=curr->val;
            }
            curr=curr->right;
            i++;
        }

        return rs;
    }

    bool checkTree(TreeNode* root) {
        int n1=leftsum(root);
        int n2=rightsum(root);
        int sums=root->val;
        if(n1+n2==sums) {
            return true;
        }
        else {
            return false;
        }
    }
};
