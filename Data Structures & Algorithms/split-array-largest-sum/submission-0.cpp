class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = 0, right = 0;
        for(int& x : nums){
            left = max(left, x);
            right += x;
        }

        auto check = [&](int val){
            int s = INT_MAX-left, count = 0;
            for(int& x : nums){
                s += x;
                if( s > val){
                    s = x;
                    count++;
                }
            }
            return count <= k;
        };

        while(left < right){
            int mid = (left+right) >> 1;
            if(check(mid))
                right = mid;
            else
                left = mid +1;
        }
        return left;
    }
};