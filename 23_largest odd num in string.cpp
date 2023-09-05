
https://leetcode.com/problems/largest-odd-number-in-string/description/


class Solution {
public:
    string largestOddNumber(string s) {
        for(int i = s.size()-1; i >= 0; i--)
        {
            if((int)(s[i] - 48) % 2 != 0)
            {
                return s.substr(0, i+1);
            }
        }
        return "";
    }
};
