class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = INT_MAX, profit = INT_MIN;

        for(auto x : prices)
        {
            buyPrice = min(buyPrice, x);
            profit = max(profit, x - buyPrice);
        }

        return profit;
    }
};
