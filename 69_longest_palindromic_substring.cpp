
https://www.geeksforgeeks.org/longest-palindromic-substring-using-dynamic-programming-2/

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int c=-1;
        string ans="";

        int n=s.length();
        bool dp[n][n];

        for(int g=0; g<n ;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0){
                    dp[i][j]=1;
                }
                else if(g==1){
                    dp[i][j]=(s[i]==s[j]);
                }

                else{
                    dp[i][j]=(s[i]==s[j] and dp[i+1][j-1]);
                }

                if(dp[i][j] and c<j-i+1){
                    ans=s.substr(i,j-i+1);
                    c=ans.length();
                }
            }
        }


        return ans;
    }
};
