
https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  private:
	void dfs(int node, vector<int> adj[], int vis[], vector<int> &result)
	{
		vis[node] = 1;
		result.push_back(node);
		for (auto i : adj[node])
		{
			if (!vis[i])
			{
				dfs(i, adj, vis, result);
			}
		}
	}

public:
	vector<int> dfsOfGraph(int V, vector<int> adj[])
	{
		int vis[V] = {0};
		int startNode = 0;
		vector<int> result;
		dfs(startNode, adj, vis, result);
		return result;
	}
};
