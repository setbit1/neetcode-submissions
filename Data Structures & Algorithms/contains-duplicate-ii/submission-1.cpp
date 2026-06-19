class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> hash;
        for(int i=0; i<k; i++)
            if(hash.find(nums[i]) != hash.end())
                return true;
            else
                hash.insert(nums[i]);
        
        for(int i=0; i<nums.size()-k; i++)
        {
            if(hash.find(nums[i+k]) != hash.end())
                return true;
            else
                hash.insert(nums[i+k]);
            hash.erase(nums[i]);
        }

        return false;
    }
};