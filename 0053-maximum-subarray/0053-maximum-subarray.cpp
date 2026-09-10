class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int Currentsum = 0;
        int Maxsum = INT_MIN;
        for(int i = 0;i < n;i++) {
            Currentsum += nums[i];
            Maxsum = max(Currentsum,Maxsum);
            if(Currentsum < 0) {
                Currentsum = 0;
            }
        }
        return Maxsum;
    }
};