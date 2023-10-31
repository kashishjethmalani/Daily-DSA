
https://leetcode.com/problems/find-the-original-array-of-prefix-xor/

class Solution {
public:
    vector<int> findArray(vector<int>& a) {
        int n=a.size();
        if(n==1) {return a;}
        vector<int> ans(n);
        ans[0]=a[0];
        for(int i=1;i<n;i++){
            ans[i]=a[i]^a[i-1];
        }
        return ans;
        
    }
};
