https://leetcode.com/contest/biweekly-contest-111/problems/count-pairs-whose-sum-is-less-than-target/


class Solution
{
public:
    int countPairs(vector<int> &nums, int target)
    {
        int c=0;
        int l=nums.size();
        for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
                if(nums[i]+nums[j]<target){
                    c++;
                }
            }
        }
        return c;
    }
};
