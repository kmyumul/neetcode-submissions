#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> checks;
        for (int i = 0; i < nums.size(); i++) {
            int other = target - nums[i];
            if (checks.count(other)) {
                return {checks[other], i};
            }
            checks[nums[i]] = i;
        }
        return{};
    }
};
