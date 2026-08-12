class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int sum = nums[i] + nums[j];

                if(sum == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};