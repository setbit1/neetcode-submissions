class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero=-1;

        //sort all zeros to first
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                swap(nums[i], nums[zero+1]);
                zero++;
            }
        }

        //sort all two to last
        int two = n;
        for(int i=n-1; i>=0; i--){
            if(nums[i] == 2){
                swap(nums[i], nums[two-1]);
                two--;
            }
        }
    }
};