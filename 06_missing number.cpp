https://leetcode.com/problems/missing-number/description/



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();

        int sum=0;

        for(int i=0;i<l;i++){
            sum+=nums[i];
        }

        int temp=(l*(l+1))/2;

        return temp-sum;
    }
};
