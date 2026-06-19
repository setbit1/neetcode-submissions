class Solution {
public:
    int robRange(vector<int>& nums, int start, int end)
    {
        int f = 0, g = 0;
        for(; start<=end; ++start)
        {
            int ff = max(f, g);
            g = f+nums[start];
            f = ff;
        }
        return max(f, g);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return nums[0];
        return max(robRange(nums, 0, n-2), robRange(nums, 1, n-1));
    }
};
