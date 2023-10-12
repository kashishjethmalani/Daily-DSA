
https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> inorder;
        stack<TreeNode *> st;
        while (1)
        {
            if (root != NULL)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                if (st.empty())
                    break;
                root = st.top();
                inorder.push_back(root->val);
                st.pop();
                root = root->right;
            }
        }
        return inorder;
    }
};
