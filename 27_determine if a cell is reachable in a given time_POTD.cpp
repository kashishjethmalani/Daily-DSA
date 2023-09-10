
https://leetcode.com/contest/weekly-contest-362/problems/determine-if-a-cell-is-reachable-at-a-given-time/

class Solution
{
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t)
    {
        int dist = max(abs(sx - fx), abs(sy - fy));
        if (dist == t)
        {
            return true;
        }
        if (t < dist)
        {
            return false;
        }
        if (dist == 0 and t == 1)
            return false;
        
        else return dist <= t;
    }
};
