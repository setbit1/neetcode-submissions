class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(auto x : nums)
        {
            if(k == 0 || x != nums[k-1])
                nums[k++] = x;
        }
        return k;
    }
};