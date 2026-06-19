class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> score;
        for(auto x : nums)
        {
            if(score.find(x) != score.end())
                return true;
            else
                score.insert(x);
        }
        return false;
    }
};
