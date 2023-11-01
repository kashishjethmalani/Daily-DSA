
https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

void frequencyCount(vector<int>& arr,int N, int P)
    { 
         unordered_map<int, int> mp;
        for(int i=0;i<arr.size();i++) {
                mp[arr[i]]++;
        }
        for(int i=1;i<=N;i++) {
            arr[i-1] = mp[i];
        }
    }
