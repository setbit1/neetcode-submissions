class Solution {
public:
    vector<int> createValue(string s)
    {
        vector<int> val(26, 0);
        for(auto x : s)
            val[x-'a']++;
        return val;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> maps;
        vector<vector<string>> ans;
        for(auto s : strs)
            maps[createValue(s)].push_back(s);
            
        for(auto const& [key, value] : maps)
            ans.push_back(value);
        return ans;
    }
};
