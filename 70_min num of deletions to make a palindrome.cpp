
https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1

  int n = S.length();
        
        int dp[n][n];
        for(int g=0;g<n;g++)
        {
            for(int i =0,j=g;j<n;i++,j++)
            {
                if(g==0)
                {
                    dp[i][j] = 1;
                }
                else if(g==1)
                {
                    if(S[i]==S[j])
                    {
                        dp[i][j] = 2;
                    }
                    else dp[i][j] = 1;
                }
                else
                {
                    if(S[i]==S[j])
                    {
                        dp[i][j] = 2 + dp[i+1][j-1];
                        
                    }
                    else
                    {
                        dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
                    }
                    
                }
            }
        }
        int ans = n-dp[0][n-1];
        return ans;
    } 
