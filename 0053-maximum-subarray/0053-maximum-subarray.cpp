class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int Currsum = 0;
        int Maxsum = INT_MIN;
        for(int i = 0;i < n;i++){
            Currsum += nums[i];
            Maxsum = max(Currsum,Maxsum);
            if(Currsum < 0) {
                Currsum = 0;
            }
        }
        return Maxsum;
    }
};