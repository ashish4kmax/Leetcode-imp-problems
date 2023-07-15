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
    void inorder(TreeNode *root, vector<int>& r) {
        if(root!=NULL) {
            inorder(root->left,r);
            r.push_back(root->val);
            inorder(root->right,r);
        }
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        vector<int>r1;
        vector<int>r2;

        inorder(root1,r1);
        inorder(root2,r2);

        vector<int>res;
        
        int n1 = r1.size();
        int n2 = r2.size();

        for(int i=0;i<n1;i++) {
            res.push_back(r1[i]);
        }

        for(int i=0;i<n2;i++) {
            res.push_back(r2[i]);
        }

        sort(res.begin(),res.end());

        return res;
    }
};

// Updating the solution :-
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
/*
class Solution {
public:
    void inorder(TreeNode *root, vector<int>& r) {
        if(root!=NULL) {
            inorder(root->left,r);
            r.push_back(root->val);
            inorder(root->right,r);
        }
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>r1;
        vector<int>r2;

        inorder(root1,r1);
        inorder(root2,r2);

        vector<int>res;

        int a = r1.size();
        int b = r2.size();

        int i;
        for(i=0;i<min(a,b);i++) {
            if(r1[i]==r2[i]) {
                res.push_back(r1[i]);
                res.push_back(r2[i]);
            }
            else if(r1[i]<r2[i]) {
                res.push_back(r1[i]);
                res.push_back(r2[i]);
            }
            else {
                res.push_back(r2[i]);
                res.push_back(r1[i]);
            }
        }

        cout<<i<<endl;
        // if(min(a,b)<max(a,b)) {
        //     for(int j=i;j<max(a,b);i++) {
        //         if(r1[i]!=NULL) {
        //             res.push_back(r1[i]);
        //         }
        //         else {
        //             res.push_back(r2[i]);
        //         }
        //     }
        // }

        return res;
    }
};

*/
