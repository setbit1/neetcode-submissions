class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> reg(n, 1);
        vector<int> rev(n, 1);

        reg[0] = nums[0];
        rev[n-1] = nums[n-1];

        for(int i=1; i<n; i++)
            reg[i] = reg[i-1]*nums[i];
        
        for(int i=n-2; i>=0; i--)
            rev[i] = rev[i+1]*nums[i];

        vector<int> ans(n, 1);
        for(int i=0; i<n; i++){
            int f =1, b = 1;
            if(i > 0)
                f = reg[i-1];
            if(i < n-1)
                b = rev[i+1];
            ans[i] = f*b;
        }
            
        return ans;
    }
};
