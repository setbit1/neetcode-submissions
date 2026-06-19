class Solution {
public:
    vector<vector<int>> ans;
    void findAll(int index, vector<int> tmp, vector<int>& nums)
    {
        if(index == nums.size())
        {
            ans.push_back(tmp);
            return;
        }

        findAll(index+1, tmp, nums);
        tmp.push_back(nums[index]);
        findAll(index+1, tmp, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> tmp;
        findAll(0, tmp, nums);

        return ans;
    }
};
