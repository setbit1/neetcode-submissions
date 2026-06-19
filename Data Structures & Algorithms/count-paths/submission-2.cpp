class Solution {
public:
    
    int uniquePaths(int m, int n) {
        long long int ans = 1;
        int a = m+n-2;
        int b = m-1;
        
        b = b > (a-b) ?  a-b : b;
        for(int i=0; i<b; i++)
        {
            ans *= (a - i);
            ans /= i + 1;
        }
        return ans;
    }
};
