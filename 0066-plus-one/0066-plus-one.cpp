class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();

        for(int i = n - 1; i >= 0; i--) {
            arr[i] += 1;

            if(arr[i] <= 9) {
                return arr;
            }

            arr[i] = 0;
        }

        arr.insert(arr.begin(), 1);
        return arr;
    }
};