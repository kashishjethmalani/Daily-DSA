
https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-ii/description/

class Solution
{
public:
    long long maximumTripletValue(vector<int> &nums)
    {
        long long ans = 0;
        int n = nums.size();
        vector<int> v(n, 0);
        v[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            v[i] = max(v[i + 1], nums[i]);
        }
        int m = nums[0];
        for (int i = 1; i < n - 1; i++)
        {
            m = max(m, nums[i-1]);
            if (m > nums[i])
            {
                ans = max(ans, (m - nums[i]) * (long long)v[i + 1]);
            }
        }
        return ans;
    }
};
