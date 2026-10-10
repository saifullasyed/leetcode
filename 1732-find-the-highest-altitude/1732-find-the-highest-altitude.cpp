class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> ans(n+1);
        for(int i = 1;i <= n;i++) {
            ans[i] = gain[i-1];
        }
        ans[0] = 0;
        for(int i = 1;i < n+1;i++) {
            ans[i] = ans[i]+ans[i-1];
        }
        return *max_element(ans.begin(), ans.end());
    }
};