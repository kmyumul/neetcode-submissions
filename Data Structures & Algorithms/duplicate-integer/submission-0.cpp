#include <unordered_map>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> valCount;
        for (int i = 0; i < nums.size(); i++) {
            if (valCount.find(nums[i]) == valCount.end()) {
                valCount[nums[i]] = 1;
                continue;
            }
            return true;
        }
        return false;
    }
};