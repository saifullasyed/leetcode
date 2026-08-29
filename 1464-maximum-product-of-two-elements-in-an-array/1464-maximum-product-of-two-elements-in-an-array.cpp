class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int largest = 0;
        int index = 0;
       for(int i =0;i < n;i++) {
            if(nums[i] > largest ) {
                largest = nums[i];
                index = i;
            }
       }
       int secLargest = -1;
       for(int i = 0;i < n;i++) {
        if(i != index && nums[i] <= largest && nums[i] > secLargest) {
            secLargest = nums[i];
        }
       }
       return (largest-1)*(secLargest-1);
    }
};