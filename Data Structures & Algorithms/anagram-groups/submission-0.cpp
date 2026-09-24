class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;
        for(int i=0; i<strs.size(); i++){
            vector<int> counter(26, 0);
            for(auto c : strs[i]){
                counter[c-'a']++;
            }
            mp[counter].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto [v, s] : mp){
            ans.push_back(s);
        }
        return ans;
    }
};
