https://leetcode.com/problems/max-consecutive-ones/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
{
    int ans = 0;
    int c = 0;
    for (auto i : nums)
    {
        if (i == 1)
            c++;
        else
        {
            
            c = 0;
        }
        ans = max(ans, c);
    }
    return ans;
}
};
