class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n =  nums.size();
        vector<int> counter(n, 1);
        int ans = 0;
        for(int i=0; i<n; i++){
            int j=i;
            while(j>=0){
                if(nums[i] > nums[j])
                    counter[i] = max(counter[i], counter[j]+1);
                j--;
            }
            ans = max(ans, counter[i]);
        }
        return ans;
    }
};
