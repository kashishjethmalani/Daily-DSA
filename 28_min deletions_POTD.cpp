
https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/

class Solution {
public:
    int minDeletions(string s) {

        unordered_map<char,int> m;
        int ans=0;
        unordered_set<int> used_freq;

        for(char i:s){
            m[i]++;
        
        }

        for(auto i:m){
            int freq=i.second;

            while(freq>0 and used_freq.find(freq)!=used_freq.end()){
                freq--;
                ans++;
            }

            used_freq.insert(freq);
        }

        return ans;
        
    }
};
