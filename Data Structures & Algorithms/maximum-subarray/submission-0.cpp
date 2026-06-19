class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int global_max = INT_MIN, sum = 0;

        for(auto x : nums)
        {
            sum += x;
            global_max = max(sum, global_max);
            
            //if sum is less than zero then reset
            if(sum < 0)
                sum = 0;
        }
        
        return global_max;
    }
};
