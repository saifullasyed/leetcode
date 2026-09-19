class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int l = nums.size();
        vector<int> k(l);

        int j = 0;

        for(int i = 0;i < n;i++) {
            k[j] = nums[i];
            j += 2;
        }

        j = 1;

        for(int i = n ; i < l;i++) {
            k[j] = nums[i];
            j += 2;
        }

        return k;
    }
};