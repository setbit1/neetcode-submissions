class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> spend(n+1, 0);

        spend[0] = 0;
        spend[1] = 0;
        for(int i=2; i<=n; i++)
            spend[i] = min(spend[i-1]+cost[i-1], spend[i-2]+cost[i-2]);
        
        return spend[n];
    }
};
