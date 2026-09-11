class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        if(arr.empty()) {
            return {};
        }

        int n = arr.size();
        vector<int> ans;
        unordered_map<int,int> frq;
        for(int i = 0;i < n;i++) {
            frq[arr[i]]++;
        }

        for(int i = 0;i < n;i++) {
            if(frq[arr[i]] > (n/3) ) {
                ans.push_back(arr[i]);
                frq[arr[i]] = 0;
            }
        }
        return ans;
    }
};