class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int CurrentOnes = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++) {
            if(nums[i] == 1) {
                CurrentOnes++;
                if(CurrentOnes > maxOnes) {
                    maxOnes = CurrentOnes;
                }
            }else {
                CurrentOnes = 0;
            }
        }
        return maxOnes;
    }
};