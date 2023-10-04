
https://www.codingninjas.com/studio/problems/creating-and-printing_1214551?leftPanelTab=1

    // N => Is Number Of Nodes
    // M => Is Number Of edges
    
    //Code
    vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {

    vector<vector<int>>ans(n);
    // For Each Node
    for(int i = 0; i < n; i++){
        ans[i].push_back(i);
    }
    // For Edges
    for(int i = 0; i<m; i++){
        ans[edges[i][0]].push_back(edges[i][1]);
        ans[edges[i][1]].push_back(edges[i][0]);
    }
    return ans;
}
