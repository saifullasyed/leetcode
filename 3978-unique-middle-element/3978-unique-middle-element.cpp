class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();

        map<int,int> freq;

        for(int i = 0;i < n;i++) {
            freq[nums[i]]++;
        }
        
        int middle = nums[n/2];

        if(freq[middle] != 1) {
            return false;
        }
        return true;
    }
};