class Solution {
public:
    int rob(vector<int>& rob) {
        int n = rob.size();
        if(n == 1)
            return rob[0];

        rob[1] = max(rob[0], rob[1]);
        for(int i=2; i<n; i++)
            rob[i] = max(rob[i-1], rob[i-2]+rob[i]);

        return rob[n-1];
    }
};
