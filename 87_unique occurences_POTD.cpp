
https://leetcode.com/problems/unique-number-of-occurrences/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(auto it: arr){
            mp[it]++;
        }

        set<int> s;

        for(auto it:mp){
            s.insert(it.second);
        }
        int mp_len=mp.size();
        int s_len=s.size();

		return mp_len==s_len;
    }
};
