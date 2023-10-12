
https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        stack<TreeNode*> st;
        
        if (root == nullptr)
            return preorder;

        st.push(root);

        while (!st.empty()) {
            TreeNode* current = st.top();
            st.pop();
            preorder.push_back(current->val);

            if (current->right)
                st.push(current->right);

            if (current->left)
                st.push(current->left);
        }

        return preorder;
    }
};
