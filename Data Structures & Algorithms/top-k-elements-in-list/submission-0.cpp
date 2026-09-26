class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x]++;
        
        vector<pair<int, int>> helper;
        for(auto [key, value] : mp){
            helper.push_back({key, value});
        }

        sort(helper.begin(), helper.end(), [](const pair<int, int> p1, const pair<int, int> p2){
            if(p1.second == p2.second)
                return p1.first < p2.first;
            return p1.second > p2.second;
        });
        
        vector<int> ans;
        for(int i=0; i<k; i++)
            ans.push_back(helper[i].first);
        
        return ans;
    }
};
