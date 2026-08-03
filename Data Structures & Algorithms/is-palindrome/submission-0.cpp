#include <stack>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> forward;
        stack<char> backward;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])){
                forward.push(tolower(s[i]));
            }
        }
        for (int j = s.size() - 1; j >= 0; j--){
            if (isalnum(s[j])){
                backward.push(tolower(s[j]));
            }
        }
        return forward == backward;
    }
};
