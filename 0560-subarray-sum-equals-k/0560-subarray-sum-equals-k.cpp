class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        int preSum = 0, count = 0;
        for(int i = 0;i < n;i++) {
            preSum += arr[i];
            int remove = preSum - k;
            count += mpp[remove];
            mpp[preSum] += 1;
        }
        return count;
    }
};