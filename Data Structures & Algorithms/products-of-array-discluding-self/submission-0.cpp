class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);

        int before = 1;
        for (int i = 0; i < nums.size(); i++) {
            result[i] = before;
            before *= nums[i];
        }
        int after = 1;
        for (int j = nums.size() - 1; j >= 0; j--) {
            result[j] *= after;
            after *= nums[j];
        }
        return result;
    }
};
