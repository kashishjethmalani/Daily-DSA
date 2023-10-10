
https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    public:
vector<vector<int>> levelOrder(TreeNode* root)
{
	vector<vector<int>> result;
	recur_levelOrder(result, root, 0);
	return result;
}

void recur_levelOrder(vector<vector<int>> &result, TreeNode *root, int level)
{
	if (!root)
	{
    	return;
    }
    if ((level+1) > result.size())
    {
	    result.push_back(vector<int> {});
    }
    result[level].push_back(root->val);
    recur_levelOrder(result, root->left, level+1);
    recur_levelOrder(result, root->right, level+1);
}
};
