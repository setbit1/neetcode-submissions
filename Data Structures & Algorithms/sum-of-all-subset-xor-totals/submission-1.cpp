class Solution {
public:
    void subset(int index, int& sum, int xord, vector<int>& nums)
    {
        if(index == nums.size())
        {
            sum+=xord;
            return;
        }
        subset(index+1, sum, xord, nums);

        xord ^= nums[index];
        subset(index+1, sum, xord, nums);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        int xord = 0;
        subset(0, sum, xord, nums);

        return sum;
    }
};