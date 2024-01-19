
https://leetcode.com/problems/minimum-falling-path-sum/submissions/1150426025/?envType=daily-question&envId=2024-01-19


class Solution
{
public:
	int minFallingPathSum(vector<vector<int>> &matrix)
	{

		int n = matrix.size();
		int m = matrix[0].size();

		vector<vector<int>> dp;

		for (int i = 0; i < m; i++)
		{
			dp[0][i] = matrix[0][i];
		}

        for(int i=1;i<n;i++){
            
            for(int j=0;j<m;j++){
                int ld=INT_MAX, rd=INT_MAX;
                
            }
        }
	}
};
