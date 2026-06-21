class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int x : nums)
            sum += x;
        
        if(sum % 2 != 0)
            return false;
        
        int target = sum/2;
        vector<int> hash(target + 1, false);
        hash[0] = true;
        for(int x : nums){
            for(int i=target; i>=x; i--){
                hash[i] |= hash[i-x];
            }
        }
        return hash[target];
        
    }
};
