
https://leetcode.com/problems/number-of-good-pairs/

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int ans = 0;
        unordered_map<int, vector<int>> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int t = nums[i];
            m[t].push_back(i);
        }
        for (auto &kv : m)
        {
            int temp = kv.second.size();

            cout << temp << endl;
            ans += (((temp) * (temp - 1)) / 2);
        }
        return ans;
    }
};
