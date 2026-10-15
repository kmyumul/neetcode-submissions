class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int l = 0, r = heights.size() - 1;
        while (l < r) {
            int width = r - l;
            int height = min(heights[l], heights[r]);
            result = max(result, width * height);
            if (heights[l] < heights[r]) {
                l++;
            }
            else {
                r--;
            }
        }
        return result;
    }
};
