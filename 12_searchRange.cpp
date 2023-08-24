https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/


class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans{-1, -1};

        int c = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                c++;
                ans[1] = i;
                ans[0] = i - (c - 1);
            }
        }

        return ans;
    }
};
