class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(auto x : nums)
            if(val != x)
                nums[k++] = x;
        return k;
    }
};

//fuck it