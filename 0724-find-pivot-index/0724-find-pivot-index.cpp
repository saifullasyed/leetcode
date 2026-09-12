class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = 0;i < n;i++) {
            int LeftSum = 0, RightSum = 0;
            for(int j = 0;j < i;j++) {
                LeftSum += nums[j];
            }
            for(int k = i+1;k < n;k++) {
                RightSum += nums[k];
            }
            if(LeftSum == RightSum) {
                return i;
            }
        }
        return -1;
    }
};