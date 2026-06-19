class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count[128] {};
        int ans = 0, n = s.size();
        for(int l=0, r=0; r<n; r++)
        {
            count[s[r]]++;
            while(count[s[r]] > 1)
                count[s[l++]]--;
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
