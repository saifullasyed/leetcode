class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int,int> freq;
        int n = arr.size();
        for(int i = 0;i < n;i++) {
            freq[arr[i]]++;
        }
        int k = n/2;
        for(int i = 0;i < n;i++) {
            if(freq[arr[i]] > k) {
                return arr[i];
            }
        }
        return 0;
    }
};