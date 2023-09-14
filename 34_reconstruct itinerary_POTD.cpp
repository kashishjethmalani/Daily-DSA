
https://leetcode.com/problems/reconstruct-itinerary/description/?envType=daily-question&envId=2023-09-14

class Solution {
    void dfs(unordered_map<string, multiset<string>>& adj, vector<string>& ans, string s){
        while(adj[s].size()){
            string v=*(adj[s].begin());
            adj[s].erase(adj[s].begin());
            dfs(adj, ans,v);

        }

        ans.push_back(s);
    }
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>> adj;

        for(auto i:tickets){
            adj[i[0]].insert(i[1]);
        }

        vector<string >ans;
        dfs(adj, ans, "JFK");
        reverse(ans.begin(),ans.end());

        return ans;
    }
};
