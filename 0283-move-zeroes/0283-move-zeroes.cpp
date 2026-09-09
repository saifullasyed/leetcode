class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++) {
            if(nums[i] != 0) {
                nums[start] = nums[i];
                start++;
            }
        }
        while(start < n) {
            nums[start] = 0;
            start++;
        }
    }
};