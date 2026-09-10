class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int Pos = 0;
        int Neg = 1;
        for(int i = 0;i < n;i++) {
            if(nums[i] < 0) {
                ans[Neg] = nums[i];
                Neg+=2;
            }else{
                ans[Pos] = nums[i];
                Pos+=2;
            }
        }
        return ans;
    }
};