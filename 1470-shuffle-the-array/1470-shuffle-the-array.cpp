class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> k;

        for(int i = 0;i < n;i++) {
            k.push_back(nums[i]);
            k.push_back(nums[i+n]);
        }
        return k;
    }
};