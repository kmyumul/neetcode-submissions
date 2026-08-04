class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int profit = 0;
        for (int sell = 1; sell < prices.size(); sell++) {
            if (prices[sell] > prices[buy]) {
                profit = max(profit, prices[sell] - prices[buy]);
            }
            else {
                buy = sell;
            }
        }
        return profit;
    }
};
 