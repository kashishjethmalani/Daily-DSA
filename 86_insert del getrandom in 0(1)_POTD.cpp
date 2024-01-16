
https://leetcode.com/problems/insert-delete-getrandom-o1/


class RandomizedSet {
    vector<int> v;
    unordered_map<int,int>mp;

public:
    RandomizedSet() {
        
    }
    bool search(int val){
        if(mp.find(val)!=mp.end()){return true;}
        else return false;
    }
    bool insert(int val) {
        if(search(val)){return 0;}

        v.push_back(val);
        mp[val]=v.size()-1;
        return 1;
    }
    
    bool remove(int val) {
        if(!search(val)) return 0;

        auto it=mp.find(val);
        v[it->second]=v.back();
        v.pop_back();
        mp[v[it->second]]=it->second;
        mp.erase(val);

        return 1;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
