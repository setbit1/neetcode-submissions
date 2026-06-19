class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();

        vector<int> prefix(size);
        prefix[0] = 1;
        for(int i=1; i<size; i++)
            prefix[i] = prefix[i-1]*nums[i-1];

        vector<int> ans(size);
        int post = 1;

        for(int i=size-1; i>=0 ; i--)
        {
            ans[i] = prefix[i]*post;
            post *= nums[i];
        }

        return ans;
    }
};
