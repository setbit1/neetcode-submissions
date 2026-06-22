class Solution {
public:
    int jump(vector<int>& nums) {
        int last = 0, mx = 0, ans = 0;
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            mx = max(mx, i+nums[i]);
            if(last == i){
                ans++;
                last = mx;
            }
        }
        return ans;
    }
};
