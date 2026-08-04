#include <unordered_map>
#include <set>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> seen;
        vector<vector<int>> result = {};

        unordered_map<int,int> check;
        for (int i = 0; i < nums.size(); i++) {
            int r = i;
            int l = 0;
            while (r >= 2 && r - l >= 2) {
                int m = 0 - nums[r] - nums[l];
                vector<int> triplet = {nums[l], m, nums[r]};
                sort(triplet.begin(), triplet.end());
                if (check.count(m) && check[m] != l && !seen.count(triplet)) {
                    seen.insert(triplet);
                    result.push_back(triplet);
                }
                l++;
            }
            check[nums[i]] = i;
        }
        return result;
    }
};
