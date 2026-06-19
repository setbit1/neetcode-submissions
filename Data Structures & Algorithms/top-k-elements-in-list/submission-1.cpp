class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> frequency_map;
        for(auto x : nums)
        {
            if(frequency_map.find(x) == frequency_map.end())
                frequency_map[x] = 1;
            else
                frequency_map[x]++;
        }
        vector<pair<int, int>> list;
        for(auto p : frequency_map)
            list.push_back({p.second, p.first});

        sort(list.begin(), list.end(), greater<pair<int, int>>());

        vector<int> ans;
        for(int i=0; i<k; i++)
            ans.push_back(list[i].second);
        
        return ans;
    }
};
