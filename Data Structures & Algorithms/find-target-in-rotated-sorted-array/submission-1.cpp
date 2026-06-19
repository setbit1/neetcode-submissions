class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        while(start < end)
        {
            int mid = start + (end - start)/2;
            if(nums[0] <= nums[mid]){
                if(nums[0] <= target && target <= nums[mid])
                    end = mid;
                else
                    start = mid + 1;
            }
            else{
                if(nums[mid] < target && target <= nums[n-1])
                    start = mid+1;
                else
                    end = mid;
            }
                
        }
        return nums[start] == target ? start : -1;
    }
};
