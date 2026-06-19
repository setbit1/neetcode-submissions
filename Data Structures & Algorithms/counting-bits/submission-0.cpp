class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0; i<=n; i++)
        {
            int count = 0, m = i;
            while(m > 0)
            {
                if((m & 1) == 1)
                    count++;
                m >>= 1;
            }
            ans[i] = count;
        }
        return ans;
    }
};
