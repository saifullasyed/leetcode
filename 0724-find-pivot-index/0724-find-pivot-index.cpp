class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(int i = 0; i < n; i++)
        {
            totalSum += nums[i];
        }
        int LeftSum = 0;
        for(int i = 0;i < n;i++) {
            int RightSum = totalSum - LeftSum - nums[i];            
            if(LeftSum == RightSum) {
                return i;
            }
            LeftSum += nums[i];
        }
        return -1;
    }
};