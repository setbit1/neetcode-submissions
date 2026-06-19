class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        while(i < j)
        {
            int index = i+(j-i)/2;
            if(nums[index] == target)
                return index;
            else if(nums[index] < target)
            {
                i = index + 1;
            }
            else if(nums[index] > target)
            {
                j = index - 1;
            }
        }
        if(nums[i] < target)
            return i+1;
        return i;
    }
};