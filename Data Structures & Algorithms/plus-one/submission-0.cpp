class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans(n);
        int carry = 1;

        for(int i= n-1; i>=0; i--)
        {
            if(carry + digits[i] <= 9)
            {
                ans[i] = carry+digits[i];
                carry = 0;
            }
            else
                ans[i] = 0;
                
        }
        if(carry == 0)
            return ans;
        ans.insert(ans.begin(), 1);

        return ans;
    }
};
