class Solution {
public:
    int coinChange(vector<int>& coins, int amount) { 
        vector<int> ans(amount+1, amount+1);
        ans[0] = 0;
        for(int i=1; i<=amount; i++){
            for(auto x: coins){
                if(i-x >= 0){
                    ans[i] = min(ans[i], ans[i-x]+1);
                }
            }
        }
        return ans[amount]<=amount ? ans[amount] : -1;
    }
};
