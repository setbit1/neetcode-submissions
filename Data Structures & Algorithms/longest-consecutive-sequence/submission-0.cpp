class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(auto x : nums)
            if(mp.find(x-1) != mp.end())
                mp[x] = mp[x-1]+1;
            else
                mp[x] = 1;
        for(auto& [key, value] : mp)
            ans = max(ans, value);
        return ans;
    }
};
