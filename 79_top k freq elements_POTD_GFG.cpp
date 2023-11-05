
https://leetcode.com/problems/find-the-winner-of-an-array-game/

vector<int> topK(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto i:m){
            q.push({i.second, i.first});
        }
        while(!q.empty() and k--){
            ans.push_back(q.top().second);
            q.pop();
        }
        
        return ans;
    }
