class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, last = prices[0];
        for(int i=0; i<prices.size(); i++){
            if(prices[i] > last){
                ans += prices[i]-last;
                last = prices[i];
            }
            else{
                last = prices[i];
            }
        }
        return ans;
    }
};