class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        function<void(int, int)> solve = [&](int i, int sum){
            if(sum == 0)
            {
                ans.push_back(temp);
                return;
            } 

            if(sum < nums[i])
                return;
            for(int j=i; j<nums.size(); ++j)
            {
                temp.push_back(nums[j]);
                solve(j, sum-nums[j]);
                temp.pop_back();
            }
        };
        
        solve(0, target);
        return ans;
    }
};
