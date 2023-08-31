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
class FindElements {
public:
    map<int,bool>m;
    void inorder(TreeNode* root, int i) {
        if(root!=NULL) {
            inorder(root->left,2*i+1);
            m[i] = true;
            inorder(root->right,2*i+2);
        }
    }

    FindElements(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        inorder(root, 0);
    }
    
    bool find(int target) {
        if(m[target]) return true;
        else return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
