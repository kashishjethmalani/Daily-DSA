
https://leetcode.com/problems/find-the-winner-of-an-array-game/

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        if(k==1 ) return max(arr[0], arr[1]);
        if(k>=n) return *max_element(arr.begin(), arr.end());

        int curr_winner=arr[0];
        int curr_count=0;
        for(int i=1;i<n;i++){
            if(curr_winner>arr[i]) curr_count++;
            else{
                curr_winner=arr[i];
                curr_count=1;
            }

            if(curr_count==k) return curr_winner;
        }
    


    return curr_winner;
    }
};
