class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int FirstPos = 0;
        for(int i = 0;i < nums.size();i++) {
            if(nums[i] != 0) {
                nums[FirstPos] = nums[i];
                FirstPos++;
            }
        }
        while(FirstPos < nums.size()) {
            nums[FirstPos] = 0;
            FirstPos++;
        }
    }
};