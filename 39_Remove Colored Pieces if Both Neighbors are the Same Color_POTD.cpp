
https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/?envType=daily-question&envId=2023-10-02

class Solution
{
public:
    bool winnerOfGame(string s)
    {
        int a=0,b=0;
        int n=s.length();

        for(int i=0;i<n-2;i++){
            if(s[i]=='A' and s[i+1]=='A' and s[i+2]=='A'){
                a++;
            }
            else if(s[i]=='B' and s[i+1]=='B' and s[i+2]=='B'){
                b++;
            }
        }
        cout<<a<<" "<<b<<endl;
        return a>b;
    }
};
