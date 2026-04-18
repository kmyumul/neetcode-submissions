#include <vector>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<vector<int>, vector<string>> groups;
        for (string str : strs) {
            vector<int> charCount(26, 0);
            for (char c : str) {
                charCount[c - 'a']++;
            }
            groups[charCount].push_back(str);
        }
        for (auto [val, words] : groups) {
            result.push_back(words);
        }
        return result;
    }
};
