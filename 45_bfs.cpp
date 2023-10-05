
https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution
{
public:
    vector<int> bfsOfGraph(int v, vector<int> adj[])
    {
        vector<int> ans;
        int vis[v] = {0};
        vis[0] = 1;

        queue<int> q;
        q.push(0);
        while (!q.empty())
        {

            int node = q.front();
            q.pop();
            ans.push_back(node);

            for (auto i : adj[node])
            {
                if (!vis[i])
                {
                    vis[i] = 1;
                    q.push(i);
                }
            }
            vis[node] = 1;
        }
        return ans;
    }
};
