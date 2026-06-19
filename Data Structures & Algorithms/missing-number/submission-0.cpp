class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int actual = 0, expected = (size*(size+1))/2;

        for(auto x : nums)
            actual += x;
        
        return expected - actual;
    }
};
