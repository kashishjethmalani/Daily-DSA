
https://www.geeksforgeeks.org/problems/c-letters-collection4552/1

vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
{
    vector<int> ans;
    for (int i = 0; i < q; i++)
    {
        int hop = queries[i][0];
        int r = queries[i][1];
        int c = queries[i][2];
        if (hop == 1)
        {
            int sum = 0;
            int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
            int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

            for (int j = 0; j < 8; j++)
            {
                int nr = r + dr[j];
                int nc = c + dc[j];

                if (nr >= 0 and nc >= 0 and nr < n and nc < m)
                {
                    sum += mat[nr][nc];
                }
            }

            ans.push_back(sum);
        }

        else if(hop ==2)
        {
            int sum = 0;
            int dr[] = {-2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, 2, -2, 2, -2, 2};
            int dc[] = {-2, -2, -2, -2, -2, 2, 2, 2, 2, 2, 0, 0, -1, -1, 1, 1};

            for (int j = 0; j < 16; j++)
            {
                int nr = r + dr[j];
                int nc = c + dc[j];

                if (nr >= 0 and nc >= 0 and nr < n and nc < m)
                {
                    sum += mat[nr][nc];
                }
            }

            ans.push_back(sum);
        }

        
    }
    return ans;
}
