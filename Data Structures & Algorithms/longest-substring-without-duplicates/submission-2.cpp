#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> checks;
        int maxLong = 0;
        int currLong = 0;
        int left = 0;
        for (int right = 0; right < s.size(); right++){
            while (checks.count(s[right])){
                checks.erase(s[left]);
                left++;
                currLong--;
            }
            checks.insert(s[right]);
            currLong++;
            maxLong = max(maxLong, currLong);
        }
        return maxLong;
    }
        
};
