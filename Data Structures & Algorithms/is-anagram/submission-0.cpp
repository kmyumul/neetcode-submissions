#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> sCharCount, tCharCount;
        for (int i = 0; i < s.length(); i++) {
            if (sCharCount.find(s[i]) == sCharCount.end()) {
                sCharCount[s[i]] = 1;
            }
            if (tCharCount.find(t[i]) == tCharCount.end()) {
                tCharCount[t[i]] = 1;
            }
            sCharCount[s[i]]++;
            tCharCount[t[i]]++;
        }
        if (sCharCount == tCharCount) {
            return true;
        }
        return false;
    }
};
