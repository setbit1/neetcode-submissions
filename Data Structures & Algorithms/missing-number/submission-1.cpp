class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorAll=0, xorNums=0;
        for(auto x : nums)
            xorNums ^= x;
        
        for(int i=0; i<=nums.size(); i++)
            xorAll ^= i;

        return xorAll ^ xorNums;
    }
};
