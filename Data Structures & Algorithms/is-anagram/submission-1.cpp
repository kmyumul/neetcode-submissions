#include <map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        map<char, int> check1;
        map<char, int> check2;
        for (int i = 0; i < s.size(); i++) {
            check1[s[i]]++;
            check2[t[i]]++;
        }
        return check1 == check2;
    }
};
