
https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
       
        int s1=s.length();
        int t1=t.length();

        if(s1!=t1) {return 0;}
         sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        cout<<s<<" "<<t<<endl;
        for(int i=0;i<s1;i++){
            if(s[i]!=t[i]){return 0;}
        }

        return 1;
    }
};
