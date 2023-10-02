
https://leetcode.com/problems/reverse-words-in-a-string-iii/description/?envType=daily-question&envId=2023-10-01

class Solution
{
public:
    string reverseWords(string s)
    {
        int j=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
            if(i==n-1){
                reverse(s.begin()+j,s.end());
            }
        }
        return s;
    }
};
