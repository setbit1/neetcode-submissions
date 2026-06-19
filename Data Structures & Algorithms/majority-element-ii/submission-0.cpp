class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(auto x : nums){
            if(hash.find(x) == hash.end())
                hash[x] = 1;
            else
                hash[x]++;
        }

        vector<int> ans;
        for(auto [key, value] : hash)
            if(value > nums.size()/3)
                ans.push_back(key);
        return ans;
    }
};