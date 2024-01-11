
https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/?envType=daily-question&envId=2024-01-11

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
int ans=0;
    void solve(TreeNode* &root, int mini, int maxi){
        if(root==NULL){
            ans=max(ans, abs(maxi-mini));
            return;
        }

        maxi=max(maxi, root->val);
        mini=min(mini, root->val);
        solve(root->left, mini, maxi);
        
        solve(root->right, mini, maxi);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        
        solve(root, root->val, root->val);
        return ans;
    }
};
