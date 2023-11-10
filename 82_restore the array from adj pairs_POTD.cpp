
https://leetcode.com/problems/restore-the-array-from-adjacent-pairs/

class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> graph;

        for(auto pair:adjacentPairs){
            graph[pair[0]].push_back(pair[1]);
            graph[pair[1]].push_back(pair[0]);

        }

        vector<int> ans;

        for(auto entry : graph){
            if(entry.second.size()==1){
                ans ={entry.first, entry.second[0]};break;
            }
        }

        while(ans.size() < adjacentPairs.size()+1){
            int last=ans[ans.size()-1];
            int prev=ans[ans.size()-2];
            vector<int> v=graph[last];
            int nextElement= (v[0]!=prev) ? v[0]: v[1];
            ans.push_back(nextElement);
        }

        return ans;
    }
};
