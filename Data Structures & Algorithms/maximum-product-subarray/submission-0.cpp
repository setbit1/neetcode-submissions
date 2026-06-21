class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = nums[0], minP = nums[0], ans = nums[0];
        for(int i=1; i<nums.size(); i++){
           int mini = minP, maxi = maxP;
           minP = min({nums[i], nums[i]*mini, nums[i]*maxi});
           maxP = max({nums[i], nums[i]*mini, nums[i]*maxi});
           ans = max(ans, maxP);
        }
        return ans;
    }
};
