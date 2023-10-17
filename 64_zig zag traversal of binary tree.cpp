
https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if(!root) return ans;
        deque<TreeNode*> dq;
        dq.push_back(root);
        bool lefttoright=1;

        while(!dq.empty()){
            int len = dq.size();
            vector<int> v;
            while(len--){
                if(!lefttoright){
                    root=dq.back();
                    dq.pop_back();
                    v.push_back(root->val);
                    if(root->right) dq.push_front(root->right);
                    if(root->left) dq.push_front(root->left);
                }
                else{
                    root=dq.front();
                    dq.pop_front();
                    v.push_back(root->val);
                    if(root->left) dq.push_back(root->left);
                    if(root->right) dq.push_back(root->right);
                }
            }
            ans.push_back(v);
            lefttoright=!lefttoright;
        }
        return ans;
    }

    

};
