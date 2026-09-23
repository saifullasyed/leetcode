class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n = candies.size();
        
        // finding maximum candy in the array
        int largest = candies[0];
        for(int i = 0;i < n;i++) {
            if(candies[i] > largest) {
                largest = candies[i];
            }
        }

        for(int i = 0;i < n;i++) {
            int kidsWC = candies[i] + extraCandies;
            if(kidsWC >= largest) {
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};