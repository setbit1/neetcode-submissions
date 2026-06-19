class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();

        int curr = 1;
        for(int i=0; i<size; i++)
        {
            curr = max(curr-1, nums[i]);
            if(curr == 0 and i != size-1)
                return false;
        }
        return true;
    }
};
